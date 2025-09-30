text = "Python is fun!"
result = text.replace("fun", "awesome")
print(result)  # Python is awesome!

result = text.split(" ")
print(result)  # ['Python', 'is', 'fun!']

# Solving
# 문자열 메서드
# replace에서 "fun!"이 아니라 "fun"으로 표기했기 때문에 "!"는 그대로 남아있음
# split에서 result에 text.replace를 했기 때문에 text값이 바뀐건 아님. (교체된 awesome은 새 변수인 result에만 저장됨)
# 따라서 result는 'awesome!'이 아니라 'fun!' 출력 (페이크 조심하기)