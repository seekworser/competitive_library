from asyncore import write
from logging import basicConfig
import numpy as np
from itertools import product
import sys

for i in range(10):
    n = np.random.randint(1, 100)
    m = np.random.randint(1, 100)
    p = np.random.randint(1, 100)
    a = np.matrix(np.random.randint(-100, 100, size=(n, m)))
    b = np.matrix(np.random.randint(-100, 100, size=(m, p)))
    with open("test/random-{0:03d}.in".format(i), "w") as f:
        f.write("{0} {1} {2}\n".format(n, m, p))
        for j, k in product(range(n), range(m)):
            f.write("{0}".format(a[j, k]))
            if (k != m-1): f.write(" ")
            else: f.write("\n")
        for j, k in product(range(m), range(p)):
            f.write("{0}".format(b[j, k]))
            if (k != p-1): f.write(" ")
            else: f.write("\n")
    c = a * b
    with open("test/random-{0:03d}.out".format(i), "w") as f:
        for j, k in product(range(n), range(p)):
            f.write("{0}".format(c[j, k]))
            if (k != p-1): f.write(" ")
            else: f.write("\n")
