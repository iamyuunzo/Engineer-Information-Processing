text = "PythonIsFun"
print(text[::3])        # Phlu
print(len(text))        # 11
print(text.find("IS"))  # -1

# Solving
# 문자열 슬라이싱
# text.find("IS") -> 대소문자 구분해서 찾기 때문에 -1 출력 (못 찾으면 -1 반환)