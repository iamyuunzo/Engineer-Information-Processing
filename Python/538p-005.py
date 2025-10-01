# (1)
class Animal:
    def __init__(self, name):       # (6-2)
        self.name = name
        print(f"name : {self.name}")

# (2)
class Dog(Animal):
    def __init__(self, name):       # (5)
        super().__init__(name)      # (6-1)
        print("Dog init")           # (7)

# (3)
class Cat(Animal):
    def __init__(self, name):       # (8)
        self.name = name            # (9) 이름 저장만 함.
        print("Cat init")           # (10)

# (4) 객체 생성
dog = Dog("Doggu")
cat = Cat("Merry")


# Solving
# 클래스와 객체지향 프로그래밍