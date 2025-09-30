dec = 13
bin = ''
while(dec > 0):
    rmd = dec % 2
    dec = dec // 2
    bin = str(rmd) + bin
print(bin)

# Solving
# str() 함수는 숫자를 문자열로 변환 (str(1) = '1')
# answer = "1101" (10진수 → 2진수 변환을 직접 구현)