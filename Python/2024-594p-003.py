dec = 13
bin = ' '
while(dec > 0):
    rmd = dec % 2
    dec = dec // 2
    bin = str(rmd) + bin
print(bin)

# 1. dec = 13 (dec > 0이므로 while문 실행)
# rmd = 13 % 2 = 1
# dec = 13 // 2 = 6
# bin = str(1) + '' = 1

# 2. dec = 6 (dec > 0이므로 while문 실행)
# rmd = 6 % 2 = 0
# dec = 6 // 2 = 3
# bin = str(0) + 1 = 01

# 3. dec = 3 (dec > 0이므로 while문 실행)
# rmd = 3 % 2 = 1
# dec = 3 // 2 = 1
# bin = str(1) + 01 = 101

# 4. dec = 1 (dec > 0이므로 while문 실행)
# rmd = 1 % 2 = 1
# dec = 1 // 2 = 0
# bin = str(1) + 101 = 1101

# 5. dec = 0 (False이므로 print(bin) 실행)
# 1101