def check(v):
    if type(v) == type(""):         # 문자열
        return len(v)
    elif type(v) == type(100):      # 정수
        return 1
    elif type(v) == tuple:          # 튜플
        return 2
    elif type(v) == list:           # 리스트
        return 3
    else:
        return 4

a = "100.0"                                         # 문자열 O => 5
b = 200                                             # 정수 O => 1
c = (100.0, 200.0)                                  # 튜플 O => 2
d = [100.0, 200.0]                                  # 리스트 O => 3 
print(check(a) + check(b) + check(c) + check(d))    # 5 + 1 + 2 + 3 = 11


# Solving
# 조건문과 반복문
