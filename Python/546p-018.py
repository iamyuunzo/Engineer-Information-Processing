sum = 10
def fun1():
    sum = 20
    print(sum)
def fun2():
    global sum
    sum = 30
print(sum)  # 10
fun1()      # 20
print(sum)  # 10
fun2()      # 출력값이 없음 (함수 안에 print문이 없으므로. but, sum은 30으로 바뀜)
print(sum)  # 30


# Solving
# 함수와 모듈
# global 때문에 변경된 전역 sum 값인 30이 출력됨