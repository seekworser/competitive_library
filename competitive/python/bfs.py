from collections import deque


def bfs(n, G):
    # return max length path from node n
    # G = [[[n0, d0], [n1, d1]], [[n2, d2], ...], ...]
    dist = [None] * len(G)
    que = deque([n])
    dist[n] = 0
    while que:
        v = que.popleft()
        d = dist[v]
        for w in G[v]:
            if dist[w[0]] is not None:
                continue
            dist[w[0]] = d + w[1]
            que.append(w[0])
    d = max(dist)
    return dist.index(d), d

N = int(input())
G = [[] for _ in range(N)]
for _ in range(N - 1):
    A, B = [int(i) for i in input().split(" ")]
    G[A - 1].append([B - 1, 1])
    G[B - 1].append([A - 1, 1])

u, _ = bfs(0, G)
_, d = bfs(u, G)
print(d + 1)