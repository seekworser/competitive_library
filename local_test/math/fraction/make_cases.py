from fractions import Fraction
import random

for i in range(10):
    n = random.randint(-10 ** 4, 10 ** 4)
    m = random.randint(1, 10 ** 4)
    s = random.randint(-10 ** 4, 10 ** 4)
    t = random.randint(1, 10 ** 4)
    with open("test/random-{0:03d}.in".format(i), "w") as f:
        f.write("{0} {1} {2} {3}\n".format(n, m, s, t))
    a = Fraction(n, m)
    b = Fraction(s, t)
    with open("test/random-{0:03d}.out".format(i), "w") as f:
        c = a + b
        f.write("{0}\n".format(float(c)))
        c = a - b
        f.write("{0}\n".format(float(c)))
        c = a * b
        f.write("{0}\n".format(float(c)))
        c = a / b
        f.write("{0}\n".format(float(c)))
