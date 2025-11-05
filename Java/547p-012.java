class A {
    int a = 10;

    public A() {
        System.out.print("가");
    }

    public A(int x) {
        System.out.print("나");
    }
    public static void main(String[] args) {
        B b1 = new B();
        A b2 = new B(1);
        System.out.print(b1.a + b2.a);
    }
}

class B extends A {
    int a = 20;

    public B() {
        System.out.print("다");
    }

    public B(int x) {
        System.out.print("라");
    }
}


// Solving
// 답 : 가다가라30

// 생성자 헷갈릴 때 팁 : 코드 자체에서 보이지는 않지만, 자바는 자동으로 super();를 추가한다라는 것을 기억하기
// 1. B b1 = new B()에서 B() 생성자 실행 시 super();로 인해 A() 호출
    // A() -> B() => 가 -> 다ㅇㅇ
    
// 2. A b2 = new B(1)에서는 super(int x);가 아닌걸 유의하기
    // A() -> B(int x) => 가 -> 라

// 3. b1.a + b2.a = B의 a + A의 a = 20 + 10 = 30