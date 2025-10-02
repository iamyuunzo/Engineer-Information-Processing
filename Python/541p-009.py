def cnt(str, p):
    result = 0
    for i in range(len(str)):
        sub = str[i:i+len(p)]
        if sub == p:
            result += 1
    return result

str = "abdcabcabca"
p1 = "ca"
p2 = "ab"
print(f'ab{cnt(str, p1)} ca{cnt(str, p2)}')  # ab3 ca3


# Solving
# 함수와 모듈
# p : 찾고 싶은 패턴 (p는 결국 p1, p2로 대체됨)
# cnt(str, p1) = cnt("abdcabcabca", "ca") / cnt(str, p2) = cnt("abdcabcabca", "ab")
# ca와 ab가 각각 몇 번 나오는지 확인