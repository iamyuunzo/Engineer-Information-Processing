// 다음은 정수를 저장할 수 있는 스택을 Java로 구현한 것이다.
// ㄱ, ㄴ에 넣을 문장으로 옳은 것은?

class StackInt {
    int size, top;
    int buf[];

    public StackInt(int s) {
        buf = new int[s];   // 스택의 저장 공간 배열
        size = s;           // 스택의 크기 (최대 저장 개수)
        top = -1;           // 스택의 최상단 위치 (비어 있을 때는 -1)
    }

    public void push(int x) {
        // ㄱ
    }
    public int pop() {
        // ㄴ
    }
}

// Solving
// 답 ㄱ : buf[++top] = x;
// 답 ㄴ : return buf[top--];

// 설명
// 스택이란? 나중에 들어간 데이터가 먼저 나오는(LIFO, Last In First Out) 자료구조
// ex. push(10) → push(20) → pop() → pop() 순서로 호출 시, 20이 먼저 나옴

// 1. push(int x) 메서드
// push? 스택에 데이터를 넣는 연산
// buf[++top] = x; : top을 1 증가시킨 후, buf 배열의 해당 인덱스에 x를 저장
    // ++top : top을 먼저 증가시킨 후 사용

// 2. pop() 메서드
// pop? 스택에서 데이터를 꺼내는 연산
// return buf[top--]; : buf 배열의 top 인덱스에 있는 값을 반환한 후, top을 1 감소시킴
    // top-- : top을 먼저 사용한 후 감소시킴

// 꼭 다시 보기..