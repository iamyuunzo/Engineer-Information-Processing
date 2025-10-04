numbers = [1, 2, 3, 4, 5]
result = [n * 2 for n in numbers if n%2 == 0]
print(result)

# Solving
# 리스트 컴프리헨션 실행 순서
# 1. for n in numbers 로 요소를 하나씩 먼저 꺼냄 : [1, 2, 3, 4, 5]
# 2. if n % 2 == 0 으로 요소 조건 판단 후 True만 확인 : [2, 4]
# 3. n * 2 로 True값 계산 : [4, 8]