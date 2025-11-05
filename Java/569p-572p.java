// 33 ~ 36번 : 예외처리 관련 문제

// 예외처리란? 프로그램 실행 중에 발생할 수 있는 예외 상황에 대비하여, 프로그램이 비정상적으로 종료되지 않고 적절히 처리할 수 있도록 함.
// 예외가 생기는 예시
    // 자동 발생 : 0으로 나누기(a/b 중 한 변수가 0일 때), 배열의 인덱스 초과 접근, null 참조 등
    // 강제 발생 : throw 키워드를 사용하여 개발자가 직접 예외를 발생

// try 블록에서 예외가 발생하지 않으면 → catch는 건너뜀
// try 블록에서 예외가 발생하면 → catch가 실행됨

// 예외처리의 주요 키워드: try, catch, finally, throw, throws
// try: 예외가 발생할 수 있는 코드
// catch: try 블록에서 발생한 예외를 처리하는 코드
// finally: 예외 발생 여부와 상관없이 항상 실행되는 블록. (선택사항)
// throw: 예외를 강제로 발생
// throws: 메서드가 특정 예외를 발생시킬 수 있음을 선언



// 569p-033
class ExceptionTest {
    ExceptionTest() {

        try {
            method();
            System.out.println("A");
        } catch (Exception e) {
            System.out.println("B");
        } finally {
            System.out.println("C");
        }
        System.out.println("D");
    }

    void method() { // 이 부분에서 예외를 발생시키는 문장이 없어서 예외가 발생하지 않음.
    } // 만약에 method() 안에서 예외인 throw new Exception(); 가 있었다면 catch 블록이 실행되었을 것임.

    public static void main(String[] args) {
        ExceptionTest t = new ExceptionTest();
    }}

    // Solving
    // 출력 결과: A C D (각 줄마다 출력)

    // 1. main 메서드에서 ExceptionTest 객체를 생성하면 생성자가 호출
    // 2. 생성자 안에서 try 블록이 실행되고 method() 메서드가 호출
    // 3. method() 메서드 안에는 예외를 발생시키는 문장이 없으므로 정상적으로 종료되고 "A" 출력
    // 4. try 블록이 정상적으로 종료되었으므로 catch 블록은 실행되지 않고 finally 블록이 실행되어 "C" 출력
    // 5. finally 블록이 실행된 후 생성자 안의 다음 문장인 "D" 출력 (finally 블록은 무조건 실행)



// 570p-034
class TestException{

    public static void main(String[] args) {
        try {
            System.out.println("문장 A");
            foo();
            System.out.println("문장 B");   // 이 문장은 실행되지 않음. (foo()에서 예외가 발생하여 catch 블록으로 넘어가기 때문)
        } catch (Exception e) {
            System.out.println("문장 C");
        }
        System.out.println("문장 D");
    }

    public static void foo() throws Exception {
        try {
            System.out.println("문장 E");
            throw new Exception();  // 예외 발생
        } catch (Exception e) {
            System.out.println("문장 F");
            throw e;  // 예외 다시 던지기
        } finally {
            System.out.println("문장 G");
        }
    }
}

// Solving
// 출력 결과: 문장 A
//           문장 E
//           문장 F
//           문장 G
//           문장 C
//           문장 D

// 1. main 메서드에서 try 블록이 실행되고 "문장 A" 출력
// 2. foo() 메서드가 호출되고 foo() 안의 try 블록이 실행되어 "문장 E" 출력
// 3. foo() 안에서 강제로 예외가 발생하여 catch 블록으로 이동, "문장 F" 출력
// 4. catch 블록에서 다시 예외를 throw하여 finally 블록으로 이동, "문장 G" 출력
// 5. finally 블록이 종료된 후 예외가 다시 main 메서드의 catch 블록으로 전달되어 "문장 C" 출력
// 6. catch 블록이 종료된 후 main 메서드의 다음 문장인 "문장 D" 출력
// throw e? : catch 블록에서 잡은 예외를 다시 던지는 역할. (예외를 여기서 처리하지 않고 상위 메서드로 전달할 때 사용)

// 571p-035, 572p-036 는 이해해서 따로 안 적음.