class Test {
    public static void main(String[] args) {
        String A1 = "23242";
        String A2 = "Hello!!";
        String B1 = A2.concat(A1);
        String B2 = A1.substring(4);
        String B3 = Integer.toString(B1.indexOf("3"));
        System.out.println("B1: " + B1);
        System.out.println("B2: " + B2);
        System.out.println("B3: " + B3);
    }
}

// Solving
// 답 B1: Hello!!23242
//    B2: 2
//    B3: 8

// 자바 문자열 관련 메서드 문제
// concat(): 문자열을 이어붙이는 메서드
// substring(int beginIndex): 문자열에서 beginIndex 위치부터 끝까지의 부분 문자열을 반환하는 메서드
// indexOf(String str): 문자열에서 str이 처음으로 나타나는 위치의 인덱스를 반환하는 메서드
// toString(int i): 정수를 문자열로 변환하는 메서드

// 1. A2.concat(A1)은 "Hello!!" + "23242"를 이어붙여 "Hello!!23242"
// 2. A1.substring(4)는 "23242"에서 인덱스 4부터 끝까지의 부분 문자열인 "2"
// 3. B1.indexOf("3")은 "Hello!!23242"에서 '3'이 처음 나타나는 위치의 인덱스인 8
// 4. Integer.toString(8)은 정수 8을 문자열 "8"로 변환