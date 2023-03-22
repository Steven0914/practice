print("[2020015029 신현욱]")
# 배열 원소의 최댓값을 구해서 출력하기 (원솟값을 입력받음)

from typing import Any, Sequence
def max_of(a: Sequence) ->Any:
    maximum = a[0]
    for i in range(1,len(a)) :
        if a[i]>maximum :
            maximum=a[i]
    return maximum

print('배열의 최댓값을 구합니다.')
print('주의: "End"를 입력하면 종료합니다.')

number = 0
x = []

while True:
    s = input(f'x[{number}]값을 입력하세요.: ')
    if s== 'End':
        break
    x.append(int(s))
    number +=1

print(f'{number}개를 입력했습니다.')
print(f'최대값은 {max_of(x)}입니다.')
