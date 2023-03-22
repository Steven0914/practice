print("[2020015029 신현욱]")
# 각 배열 원소의 최댓값을 구해서 출력하기(튜플, 문자열, 문자열 리스트)

from typing import Any, Sequence
def max_of(a: Sequence) ->Any:
    maximum = a[0]
    for i in range(1,len(a)) :
        if a[i]>maximum :
            maximum=a[i]
    return maximum

t = (4, 7, 5.6, 2, 3.14, 1)
s = 'string'
a = ['DTS', 'AAC', 'FLAC']

print(f'{t}의 최대값은 {max_of(t)}입니다.')
print(f'{s}의 최대값은 {max_of(s)}입니다.')
print(f'{a}의 최대값은 {max_of(a)}입니다.')