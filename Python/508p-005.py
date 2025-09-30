text = "Python123"
print(text.isalpha())   # False
print(text.isalnum())   # True
print(text.isdigit())   # False
print(" ".isspace())    # True

# Solving
# .isspace() -> 공백문자(스페이스, 탭, 엔터)로만 이루어졌는지 확인
# 이 문제에서 페이크 : text.isspace() -> False 이거지만 현재 text.이 아니라 " " 이기 때문에 True)