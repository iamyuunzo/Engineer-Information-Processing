// 다음 C언어의 출력과 코드를 보고, 괄호에 들어갈 코드를 작성하시오.
// 출력 결과
// value = 40
// value = 30
// value = 20

int stack[10];
int top = -1;

void push(int data) {
    if ( top >= ① ) {
        printf("full");
    }
    else {
        stack[++top] = ②;
    }
}
int pop() {
    if ( top == ③ ) {
        printf("empty");
    }
    else {
        return stack[④];
    }
}
int isempty() {
    if ( top == ③ ) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    push(20);
    push(30);
    push(40);
    while ( !isempty() ) {
        int e = pop();
        printf("value = %d\n", e);
    }
}


// Solving
// ① : 9 (or sizeof(stack)/sizeof(stack[0]) - 1)
// ② : data
// ③ : -1
// ④ : top--

// 주어진 코드는 배열 stack[10]을 이용하여 정수형 스택을 구현한 것
// push 함수 : 스택에 데이터를 넣는 함수
// pop 함수 : 스택에서 데이터를 꺼내는 함수
// isempty 함수 : 스택이 비어있는지 확인하는 함수

// Stack이란? LIFO(Last In First Out) 구조를 가지는 자료구조 (후입선출)
// ① 풀이 : 스택의 최대 크기는 10이므로, top이 9 이상이면 스택이 가득 찬 상태임.
// ② 풀이 : push 함수는 매개변수로 받은 data를 스택에 넣어야 함.
// ③ 풀이 : 스택이 비어있는 상태는 top이 -1인 경우임.
// ④ 풀이 : pop 함수는 스택에서 데이터를 꺼낼 때, top이 가리키는 위치의 데이터를 반환하고, top을 감소시켜야 함.

// 이것도 어려우니까 꼭 다시보기..