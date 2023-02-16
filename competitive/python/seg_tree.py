class SegTree:
    """
    init(init_val, ide_ele): 配列init_valで初期化 O(N)
    update(k, x): k番目の値をxに更新 O(logN)
    query(l, r): 区間[l, r)をsegfuncしたものを返す O(logN)
    """
    def __init__(self, l: list, f: callable=lambda x, y: x + y, identity: int=0):
        """
        l: 配列の初期値
        f: 区間にしたい操作
        e: 単位元
        n: 要素数
        num: n以上の最小の2のべき乗
        tree: セグメント木(1-index)
        """
        n = len(l)
        self.f = f
        self.identity = identity
        self.num = 1 << (n - 1).bit_length()
        self.tree = [self.identity] * 2 * self.num
        # 配列の値を葉にセット
        for i in range(n):
            self.tree[self.num + i] = l[i]
        # 構築していく
        for i in range(self.num - 1, 0, -1):
            self.tree[i] = self.f(self.tree[2 * i], self.tree[2 * i + 1])

    def update(self, k: int, x):
        """
        k番目の値をxに更新
        k: index(0-index)
        x: update value
        """
        k += self.num
        self.tree[k] = x
        while k > 1:
            self.tree[k >> 1] = self.f(self.tree[k], self.tree[k ^ 1])
            k >>= 1

    def query(self, l: int, r: int):
        """
        [l, r)のsegfuncしたものを得る
        l: index(0-index)
        r: index(0-index)
        """
        res = self.identity

        l += self.num
        r += self.num
        while l < r:
            if l & 1:
                res = self.f(res, self.tree[l])
                l += 1
            if r & 1:
                res = self.f(res, self.tree[r - 1])
            l >>= 1
            r >>= 1
        return res

st = SegTree(list(range(100)))
print(st.query(0, 100))