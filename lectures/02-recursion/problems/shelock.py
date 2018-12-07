for _ in range(int(input())):

    n = int(input())

    for i in range(n, -1, -1):
        if i % 3 == 0 and (n - i) % 5 == 0:
            print("5" * i + "3" * (n - i))
            break
    else:
        print(-1)