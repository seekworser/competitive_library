def binsearch_int(s, e, f):
    """
    Parameters
    ----------
    s : int
    e : int
    f : callable
        f(a) returns True if a <= a_max else returns False
    """
    c_min = s
    c_max = e
    while c_min != c_max:
        p = (c_min + c_max + 1) // 2
        result = f(p)
        if result:
            c_min = p
        else:
            c_max = p - 1
    return c_min

def f(X):
    return X <= 1000

print(binsearch_int(0, 10000, f))