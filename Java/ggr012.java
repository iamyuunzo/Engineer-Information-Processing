class Parent {
    int x = 1000;

    Parent() {
        this(3000);
    }

    Parent(int x) {
        this.x = x;
    }
}

class Child extends Parent {
    int x = 4000;

    Child() {
        this(5000);
    }

    Child(int x) {
        this.x = x;
    }

    int getX() {
        return x;
    }
}

class Main {
    public static void main(String[] args) {
        Child obj = new Child();
        System.out.println(obj.getX());
    }
}


// Solving
// 답 : 5000

// 이유 : Child obj = new Child();에서 Child() 생성자가 호출된다.
// Child() 생성자에서는 this(5000);이 호출되어 Child(int x) 생성자가 호출된다.
// Child(int x) 생성자에서는 this.x = x;가 실행되어 Child 클래스의 멤버 변수 x가 5000으로 초기화된다.
// 따라서 obj.getX()를 호출하면 5000이 출력된다.
