print("[2020015029 신현욱]")

hap, i =0,0

for i in range(1,101):
    hap+=i

    if hap > 1000 :
        break

print('1~100의 합계를 최초로 1000이 넘게하는 숫자 : %d'%i)