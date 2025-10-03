def mix_values(a, b=[], c=10):
    b.append(a)
    return b, c

print(mix_values(1))
print(mix_values(2, c=20))
print(mix_values(3))

# Solving
# 함수와 모듈
# 튜플임을 알 수 있는 부분 : return b, c -> ()로 답 표시 해야함.
# 번외 : (숫자, ) 이런식으로 되어있으면 튜플임.