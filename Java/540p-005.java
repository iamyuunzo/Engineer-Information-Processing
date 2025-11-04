// 다음 프로그램의 A3 클래스에서 접근 가능한 객체 변수는 무엇인지 모두 쓰시오.

class A1 {
    public int x;
    private int y;
    protected int z;
    // ...
}

class A2 extends A1 {
    protected int a;
    private int b;
    // ...
}

class A3 extends A2 {
    private int q;
    // ...
}


// Solving
// 답 : x, z, a, q

// Explanation:
// A3 클래스는 A2 클래스를 상속받고, A2 클래스는 A1 클래스를 상속받음
    // A1의 public int x;  -> 상속 가능
    // A1의 private int y; -> 상속 불가
    // A1의 protected int z; -> 상속 가능
    // A2의 protected int a; -> 상속 가능
    // A2의 private int b; -> 상속 불가
    // A3의 private int q; -> 자기 자신이므로 접근 가능

// public : 어디서든 접근 가능
    // A1의 x -> 접근 가능

// private : 같은 클래스 내에서만 접근 가능
    // A1의 y, A2의 b -> 접근 불가
    // 문제에서 A3을 기준으로 했기 때문에 q는 접근 가능 

// protected : 같은 패키지 내에서 또는 상속 관계에 있는 클래스에서 접근 가능
    // A1의 z, A2의 a -> 접근 가능
    // a : A3와 A2는 상속 관계 -> 접근 가능
    // z : A3와 A1은 상속 관계 -> 이유 : A3 -> A2 -> A1 상속 관계이므로 접근 가능