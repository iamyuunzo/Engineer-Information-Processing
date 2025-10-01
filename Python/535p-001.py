class Caclulator:
    def __init__(self, first, second):
        self.first = first
        self.second = second

    def add(self):
        return self.first + self.second

    def subtract(self):
        return self.first - self.second

    def multiply(self):
        return self.first * self.second

    def divide(self):
        if self.second != 0:
            return self.first / self.second
        else:
            return "Cannot divide by zero"

calc = Caclulator(10, 5)
print("Addition:", calc.add())           # Addition: 15
print("Subtraction:", calc.subtract())   # Subtraction: 5
print("Multiplication:", calc.multiply()) # Multiplication: 50
print("Division:", calc.divide())       # Division: 2.0

# Solving
# 클래스와 객체지향 프로그래밍
# 다른 연산과 Divide가 표기 방식이 다른 이유 : 파이썬에서는 / 연산자는 무조건 실수(float)로 결과 반환하는 규칙이 있음.
# 따라서 나눗셈 결과가 정수여도 실수로 반환됨. (만약 정수로 결과를 얻고 싶다면 // 연산자를 사용해야 함.)