print("[2020015029 신현욱]")

ch=""
a, b=0, 0

while True:
    a = int(input("계산할 첫번째 수를 입력하세요 : "))
    b = int(input("계산할 두번째 수를 입력하세요 : "))
    ch = input("계산할 연산자를 입력하세요 : ")

    if(ch=="+") :
        print("%d + %d = %d" % (a, b, a + b))
    elif (ch == "-"):
        print("%d - %d = %d" % (a, b, a - b))
    elif (ch == "*"):
        print("%d * %d = %d" % (a, b, a * b))
    elif (ch == "/"):
        print("%d / %d = %d" % (a, b, a / b))
    elif (ch == "%"):
        print("%d %% %d = %d" % (a, b, a % b))
    elif (ch == "//"):
        print("%d // %d = %d" % (a, b, a // b))
    elif (ch == "**"):
        print("%d ** %d = %d" % (a, b, a ** b))
    else :
        print("연산자를 잘못 입력했습니다.")