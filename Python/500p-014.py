a = 100
result = 0
for i in range(1, 3):
    result = a >> i
    result = result + 1
print(result)

# Solving
# range(1, 3)은 1~2까지 (3은 포함X)
# i = 1 : 100 >> 1 = 1100100 >> 1 = 0110010 (2진수) = 50 (10진수) + 1 = 51
# i = 2 : 100 >> 2 = 1100100 >> 2 = 0011001 (2진수) = 25 (10진수) + 1 = 26
# answer = 26 (페이크 조심... i=2 될 때 result값이 아니라 a값을 넣는건데 헷갈렸음ㅠ)