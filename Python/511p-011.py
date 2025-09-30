# 다음은 사용자로부터 입력받은 문자열에서 처음과 끝의 3글자를 추출한 후 합쳐서 출력하는 파이썬 코드에서 (ㄱ)에 들어갈 내용을 쓰시오.

string = input("7문자 이상 문자열을 입력하세요 : ")
m = (ㄱ)
print(m)

# 입력값 : Hello World / 최종 출력값 : Helrld

# Solving
# 문자열 슬라이싱
# string[:3] -> 처음 3글자, string[-3:] -> 끝에서 3글자
# 답 - string[:3] + string[-3:]