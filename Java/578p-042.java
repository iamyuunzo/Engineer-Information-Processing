class Main {
    public static void main(String[] args) {
        int a;  // 지역 변수
        a = 10;
        TestClass.b = a;
        TestClass tc = new TestClass();
        System.out.println(TestClass.b++);
        System.out.println(tc.b);
        System.out.println(a);
        System.out.println(tc.a);
    }
}

class TestClass {
    public int a = 20;  // 인스턴스 변수
    static int b = 0;   // 정적 변수
}


// Solving
// 답 : 10
//      11
//      10
//      20

// 자바의 정적 변수(static variable)와 인스턴스 변수(instance variable)의 차이 문제
// static : 객체 안 X, 클래스 전체가 공유하는 공용 공간
// instance : 객체 안 O, 객체마다 각각 존재하는 공간

// a : 지역 변수로, main 메서드 내에서 선언되고 초기화됨. main 메서드 내에서만 접근 가능.
// TestClass.b : 정적 변수(static variable)로, 클래스 전체가 공유하는 단 하나의 변수. main 메서드에서 직접 접근 가능.
// TestClass.a : 인스턴스 변수(instance variable)로, T객체(tc)를 만들 때마다 새로 생김. main 메서드에서 인스턴스를 통해 접근 가능.

// 1. TestClass.b = a; → TestClass의 정적 변수 b에 지역 변수 a의 값 10이 할당
// 2. System.out.println(TestClass.b++); → TestClass의 정적 변수 b 출력 후 1 증가. 출력값 10, b는 11
// 3. System.out.println(tc.b); → tc 인스턴스를 통해 TestClass의 정적 변수 b에 접근. 현재 b는 11이므로 출력값 11
// 4. System.out.println(a); → 지역 변수 a 출력. 출력값 10
// 5. System.out.println(tc.a); → tc 인스턴스의 인스턴스 변수 a 출력. 출력값 20

// 먼소린지 모르겠음. 다시 봐야할듯..