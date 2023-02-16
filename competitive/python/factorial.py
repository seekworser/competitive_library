def cmb_init(N, p):
    fact = [1, 1]
    factinv = [1, 1]
    inv = [0, 1]

    for i in range(2, N + 1):
        fact.append((fact[-1] * i) % p)
        inv.append((-inv[p % i] * (p // i)) % p)
        factinv.append((factinv[-1] * inv[-1]) % p)
    return [fact, factinv, p]

def cmb(n, r, f):
    if n < r:
        return 0
    return f[0][n] * f[1][r] * f[1][n-r] % f[2]

p = 10 ** 9 + 7
f = cmb_init(10 ** 5, p)
print(cmb(99999, 50000, f))
