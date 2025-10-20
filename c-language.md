## C언어 주요 함수

<br>

### 1. 문자열 함수 <string.h>
(1) strlen()
- 문자열 길이 반환
- null '\0' 값은 포함하지 않음
```c

#include <stdio.h>
#include <string.h>


```


**(2) strcpy()**
- 문자열을 다른 문자열로 복사
```c

#include <stdio.h>
#include <string.h>


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
    printf("%s\n", dest);   // 🧩 답 : Sou
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
```c

#include <stdio.h>
#include <string.h>


```

**(8) strchr()**
- 문자열에서 특정 문자의 첫 번째 위치 찾음
```c

#include <stdio.h>
#include <string.h>


```

**(9) strrchr()**
- 문자열에서 특정 문자의 마지막 위치를 찾음
```c

#include <stdio.h>
#include <string.h>


```

**(10) strstr()**
- 문자열에서 특정 문자열(부분 문자열)의 첫 번째 위치를 찾음
```c

#include <stdio.h>
#include <string.h>


```

<br>

### 2. 수학 함수 <Math.h>
**(1) sqrt()**
- 제곱근 반환
```c

#include <stdio.h>
#include <string.h>


```

**(2) pow()**
- 거듭제곱 반환
```c

#include <stdio.h>
#include <string.h>


```

**(3) abs()**
- 정수의 절대값 반환
```c

#include <stdio.h>
#include <string.h>


```

**(4) ceil() / floor()**
- 올림 / 내림
```c

#include <stdio.h>
#include <string.h>


```

<br>

### 3. 기타 자주 사용되는 함수
**(1) atoi() / atof()**
- 문자열을 정수로 변환 / 실수로 변환
```c

#include <stdio.h>
#include <string.h>


```

**(2) rand() / srand()**
- 난수 생성
```c

#include <stdio.h>
#include <string.h>


```

**(3) toupper() / tolower()**
- 소문자 -> 대문자 / 대문자 -> 소문자
```c

#include <stdio.h>
#include <string.h>


```