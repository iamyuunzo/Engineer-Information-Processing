my_dict = {'x': 50, 'y': 60, 'z': 70}
print(my_dict.get('y'))   # 60
print(my_dict.get('a'))   # None
print(my_dict.get('a', 'Key not found'))  # Key not found

# Solving
# 딕셔너리 메서드
# get() -> 키가 있으면 값 반환, 없으면 None 또는 두 번째 인자 반환
# None : 값이 없다는 뜻 (null과 비슷) (딕셔너리에 키가 없을 때 반환되는 값)