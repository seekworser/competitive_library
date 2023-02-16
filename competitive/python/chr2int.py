def chr2int(s):
    return ord(s) - 97

def int2chr(i):
    return chr(i + 97)

def uchr2int(s):
    return ord(s) - 65

def uint2chr(i):
    return chr(i + 65)

print(chr2int("a"))
print(chr2int("z"))
print(uchr2int("A"))
print(uchr2int("Z"))
print(int2chr(0))
print(int2chr(25))
print(uint2chr(0))
print(uint2chr(25))