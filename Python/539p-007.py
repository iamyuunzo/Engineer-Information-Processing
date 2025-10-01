def fnc(list):
    for i in range(len(list) // 2):
        list[i], list[-i-1] = list[-i-1], list[i] # 리스트 뒤집기
list = [1, 2, 3, 4, 5, 6]
fnc(list)
print(sum(list[::2]) - sum(list[1::2]))


# Solving
# 함수와 모듈
# list[i], list[-i-1] = list[-i-1], list[i] : 리스트 뒤집기 ([1,2,3,4,5,6] -> [6,5,4,3,2,1])
# sum(list[::2]) = 6 + 4 + 2 = 12 (짝수 인덱스 합)
# sum(list[1::2]) = 5 + 3 + 1 = 9 (홀수 인덱스 합)
# 따라서 결과는 12 - 9 = 3