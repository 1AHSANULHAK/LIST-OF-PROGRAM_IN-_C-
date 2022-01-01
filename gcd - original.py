def gcd_naive(a,b):
    current_gcd = 1
    for d in range(2, min(a,b) +1):
        if a%d == 0 and b%d == 0:
            if (d>current_gcd):
                current_gcd = d
    return current_gcd

def gcd_fast(a,b):
    x = max(a,b)
    y = min(a,b)
    result = x%y
    while result != 0:
        temp = y%result
        y = result
        result = temp
    return y

if __name__ == "__main__":
    a = 22
    b = 44
    print(gcd_fast(a,b))
