// 클래스 내에서 객체 생성 없이 사용할 수 있는 메소드로써 빈칸에 들어갈 내용을 작성하시오.
// 출력결과 : positive

class Test {
    public static void main(String[] args) {
        System.out.print(Test.check(1));
    }

    // () String check (int num) {
    //    return (num >= 0) ? "positive" : "negative";
    //}
}

// 답 : static
// 이유 : 일반 메서드는 객체를 생성한 다음에 사용할 수 있는데 문제에서는 객체 생성 없이 호출하고 있음.
//       이런 경우에 메서드를 클래스 소속으로 바꿔야 함.