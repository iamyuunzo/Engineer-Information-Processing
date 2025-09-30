x = 0
while x < 5:
    print(x, end=' ')
    x += 1
else:
    print("End")

# Solving
# while문이 정상적으로 종료되었을 때 else 블록이 실행
# x = 0, 1, 2, 3, 4까지는 while문이 실행되고, x가 5가 되는 순간 while문이 종료되면서 else 블록이 실행
# answer = "0 1 2 3 4 End"