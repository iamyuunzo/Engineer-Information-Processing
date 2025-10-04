country = ['Korea', 'Spain', 'Germany', 'Canada', 'france', 'Serbia']

print(max(country))                             # 알파벳 순서 비교
print(max(country, key=lambda x : x[2]))        # 각 문자열의 3번째 글자 비교
print(max(country, key=lambda i : i.lower()))   # 각 문자열을 전부 소문자로 바꿔서 비교


# Solving
# 문자열의 비교는 ASCII 코드값을 기준으로 하고, max의 비교는 알파벳 순으로 함.
# 1. ASCII 코드에서는 소문자 > 대문자이므로 소문자가 값이 가장 큼.
# 2. 동일한 값이 있다면 리스트 순서상 1번째 선택
# 3. spain, serbia 같이 s가 똑같고 그 뒤의 p와 e를 비교해야한다면, 알파벳상으로 뒤에있는 p가 더 큰 값.