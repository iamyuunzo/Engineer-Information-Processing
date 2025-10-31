// 다음은 n이 10일 때, 10을 2진수로 변환하는 자바 소스 코드이다. 1, 2에 알맞는 값을 적으시오.
// 출력 결과 : 00001010

class Main {
    public static void main(String[] args) {
        int[] a = new int[8];
        int i = 0;
        int n = 10;
        // while ( 1. ) {
        //     a [i++] = ( 2. );
        //     n /= 2;
        // }

        for(i=7; i>=0; i--) {
            System.out.print(a[i]);
        }
    }
}

// Solving
// 답 : 1. n > 0, n >= 1, i < 8, i <= 7
//      2. n % 2

// 1번의 이유 : n을 2로 계속 나누어가면서 반복하려면 0이 되기 전까지 반복해야 함.
// 2번의 이유 : 2로 나눴을 때의 나머지가 이진수의 한 자리