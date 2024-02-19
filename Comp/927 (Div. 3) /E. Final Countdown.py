tt = int(input())

while tt > 0:
    n = int(input())
    n = int(input())

    i = 0
    cum = 0
    s = 0
    ans = n

    while n > 0:
        ans += cum * (n % 10)

        i += 1
        cum = cum * 9 + i

        n //= 10

    print(ans)
    tt -= 1
