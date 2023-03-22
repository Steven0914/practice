print("[2020015029 신현욱]")
i, dan = 0,0

dan= int(input("단을 입력하세요 : "))

for i in range(9,0,-1):
    print("%d X %d = %2d"%(dan,i,dan*i))
