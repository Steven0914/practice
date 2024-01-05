print("2020015029 신현욱")

def recur(n: int) -> int :
    while n > 0:
        recur(n - 1)
        print(n)
        n = n - 2