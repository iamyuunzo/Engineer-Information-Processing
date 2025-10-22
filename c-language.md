## 🖥️ C언어 주요 함수

### 🧩 문자열 함수 <string.h>
**(1) strlen()**
- 문자열 길이 반환
- null '\0' 값은 포함하지 않음 (공백이랑 다른 것. 끝 표시)
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";   // = Hello, World!\0 <= 실제로는 14이지만 널값을 포함하지 않아서 13
    printf("Length: %d\n", strlen(str));    // Length: 13
    return 0;
}

```


**(2) strcpy()**
- 문자열을 다른 문자열로 복사
- strcpy(a, b) : (복사될 곳, 복사할 원본 문자열)
```c

#include <stdio.h>
#include <string.h>
int main() {
    char src[] = "Source";
    char dest[20];
    strcpy(dest, src);
    printf("%s\n", dest);   // Source
    return 0;
}

```


**(3) strncpy()**
- 문자열을 지정된 길이만큼 복사
- 지정한 글자 수만큼만 잘라서 복사하기 때문에 \0이 없을 수도 있어서 직접 끝이라고 넣어줘야 함.
- strncpy(a, b, c) : (복사될 곳, 복사할 원본 문자열, 복사할 글자 수)
- 이때 글자수보다 복사할 글자수가 더 많으면 나머지 값은 널값으로 채움.
```c

#include <stdio.h>
#include <string.h>
int main() {
    char src[] = "Source";  // 문자열 선언
    char dest[10];
    strncpy(dest, src, 3);  // src에서 dest로 문자 3개만 복사
    dest[3] = '\0';         // 문자열 끝 표시 (널 문자 추가, 직접 꼭 해야 함.)
    printf("%s\n", dest);   // 답 : Sou
    return 0;
}

```
| 상황                          | 동작                | 결과                  |
| ---------------------------- | ------------------- | ------------------- |
| `strncpy(dest, "Hello", 3)`  | 앞 3글자 복사          | `"Hel"`             |
| `strncpy(dest, "Hi", 5)`     | 2글자 + 나머지 널 문자 채움 | `"Hi\0\0\0"`        |
| `strncpy(dest, "Hello", 10)` | 전체 복사 + 나머지 널     | `"Hello\0\0\0\0\0"` |



**(4) strcat()**
- 문자열을 다른 문자열에 이어 붙임
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2[] = ", World!";
    strcat(str1, str2);
    printf("%s\n", str1);   // Hello, World!
    return 0;
}


```

**(5) strncat()**
- 지정된 길이만큼 문자열 이어 붙임
- strncat (a, b, c) : (붙일 대상, 원본 문자열, 원본에서 가져올 글자 수)
- *strncpy()* 와의 차이점 : \0이 자동으로 추가됨.
- 붙일 대상의 문자열은 반드시 널값으로 끝나는 문자열이어야 함.
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2p[] = ", World!";
    strncat(str1, str2, 3); // str2의 앞 글자 3개를 str1 뒤에 붙이기
    printf("%s\n", str1);   // Hello, W
    return 0;
}

```

**(6) strcmp()**
- 두 문자열 비교
- strcmp(a, b) : 문자열 a와 b를 한 글자씩 비교.
- 반환값 : 0(같음), 양수(앞이 큼), 음수(뒤가 큼)
- 무조건 기준은 앞 문자열이 뒷 문자열보다 ~~하다.
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "ABC";
    char str2[] = "ACD";
    int result = strcmp(str1, str2);
    printf("%d\n", result); // -1 (B < C)
    return 0;
}

```
| 경우                     | 의미                | 반환값          |
| ---------------------- | ----------------- | ------------ |
| `strcmp("ABC", "ABC")` | 두 문자열 완전히 같음      | `0`          |
| `strcmp("ABC", "ACD")` | `"B"`가 `"C"`보다 작음 | 음수 (보통 `-1`) |
| `strcmp("ACD", "ABC")` | `"C"`가 `"B"`보다 큼  | 양수 (보통 `1`)  |



**(7) strncmp()**
- 지정된 길이만큼 두 문자열을 비교
- 반환값 : 0(같음), 양수(앞이 큼), 음수(뒤가 큼)
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Helium";
    int result = strncmp(str1, str2, 3);    // str1 = Hel, str2 = Hel
    printf("Comparison: %d\n", result);     // Comparison: 0
    return 0;
}

```

**(8) strchr()**
- 문자열에서 특정 문자의 첫 번째 위치 찾음
- strchr(a, b) : (문자열, 찾을 문자)
- 문자를 못 찾는다면 NULL값을 반환함.
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'W');   // 'W'가 있는 위치(주소) 찾기
    if (ptr) {
        printf("%s\n", ptr);    // World!
    }
    return 0;
}

```

**(9) strrchr()**
- 문자열에서 특정 문자의 마지막 위치를 찾음
- strrchr(a,b) : (문자열, 찾을문자)
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    char *ptr = strrchr(str, 'o');  // 'o'가 나타난 마지막 위치는 World! 안에 있음
    if (ptr) {
        printf("%s\n", ptr);    // Found: orld!
    }
}

```

**(10) strstr()**
- 문자열에서 특정 문자열(부분 문자열)의 첫 번째 위치를 찾음
- strstr(a, b) : (전체 문자열, 찾을 문자열)
- strstr = 문자열, strchr = 문자 1개
```c

#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    char *ptr = strstr(str, "World");   // World라는 단어 찾기
    if (ptr) {
        printf("%s\n", ptr);    // World!
    }
    return 0;
}

```

<br>

### 🧩 수학 함수 <Math.h>
**(1) sqrt()**
- 제곱근 반환
```c

#include <stdio.h>
#include <math.h>
int main() {
    printf("%.2f\n", sqrt(16));   // √16 => 4.00
    return 0;
}

```

**(2) pow()**
- 거듭제곱 반환
```c

#include <stdio.h>
#include <math.h>
int main() {
    printf("%.0f\n", pow(2, 3));  // 2³ => 8
    return 0;
}


```

**(3) abs()**
- 정수의 절대값 반환
```c

#include <stdio.h>
#include <math.h>
int main() {
    printf("%d\n", abs(-10));     // |-10| => 10
    return 0;
}


```

**(4) ceil() / floor()**
- 올림 / 내림
- + round() : 주어진 실수 값을 가장 가까운 정수로 반올림 (-3.75면 -4.0)
```c

#include <stdio.h>
#include <math.h>
int main() {
    printf("%.1f, %.1f\n", ceil(2.3), floor(2.7));  // 3.0, 2.0
    return 0;
}

```
| 함수         | 의미           | 동작                   |
| ---------- | ------------ | -------------------- |
| `ceil(x)`  | 올림 (ceiling) | x보다 **크거나 같은 최소 정수** |
| `floor(x)` | 내림 (floor)   | x보다 **작거나 같은 최대 정수** |
=> 만약에 음수일 때는 방향이 반대!! (ceil(-2.3) => -2.0, floor(-2.3) => -3.0)

<br>

### 🧩 기타 자주 사용되는 함수
**(1) atoi() / atof()**
- 문자열을 정수로 변환 / 실수로 변환
```c

#include <stdio.h>
#include <stdlib.h>

int main() {
    char numStr[] = "123";
    int num = atoi(numStr);     // 문자열 "123" → 정수 123
    printf("%d\n", num);        // 123
    return 0;
}

```

**(2) rand() / srand()**
- 난수 생성 / 난수 시드 설정
- time() : 현재 시각 반환
```c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));            // 현재 시각으로 난수 시드 설정
    printf("%d\n", rand() % 100); // 0~99 사이의 랜덤 값
    return 0;
}

```

**(3) toupper() / tolower()**
- 소문자 -> 대문자 / 대문자 -> 소문자
```c

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a';
    printf("%c\n", toupper(ch));   // 'a' → 'A'
    printf("%c\n", tolower('Z'));  // 'Z' → 'z'
    return 0;
}

```

#### C언어 표준 라이브러리

| 헤더파일 | 기능 | 관련 함수 |
|-----------|------|------------|
| **stdio.h** | 표준 입출력 | `printf()`, `scanf()`, `getchar()`, `fopen()`, `fseek()` 등 |
| **string.h** | 메모리와 문자열의 처리 | `strcat()`, `strcmp()`, `strcpy()`, `strlen()` 등 |
| **ctype.h** | 문자 검사 및 변환 | `isalnum()`, `isalpha()`, `isgraph()`, `tolower()` 등 |
| **math.h** | 삼각함수, 지수, 절댓값, 수학 함수 등 | `sin()`, `cos()`, `tan()`, `log()`, `exp()`, `fmod()`, `sqrt()`, `abs()` 등 |
| **stdlib.h** | 메모리 동적 할당, 가상 난수 발생, 문자열 변환 | `malloc()`, `free()`, `rand()`, `strtod()`, `atof()` 등 |
| **malloc.h** | 메모리 할당에 관한 함수 | `calloc()`, `malloc()`, `free()` 등 |
| **time.h** | 날짜와 시간, 내부 클럭 관련 | `clock()`, `ctime()`, `asctime()`, `ftime()`, `time()`, `getdata()` 등 |
