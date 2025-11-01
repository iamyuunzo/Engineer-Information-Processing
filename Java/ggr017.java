abstract class Vehicle {
    private String name;

    abstract public String getName(String val);

    public String getName() {
        return "Vehicle name:" + name;
    }

    public void setName(String val) {
        name = val;
    }
}

class Car extends Vehicle {
    public Car(String val) {
        setName(val);
    }

    public String getName(String val) {
        return "Car name : " + val;
    }

    public String getName(byte val[]) {
        return "Car name : " + val;
    }
}

class Main {
    public static void main(String[] args) {
        Vehicle obj = new Car("Spark");
        System.out.print(obj.getName());
    }
}

// Solving (어려우니까 꼭 다시 보기..)
// 답 : Vehicle name: Spark

// 코드 순서
// 1. Vehicle obj = new Car("Spark"); 에서 Car 클래스의 생성자가 호출된다.
// 2. Car 클래스의 생성자에서는 setName(val);이 호출되어 Vehicle 클래스의 setName 메서드가 실행된다.
// 3. setName 메서드에서는 private 멤버 변수 name에 "Spark"가 할당된다.
// 4. System.out.print(obj.getName());에서 Vehicle 클래스의 getName() 메서드가 호출된다.
// 5. getName() 메서드에서는 "Vehicle name:" + name;이 반환되며, name에는 "Spark"가 할당되어 있으므로 "Vehicle name: Spark"가 출력된다.

// obj.getName()에서 Car 클래스가 아니라 Vehicle 클래스의 getName() 메서드가 호출되는 이유는
// obj의 타입이 Vehicle이기 때문이다. (getName()이 아니라 getName(String val)이지, 괄호가 빈 getName()은 만들지 않았기 때문)
// 오버로딩된 getName 메서드는 매개변수의 타입과 개수에 따라 호출되는 메서드가 결정되는데,
// obj.getName()은 매개변수가 없으므로 Vehicle 클래스의 getName() 메서드가 호출된다.