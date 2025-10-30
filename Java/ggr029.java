class Static {
    
    public int a = 20;
    static int b = 0;

}

class Main {
    public static void main(String[] args) {
        
        int a;
        a = 10;
        Static.b = a;

        Static st = new Static();

        System.out.println(Static.b++);
        System.out.println(st.b);
        System.out.println(a);
        System.out.print(st.a);
    }
}


// Solving
// 출력 1 : Static.b = a = 10 (다음 줄에서 11로 바뀜)
// 출력 2 : st.b라고 써도, b는 static 변수이기 때문에 → 클래스 전체에서 공유됨
//         → 즉, Static.b와 같은 메모리를 가리킴 = 11
// 출력 3 : Main 안에 있는 a값 = 10
// 출력 4 : Static 클래스에 있는 a값 = 20