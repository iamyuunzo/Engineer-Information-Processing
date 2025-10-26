## 🖥️ Java 정리

**(1) Java 란?**

- 미국 Sun Microsystems 사의 James Gosling과 그의 팀에 의해 개발됨. (1990년대 초)
- 이식성 높음, 객체지향 언어, 메모리 자동 관리, 멀티 스레드 구현, 동적 로딩 지원, 오픈 소스 라이브러리 풍부

<br>

**(2) Java 문법**

1️⃣ == vs equals
1. == 연산자
- 기본 데이터 타입 (int, float, char 등)의 값을 비교할 때 사용 (두 값이 같은지?)
- 참조 데이터 타입에 대해 == 사용하면, 그것들이 `같은 메모리 주소를 가리키는지` 확인 (두 변수가 같은 객체를 참조하고 있는지?)

2. equals 메서드
- 객체의 내용이 같은지?

```java
String text1 = new String("amy");
String text2 = new String("amy");

System.out.println(text1 == text2); // false (메모리 주소가 다름.)
System.out.println(text1.equals(text2)); // true (문자열 안의 내용이 같음.)
```

2️⃣ static? (정적 변수)
- 특정 객체에 속하지 않고, 해당 클래스의 모든 객체를 공유할 수 있음. (특정 인스턴스가 아니라 클래스 자체에 속해 있음)
- 객체를 생성하지 않고도 호출할 수 있음.
- 메서드에서는 static변수만 사용가능하기 때문에 static이 없는 클래스 변수를 사용하고 있으면 컴파일 오류가 남.
    - static 메소드에 일반적인 클래스 변수를 사용하고 있는지 꼭 먼저 확인할 것!
- 멤버 변수는 사용 불가능하다. 그 이유는?
    - static 메소드는 객체 생성 없이도 사용할 수 있는데 그런 static 안에서 객체가 생성되어야만 값이 할당되는 멤버 변수를 사용하면 오류가 남.
    - 멤버 변수? 객체가 생성될 때마다 해당 객체와 연결된 클래스 안에 선언된 변수

<br>

**(3) Java의 구성 요소**

1️⃣ 클래스 (Class)
- 객체의 속성과 연산 구조를 정의 (속성 = 멤버변수, 연산 = 메서드로 정의)

2️⃣ 멤버 변수 (Member Variable)
- 객체가 가지는 속성 (고유값으로, 객체의 상태를 나타냄)

3️⃣ 메서드 (Method)
- 특정 작업 수행을 위한 명령문 집합 (멤버 변수의 값이나 상태 변경에 사용하는 명령의 집합)

4️⃣ 접근 지정자
- 클래스의 멤버(변수, 메서드)에 대한 접근 권한 지정

| 종류        | 접근 범위             | 클래스 | 패키지 |  상속 |  전체 |
| --------- | ----------------- | :-: | :-: | :-: | :-: |
| public    | 접근 제한 없음          |  ⭕  |  ⭕  |  ⭕  |  ⭕  |
| protected | 동일 패키지와 상속 받은 클래스 |  ⭕  |  ⭕  |  ⭕  |  ❌  |
| default   | 동일 패키지            |  ⭕  |  ⭕  |  ❌  |  ❌  |
| private   | 동일 클래스            |  ⭕  |  ❌  |  ❌  |  ❌  |

5️⃣ 인스턴스
- 클래스 기반으로 생성된 객체의 실체 (메모리에 할당되어 실제 작동함)

6️⃣ 객체 정의와 생성
- 현실 세계를 객체로 표현함

<br>

**(4) 객체지향의 특징**

1️⃣ 생성자 (Constructor)

- 인스턴스 생성 시 초기값을 설정하는 역할
- 생성자 이름은 클래스 이름이랑 동일해야 함.
- 다양한 매개변수를 사용해서 여러 개의 생성자를 오버로딩할 수 있음

```java
public class Person {
    String name;
    int age;

    // 기본 생성자 (매개변수 없음)
    public Person() {
        this.name = "사람";
        this.age = 10;
    }

    // 매개변수가 있는 생성자 (오버로딩된 생성자)
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void toPrint() {
        System.out.println(this.name + "님의 나이는 " + this.age + "살 입니다.");
    }

    public static void main(String[] args) {
        Person p1 = new Person();           // 기본 생성자 호출
        p1.toPrint();                       // 사람님의 나이는 10살입니다.

        Person p2 = new Person("Amy", 20); // 매개변수 생성자 호출
        p2.toPrint();                       // Amy님의 나이는 20살입니다.
    }
}

// public Person() → 기본 생성자
// public Person(String name, int age) → 오버로딩된 생성자

```

2️⃣ 예외처리 (Exception Handling)

- 프로그램 실행 중 발생하는 예외 상황을 처리하는 방법
- 예외 발생 시 안정적으로 프로그램을 종료 or 오류 처리함.

```java
public static void main(String[] args) {
    try {
        // 예외가 발생할 수 있는 코드
    } 
    catch (ArithmeticException e) {
        // 산술 연산 오류(예: 1/0) 발생 시 실행
        System.out.println("산술 연산 오류 발생 시 실행");
    } 
    catch (Exception e) {
        // 모든 오류 발생 시 실행
        System.out.println("모든 오류 발생 시 실행");
    } 
    finally {
        // 오류가 있든 없든 항상 실행됨
        System.out.println("모든 오류 처리가 종료된 후 실행");
    }
}

```

| 구문        | 역할                        |
| --------- | ------------------------- |
| `try`     | 오류가 발생할 가능성이 있는 코드 작성     |
| `catch`   | 예외가 발생했을 때 실행할 코드 작성      |
| `finally` | 오류 발생 여부와 관계없이 항상 실행되는 코드 |


3️⃣ 상속 (Inheritance)

- `부모 클래스의 멤버를 자식 클래스가 상속받아 사용할 수 있음. (extends)`
- 클래스 재사용 / extends 키워드로 상속 구현 가능
- 부모 클래스의 private 멤버는 직접 상속받을 수 없음. (접근 불가)
- this 키워드 : 현재 객체, 메서드나 생성자를 호출하는 객체를 가리키는데 사용 or 클래스 내의 다른 생성자 호출 시 사용
- super 키워드 : 부모 클래스를 가리키는데 사용 (부모 클래스의 변수, 메서드, 생성자 접근 시 사용) or 자식 클래스에서 오버라이드한 메서드가 부모 클래스의 메서드를 호출하고 싶을 때 사용

```java
class Parent {
    String name;
    int age;

    public void set_name(String param_n) {
        name = param_n;
    }

    public void set_age(int param_i) {
        age = param_i;
    }
}

class Child extends Parent {   // 상속 (extends)
    int height;

    public void set_height(int param_h) {
        height = param_h;
    }
}

public static void main(String[] args) {
    Child c = new Child();          // 자식 클래스 객체 생성
    c.set_name("Amy");              // 부모 클래스 메서드 사용
    c.set_age(20);                  // 부모 클래스 메서드 사용
    c.set_height(170);              // 자식 클래스 고유 메서드 사용

    System.out.println(c.name);     // Amy
    System.out.println(c.age);      // 20
    System.out.println(c.height);   // 170
}

// 🧠 동작 과정
// 1. Child 클래스는 Parent의 모든 멤버를 물려받음
// 2. Child는 추가로 height 변수를 가짐
// 3. Child 객체 생성 시 부모의 속성도 함께 사용 가능

```

4️⃣ 메서드 오버라이딩 (Method Overriding)

- 상속에서 부모 클래스 메서드를 자식 클래스에서 재정의
- `부모 메서드와 동일한 이름, 리턴 타입, 매개변수를 가져야 함`
- 추상 클래스, 인터페이스 상속에서도 중요함

```java
class Parent {
    public void set_name(String param_n) {
        System.out.println("부모의 이름 변경");
    }

    public void set_age(int param_i) {
        System.out.println("부모의 나이 변경");
    }
}

class Child extends Parent {
    // 오버라이딩 (부모의 메서드를 자식이 재정의)
    public void set_name(String param_n) {  // 동일
        System.out.println("자식의 이름 변경");
    }

    // 자식 고유 메서드
    public void set_height(int param_h) {   // 동일
        System.out.println("자식의 키 변경");
    }

    public static void main(String[] args) {
        Child c = new Child();
        c.set_name("Amy");     // 오버라이딩된 자식 메서드 실행
        c.set_age(20);         // 부모 메서드 실행
        c.set_height(170);     // 자식 고유 메서드 실행
    }
}

// 답 : 자식의 이름 변경
//      부모의 나이 변경
//      자식의 키 변경


// 🧠 동작 과정
// 1. Child는 Parent의 set_name()을 같은 이름으로 다시 정의(override) 함
// 2. 따라서 c.set_name("홍길동")을 호출하면 → 부모 버전이 아니라 자식의 버전이 실행됨
// 3. set_age()는 오버라이딩되지 않았으므로 부모의 메서드가 실행됨
// 4. set_height()는 Child만 가진 새로운 메서드

```

5️⃣ 메서드 오버로딩 (Method Overloading)

- `같은 이름의 메서드를 매개변수의 개수나 타입을 달리하여 중복 정의`
- 메서드 이름 동일, but 인자 개수나 타입이 다름

```java
class Person {
    String name;
    int age;
    int height;

    // (1) 매개변수가 1개인 메서드
    public void set_data(String p_name) {
        name = p_name;
    }

    // (2) 매개변수가 2개인 메서드
    public void set_data(String p_name, int p_age) {
        name = p_name;
        age = p_age;
    }

    public static void main(String[] args) {
        Person p1 = new Person();
        p1.set_data("홍길동");

        Person p2 = new Person();
        p2.set_data("홍길동", 40);
    }
}

```

<br>

**(5) 추상클래스와 인터페이스**

1️⃣ 추상클래스 (Abstract Class)

- `하나 이상의 추상 메서드(미완성된 메서드)를 포함하는 클래스 (abstract)`
- 그래서 추상 클래스 자체로는 직접 인스턴스(객체)를 생성할 수 없음.
- 추상 클래스를 상속받은 자식 클래스에서 모든 추상 메서드를 구현(오버라이딩)
- 구현된 메서드를 통해 기능을 완성시켜야 사용할 수 있음!

```java
abstract class Remote {   // 추상 클래스 선언
    public int volume = 10;
    public int channel = 1;

    public void volume_up() {   // 일반 메서드
        this.volume++;
    }

    abstract void channel_change(int i);  // 추상 메서드 (몸통 없음)
}

class TV_Remote extends Remote {   // 추상 클래스 상속
    void channel_change(int i) {   // 추상 메서드 구현
        channel = i;
    }

    public static void main(String[] args) {
        TV_Remote tv = new TV_Remote();
        tv.volume_up();
        tv.volume_up();
        System.out.println("볼륨 : " + tv.volume);   // 볼륨 : 12
        tv.channel_change(5);
        System.out.println("채널 : " + tv.channel);  // 채널 : 5
    }
}

// 🧠 동작 순서
// 1. Remote 클래스
// volume_up() → 일반 메서드
// channel_change(int i) → 추상 메서드

// 2. TV_Remote가 Remote를 상속
// channel_change()를 구현(override)

// 3. main()에서 TV_Remote 객체를 만들어 실행
// volume_up() 두 번 실행 → volume = 12
// channel_change(5) 실행 → channel = 5

```

2️⃣ 인터페이스 (Interface)

- `모든 메서드가 추상 메서드로만 이루어진 클래스 (implements)`
- 상수와 추상 메서드만을 멤버로 가질 수 있었으나 자바 버전 바뀌면서 유연해짐
- 클래스가 인터페이스를 구현할 때는 인터페이스에 선언된 모든 추상 메서드를 구현해야 함
- 다중 상속의 효과를 낼 수 있음

```java
// 인터페이스 정의
interface Remote {
    public void volume_up();                // 볼륨 올리기 (추상 메서드)
    public void channel_change(int i);      // 채널 변경 (추상 메서드)
}

// 인터페이스 구현
class TV_Remote implements Remote {
    public int volume = 10;
    public int channel = 1;

    // 인터페이스에서 정의된 메서드 반드시 구현해야 함
    public void volume_up() {
        this.volume++;
    }

    public void channel_change(int i) {
        this.channel = i;
    }

    public static void main(String[] args) {
        TV_Remote tv = new TV_Remote();
        tv.volume_up();
        tv.volume_up();
        System.out.println("볼륨 : " + tv.volume);   // 볼륨 : 12
        tv.channel_change(5);
        System.out.println("채널 : " + tv.channel);  // 채널 : 5
    }
}

```

| 구분      | 추상 클래스                | 인터페이스                   |
| ------- | --------------------- | ----------------------- |
| 키워드     | `abstract class`      | `interface`             |
| 메서드 구성  | 일반 메서드 + 추상 메서드 혼합 가능 | 기본적으로 전부 추상 메서드         |
| 변수      | 일반 변수 가능              | 상수(`final`)만 가능         |
| 상속 / 구현 | `extends` (단일 상속)     | `implements` (다중 구현 가능) |
| 객체 생성   | 직접 생성 불가              | 직접 생성 불가                |
| 목적      | 공통된 기능의 일부 구현 제공      | 완전한 설계도, 구현 강제          |
