print("[2020015029 신현욱]")
# 배열 원소의 최댓값을 구해서 출력하기 (원솟값을 입력받음)

import random
from typing import Any, Sequence
def max_of(a: Sequence) ->Any:
    maximum = a[0]
    for i in range(1,len(a)) :
        if a[i]>maximum :
            maximum=a[i]
    return maximum

print('난수의 최댓값을 구합니다.')
num =  int(input('난수의 개수를 입력하세요.: '))
lo =  int(input('난수의 최솟값를 입력하세요.: '))
hi =  int(input('난수의 최대값를 입력하세요.: '))
x = [None]* num

for i in range(num):
    x[i]=random.randint(lo, hi)

print(f'{(x)}')
print(f'이 가운데 최대값은 {max_of(x)}입니다.')