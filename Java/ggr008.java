class Main {
    public static void main(String[] args) {
        int i = 0;
        int sum = 0;
        while (i < 10) {
            i++;
            if (i % 2 == 1)
                continue;
            sum += i;
        }
        System.out.println(sum);
    }
}

// Solving
// 답 : 30

// i = 0 : i++ (-> 1) 1 % 2 == 1 => continue
// i = 1 : i++ (-> 2) 2 % 2 != 1 => sum = sum+i = 0+2=2
// i = 2 : i++ (-> 3) 3 % 2 == 1 => continue
// i = 3 : i++ (-> 4) 4 % 2 != 1 => sum = 2+4=6
// i = 4 : i++ (-> 5) 5 % 2 == 1 => continue
// i = 5 : i++ (-> 6) 6 % 2 != 1 => sum = 6+6=12
// i = 6 : i++ (-> 7) 7 % 2 == 1 => continue
// i = 7 : i++ (-> 8) 8 % 2 != 1 => sum = 12+8=20
// i = 8 : i++ (-> 9) 9 % 2 == 1 => continue
// i = 9 : i++ (-> 10) 10 % 2 != 1 => sum = 20+10=30
// i = 10 -> while문이 false가 되므로 Stop.