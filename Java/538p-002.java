class Ref {
    int a;

    Ref(int x) {
        a = x;
    }

    int sum(Ref obj) {
        int k;
        k = obj.a - a;          // 중요
        a = 10; obj.a = 20;
        return k;
    }
}

class PassRef {
    public static void main(String args[]) {
        Ref obj1 = new Ref(3); 
        Ref obj2 = new Ref(4);
        int k1 = obj2.sum(obj1);
        System.out.println("k1: " + k1);
        System.out.println("obj1.a: " + obj1.a);
        System.out.println("obj2.a: " + obj2.a);
    }
}


// Solving
// 답 : k1= -1, obj1.a= 20, obj2.a= 10

// Explanation:
// 1. Ref(3) = obj1 = 3, Ref(4) = obj2 = 4
// 2. obj2 = sum()을 호출한 객체, obj1 = sum()의 매개변수로 전달된 객체
    // 쉽게 말해 obj2가 obj1을 들고 sum()으로 감
    // 즉, sum 안의 a는 obj2.a(4), obj.a는 obj1.a(3)
    // obj1.a = obj.a = 3
    // obj2.a = (this).a = 4
// 3. k = obj.a - a = obj1.a - obj2.a = 3 - 4 = -1
// 4. a = 10; obj.a = 20
    // => a = obj2.a = 10; obj.a = obj1.a = 20;
// 5. 따라서 k1 = -1, obj1.a = 20, obj2.a = 10

// 다시 보기..