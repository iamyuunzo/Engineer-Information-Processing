def test(x, y=[]) :
    y.append(x)
    return y
print(test(1))
print(test(2))

# y=[]는 매번 새로운 리스트를 만드는 게 아니라,모든 호출이 같은 리스트를 공유

# 1. print(test(1))
# x = 1, y = []
# y.append(x) : 리스트 y에 x값을 추가해라 => y = [1]

# 2. print(test(2))
# x = 2, y = [1]
# y.append(x) : 리스트 y에 x값을 추가해라 => y = [1, 2]

# 전체 답 : [1]
#          [1, 2]