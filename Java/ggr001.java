class Main {
    public static void main(String[] args) {
        
        String str1 = "Programming";
        String str2 = "Programming";
        String str3 = new String("Programming");

        System.out.println(str1 == str2);
        System.out.println(str1 == str3);
        System.out.println(str1.equals(str3));
        System.out.print(str2.equals(str3));
    }
}

// Solving
// 답 : true (객체 주소가 같음.)
//      false (new를 통해 str3를 새로 정의했기 때문에 객체 주소가 다름.)
//      true (둘의 문자열이 동일함.)
//      true (둘의 문자열이 동일함.)