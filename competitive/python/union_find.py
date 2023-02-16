class UnionFindTree:
    def __init__(self, N):
        self.parents = [-1] * N
        return

    def flush(self):
        tree = [(i, self.parents[i]) for i in range(len(self.parents))]
        print(*tree)

    def root(self, x):
        r = x
        while self.parents[r] >= 0:
            r = self.parents[r]
        return r

    def same(self, x, y):
        return self.root(x) == self.root(y)

    def merge(self, x, y):
        rx = self.root(x)
        ry = self.root(y)
        if rx == ry:
            return
        if self.parents[rx] > self.parents[ry]:
            rx, ry = ry, rx
        self.parents[rx] += self.parents[ry]
        self.parents[ry] = rx
        return
