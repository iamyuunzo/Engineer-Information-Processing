# (1)
class Animal:
    def __init__(self, name):           # (5)
        self.name = name
    def speak(self):
        return "Some sound"

# (2)
class Dog(Animal):  # 상속
    def __init__(self, name, breed):    # (4)
        super().__init__(name)          
        self.breed = breed              # (6)   
    def speak(self):
        return "Woof!"  # 오버라이딩

# (3)
dog = Dog("Buddy", "Golden Retriever")  # 객체 생성
# (7)
print(f"{dog.name} : {dog.speak() } ({dog.breed})")  # Buddy : Woof! (Golden Retriever)

# Solving
# 클래스와 객체지향 프로그래밍
# super()로 부모 클래스에게 초기화 위임
# 실행 순서 요약: (1) Animal 정의 → (2) Dog 정의 → (3) Dog 객체 생성 → (4) Dog.init 호출 → (5) Animal.init 호출 → (6) breed 저장 → (7) print 실행 → (8) Dog.speak 실행