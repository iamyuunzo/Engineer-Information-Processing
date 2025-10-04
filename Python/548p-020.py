def cals(num):
    if num == 1:
        return 1
    else:
        return num * cals(num-1)
in_val = 4
result = cals(in_val)
print(result)


# Solving
# in_val = num = 4
# num이 1이 될 때까지 else문이 돌아감
# cals(4) : 4 * cals(3) -> cals(3) : 3 * cals(2) -> cals(2) : 2 * cals(1) -> cals(1) = return 1
# 4 * 3 * 2 * 1 = 24