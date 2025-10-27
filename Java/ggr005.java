class Exam {
    public static void main(String[] args) {
        int a = 0;

        for (int i = 1; i < 999; i++) {
            if (i % 3 == 0 && i % 2 == 0)
                a = i;
        }
        System.out.print(a);
    }
}

// Solving
// 답 : 996

// 1 ~ 998, if 조건식을 보면 6의 배수를 찾으라는 말.
// 반복할 때마다 a에 i값이 계속 덮어써지기 때문에 1000에서 가장 가까운 6의 배수를 찾으면 됨.