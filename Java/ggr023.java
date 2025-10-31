// 자바 코드를 실행할 경우 에러가 발생됨. 에러가 발생하는 라인은?

class Person {
    private String name;

    public Person(String val) {
        name = val;
    }

    public static String get() {
        return name;
    }

    public void print() {
        System.out.println(name);
    }
}

class Main {
    public static void main(String[] aregs) {
        Person obj = new Person("Kim");
        obj.print();
    }
}

// 답 : 11번 라인 (return name)
// 이유 : static 메소드에서는 static 변수만 사용 가능하고 멤버 변수 사용이 불가능함.
// 해결 방법 - get()을 인스턴스 메서드로 바꾸기
//          - name을 static 변수로 바꾸기