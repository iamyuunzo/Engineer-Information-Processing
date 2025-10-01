my_tuple = (1, 2, 3, 4, 5, 6)
my_tuple = my_tuple[:2] + (6,) + my_tuple[3:]   
print(my_tuple)   # (1, 2, 6, 4, 5, 6)

# Solving
# 튜플은 값 변경, 추가, 삭제 불가능 (immutable) -> 즉, 중복 허용