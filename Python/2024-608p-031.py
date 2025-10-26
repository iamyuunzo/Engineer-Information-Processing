country = ['Korea', 'Spain', 'Germany', 'Canada', 'france', 'Serbia']

print(max(country))
print(max(country, key=lambda x : x[2]))
print(max(country, key=lambda i : i.lower()))

# 기본 개념 정리
# max : 사전 순 비교. (사전에서 뒤쪽에 오는 단어가 더 큼)
# 파이썬에서는 대문자가 소문자보다 앞에 온다고 생각함. (유니코드 기준: 'A'(65) < 'a'(97))
# 예를 들면, 'Z' > 'A' / 'dog' > 'cat'

# 1. print(max(country))
# 사전순으로 가장 뒤에 있는 문자열 찾기 (대소문자 구분)
# 파이썬에서는 소문자가 대문자보다 뒤쪽에 오기 때문에 첫 시작이 소문자인 france가 가장 큼
# 답 : france

# 2. print(max(country, key=lambda x : x[2]))
# x[2] = 각 글자의 3번째 자리를 기준으로 비교하기
# x[2]자리의 글자는 순서대로 [r, a, r, n, a, r]
# r, a, n 중에서 r이 가장 뒤에 있는 문자임.
# Korea, Germany, france 3개 중 가장 처음 등장하는 문자는 Korea
# tie-break rule때문에 첫 번째 등장이 선택됨.
# 답 : Korea

# 3. print(max(country, key=lambda i : i.lower()))
# lower() : 모두 소문자로 바꾼 뒤에 비교하기
# ['korea', 'spain', 'germany', 'canada', 'france', 'serbia']
# 사전순으로 가장 뒤쪽 단어(max값)는 s
# 답 : Spain

# 전체 답 : france
#          Korea
#          Spain