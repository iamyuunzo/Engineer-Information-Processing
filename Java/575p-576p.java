// 자료형(타입)이 LinkedList<Integer>인 문제 모음

// LinkedList 안의 메서드들 종류
// 자바 표준 라이브러리(java.util.LinkedList) 안에 들어 있는 기능(라이브러리 함수)
// | `addFirst(x)`   | 맨 앞에 추가
// | `addLast(x)`    | 맨 뒤에 추가
// | `removeFirst()` | 맨 앞의 요소 꺼내서 삭제 
// | `removeLast()`  | 맨 뒤의 요소 꺼내서 삭제
// | `isEmpty()`     | 리스트가 비었는지 확인
// | `size()`        | 원소 개수 반환
// | `get(index)`    | 특정 위치의 원소 가져오기

// Integer? : 제네릭(Generic) 타입으로 기본형(int)을 사용할 수 없기 때문에, 기본형을 객체로 포장하는 래퍼 클래스(wrapper class)인 Integer를 사용
// 쉽게 말해 이 리스트 안에는 정수만 들어갈 수 있다는 뜻

// ------------------------------------

import java.util.*;

// 575p-039
// LinkedList를 이용한 스택 구현

class List {
    public static void main(String[] args) {
        LinkedList<Integer> ds = new LinkedList<Integer>();
        ds.addLast(new Integer(10));
        ds.addLast(new Integer(30));
        ds.addLast(new Integer(20));
        while (!ds.isEmpty())
            System.out.print(ds.removeLast() + " ");
        System.out.println();
        
    }
}

// Solving
// 답 : 20 30 10
// 1. LinkedList<Integer> ds = new LinkedList<Integer>(); : Integer 타입의 요소를 저장하는 빈 LinkedList ds를 생성
// 2. ds.addLast(new Integer(10)); : ds의 맨 뒤에 10 추가 → ds = [10]
// 3. ds.addLast(new Integer(30)); : ds의 맨 뒤에 30 추가 → ds = [10, 30]
// 4. ds.addLast(new Integer(20)); : ds의 맨 뒤에 20 추가 → ds = [10, 30, 20]
// 5. while (!ds.isEmpty()) : ds가 비어있지 않은 동안 반복
//    - 첫 번째 반복: ds.removeLast() → 20 반환 및 삭제 → 출력: "20 " → ds = [10, 30]
//    - 두 번째 반복: ds.removeLast() → 30 반환 및 삭제 → 출력: "30 " → ds = [10]
//    - 세 번째 반복: ds.removeLast() → 10 반환 및 삭제 → 출력: "10 " → ds = []
// 6. ds가 비어있으므로 while 루프 종료, System.out.println();로 줄바꿈

// ------------------------------------

// 576p-040
// LinkedList를 이용한 큐 구현

class ListTest {
    public static void main(String[] args) {
        LinkedList<Integer> myLL = new LinkedList<Integer>();
        myLL.addFirst(new Integer(10));
        myLL.addFirst(new Integer(20));
        myLL.addFirst(new Integer(30));
        while (!myLL.isEmpty()) {
            Integer num = myLL.removeFirst();
            System.out.printf("%d ", num);
        }
            
    }
}

// Solving
// 답 : 30 20 10
// 1. LinkedList<Integer> myLL = new LinkedList<Integer>(); : Integer 타입의 요소를 저장하는 빈 LinkedList myLL을 생성
// 2. myLL.addFirst(new Integer(10)); : myLL의 맨 앞에 10 추가 → myLL = [10]
// 3. myLL.addFirst(new Integer(20)); : myLL의 맨 앞에 20 추가 → myLL = [20, 10]
// 4. myLL.addFirst(new Integer(30)); : myLL의 맨 앞에 30 추가 → myLL = [30, 20, 10]
// 5. while (!myLL.isEmpty()) : myLL이 비어있지 않은 동안 반복
//    - 첫 번째 반복: myLL.removeFirst() → 30 반환 및 삭제 → 출력: "30 " → myLL = [20, 10]
//    - 두 번째 반복: myLL.removeFirst() → 20 반환 및 삭제 → 출력: "20 " → myLL = [10]
//    - 세 번째 반복: myLL.removeFirst() → 10 반환 및 삭제 → 출력: "10 " → myLL = []
// 6. myLL이 비어있으므로 while 루프 종료
