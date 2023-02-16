def base10to(n, b):
    ans = 0
    digit = 0
    while n != 0:
        ans += (n % b) * 10 ** digit
        n //= b
        digit += 1
    return ans

