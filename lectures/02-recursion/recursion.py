def f(x):

    if x < 1:
        return 0
    
    if x == 1:
        return 1
    
    return f(x - 1) + 1

print(f(int(input())))