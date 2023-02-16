from itertools import accumulate, product


class Imos:
    def __init__(self, N) -> None:
        self.edges = [0] * N
        self.N = N
        return

    def add(self, start: int, end: int) -> None:
        self.edges[start] += 1
        if end != self.N - 1:
            self.edges[end+1] -= 1
        return

    def accumulate(self) -> list:
        return list(accumulate(self.edges))

class Imos_2:
    def __init__(self, H, W) -> None:
        self.H = H
        self.W = W
        self.edges = [[0] * self.W for _ in range(self.H)]
        return

    def add(self, start, end) -> None:
        self.edges[start[0]][start[1]] += 1
        if end[0] != self.H - 1:
            self.edges[end[0]+1][start[1]] -= 1
        if end[1] != self.W - 1:
            self.edges[start[0]][end[1]+1] -= 1
        if end[0] != self.H - 1 and end[1] != self.W - 1:
            self.edges[end[0]+1][end[1]+1] += 1
        return

    def accumulate(self) -> list:
        accum = [list(accumulate(l)) for l in self.edges]
        for i, j in product(range(1, self.H), range(self.W)):
                accum[i][j] += accum[i-1][j]
        return accum