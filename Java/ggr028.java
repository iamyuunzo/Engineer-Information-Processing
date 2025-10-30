// 출력 결과를 보고 1, 2에 알맞는 값을 적으시오.
// [출력 결과]
// 1 4 7 10 13
// 2 5 8 11 14
// 3 6 9 12 15

class Main {
    public static void main(String[] args) {
        // int [][]a = new int[( 1. )][( 2. )];
        // for (int i = 0; i < 3; i++) {
        //     for (int j = 0; j < 5; j++) {
        //         a [i][j] = j * 3 + ( i + 1 );
        //         System.out.print(a[i][j]+"");
        //     }
        //     System.out.println();
        // }
    }
}

// Solving
// 답 : 1. 3
//      2. 5
// for문에서 각각의 i, j의 범위가 0~3, 0~5임.
// 3행 5열짜리 2차원 배열이 필요함.
// 배열에서 int[3] = 0, 1, 2 이기 때문에 3을 넣으면 for문의 조건의 0, 1, 2와 동일해짐.