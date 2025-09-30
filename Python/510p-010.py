text = "hello, world!"

capitalized = text.capitalize()
upper_case = text.upper()
lower_case = text.lower()

result = f"C:{capitalized }, U:{upper_case}, L:{lower_case}"
print(result)  

# Solving
# 문자열 메서드
# .capitalize() -> 첫 글자만 대문자로, 나머지는 소문자로 변환
# C:Hello, world!, U:HELLO, WORLD!, L:hello, world!