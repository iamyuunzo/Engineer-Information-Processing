# 다음은 파이썬 코드가 수행되면 발생하는 결과를 약술하시오.

while(True) :
    print('A')
    print('B')
    print('C')
    continue
    print('D')

# Solving
# continue문은 반복문의 맨 처음으로 돌아가게 함
# 따라서 print('D')는 절대 실행되지 않음
# answer = "A B C A B C A B C ..." (break문이 없어서 무한 루프)