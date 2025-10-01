my_tuple = (10, 20, 30, 40, 50)
my_tuple = (my_tuple[-1],) + my_tuple[1:-1] + (60,) + (my_tuple[0],)
print(my_tuple)  # (50, 20, 30, 40, 60, 10)

# Solving
# my_tuple[-1], -> 마지막 값 50
# my_tuple[1:-1] -> 20, 30, 40
# (60,) -> 60 추가
# (my_tuple[0],) -> 첫 번째 값 10