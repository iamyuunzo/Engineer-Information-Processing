def count_char(s):
    counts = {}
    for char in s:
        if char in counts:
            counts[char] += 1
        else:
            counts[char] = 1
    return counts

string = "apple"
print(f'counts: {count_char(string)}')  # counts: {'a': 1, 'p': 2, 'l': 1, 'e': 1}


# Solving
# 함수와 모듈
# s = string = "apple" => char = a, p, p, l, e
# a => 1번 / p => 2번 / l => 1번 / e => 1번
# 반복문을 돌면서 string의 각 문자를 돌아가면서 char에 넣고, else문으로 보통 넘어가지만, p처럼 하나 더 있으면 if문으로 들어가서 +1씩 해줌.