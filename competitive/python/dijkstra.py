from heapq import heappush, heappop
from math import inf

N, M = map(int, input().split())

G = [[] for _ in range(N)]
for _ in range(M):
  a, b, c = map(int, input().split())
  G[a-1].append((b-1, c))
  G[b-1].append((a-1, c))

f_to = [inf for _ in range(N)]
to_N = [inf for _ in range(N)]

h = [(0, 0)]
f_to[0] = 0
while h:
  c, n = heappop(h)
  for nn, cn in G[n]:
    if f_to[nn] > c + cn:
      f_to[nn] = c + cn
      heappush(h, (c + cn, nn))

h = [(0, N-1)]
to_N[N-1] = 0
while h:
  c, n = heappop(h)
  for nn, cn in G[n]:
    if to_N[nn] > c + cn:
      to_N[nn] = c + cn
      heappush(h, (c + cn, nn))

for i in range(N):
  print(f_to[i] + to_N[i])