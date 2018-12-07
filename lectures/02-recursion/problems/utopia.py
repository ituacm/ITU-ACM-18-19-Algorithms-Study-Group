for _ in range(int(input())):

    n = int(input())
    h = 1

    for i in range(n):
        if i & 1:
            h += 1
        else:
            h <<= 1
    
    print(h)