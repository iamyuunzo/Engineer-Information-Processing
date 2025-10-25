## 🖥️ Python

### 1. Python 기본

**(1) Python이란?**
- 네덜란드 출신 프로그래머 귀도 반 로섬에 의해 개발 (1989)
- 스크립트 언어, 동적 타이핑, 독립적인 플랫폼, 간결한 문법, 확장성과 이식성 좋음, 표준 라이브러리

**(2) Python 문법**
1️⃣ 연산자
- 산술 연산자 : +, -, *, /, //(몫), %(나머지), **(거듭제곱)
- 비교 연산자 : ==, !=, >, <, >=, <=
- 논리 연산자 : and, or, not
- 비트 연산자 : &, |, ^(XOR), ~(NOT), <<, >>
- 기타 연산자 : in, not in, is, is not
    - in (포함 여부 확인)
    ```python
    'a' in 'apple' # a가 apple에 있나요? -> Yes (True)

    ```
    - not in (포험 여부 부정)
    ```python
    'b' in 'apple' # b가 apple에 없나요? -> Yes (True)

    ```
    - is (동일 객체 확인)
    ```python
    x = [1, 2, 3]
    y = [1, 2, 3]
    z = x
    print(x is z)   # True
    print(x is y)   # False
    print(x == y)   # True (내용물은 같지만 각각의 객체임)

    ```
    - is not (동일X 확인)
    ```python
    a = 10
    b = 10
    print(a is not b)   # False

    ```

<br>

2️⃣ 제어문
- if문 : if ~ elif ~ else
    ```python
    a = 10
    if a > 10 :
        print("a가 10보다 크다")
    elif a > 5 :
        print("a가 5보다 크다")     # elif문 출력
    else :
        print("a가 5보다 작다")

    ```
- 삼항 연산자 : result = 값1 if 조건 else 값2
    ```python
    result = "Big" if x > 5 else "Small"

    ```
- match문 : match ~ case (ex. x = 2 => case 2 출력)

<br>

3️⃣ 반복문
- for문 : for i range(5) -> 0 ~ 4까지 출력 (범위 순회)
    ```python
    # 1. 기본적인 for문
    for i in [1, 2, 3]:
        print(i)    # 1 2 3(세로로 출력)

    # 2. range


    ```
- while문 : while x < 5 -> 참인 동안만 반복
    ```python
    i = 0
    sum = 0
    while i < 3:
        sum = sum+i
        i = i + 1
    print(sum)  # 3

    # i = 0 : sum = 0+0=0, i = 0+1=1
    # i = 1 : sum = 0+1=1, i = 1+1=2
    # i = 2 : sum = 1+2=3, i = 1+2=3 (종료)

    ```
- break, continue문 : 즉시 종료, 건너뛰고 다음 반복
    ```python
    result = "Big" if x > 5 else "Small"

    ```

**(3) Python 문자열 처리**

1️⃣ 문자열 기본
- 문자열 생성 : 작은 따옴표 (') or 큰 따움표 (")
- 여러 줄 : 삼중 따옴표 (''' or """)

**문자열 인덱싱과 슬라이싱**
- 인덱싱 : 문자열의 특정 위치 문자에 접근 (0부터 시작)
- 슬라이싱 : 부분 문자열을 추출

<br>

2️⃣ 문자열 메서드
**1. 문자열 변환 관련 메서드**
- lower() : 문자열 -> 소문자로 변환
- upper() : 문자열 -> 대문자로 변환
- capitalized() : 지정된 범위의 문자열 반환 (begin = 포함, end = 제외)
- title() : 특정 문자 or 문자열을 다른 값으로 대체
- strip() : 문자열 양 끝에 있는 공백이나 지정 문자 제거
    - lstrip : 좌 공백 제거
    - rstrip : 우 공백 제거
```python
    # 1. lower
    str = "AMY"
    print(str.lower()) # amy

    # 2. upper
    str = "amy"
    print(str.upper()) # AMY

    # 3. capitalized
    str = "amy"
    print(str.capitalize()) # Amy

    # 4. title
    str = "amy is"
    print(str.title())  # Amy Is

    # 5. strip
    str = " amy "
    print(str.strip())  # amy

```

**2. 문자열 검색 및 확인**
- find(sub) : 특정 부분 문자열이 처음 나타나는 위치 반환 (값이 없으면 -1)
- index(sub) :특정 부분 문자열의 위치 반환 (찾을 수 없으면 오류 발생)
- startswith(prefix) : 문자열이 특정 문자열로 시작하는지 확인
- endswith(suffix) : 문자열이 특정 문자열로 끝나는지 확인
- count(sub) : 특정 문자열이 몇 번 나타나는지 확인
```python
    str = "amyamy"

    # 1. find
    print(str.find('y'))    # 2

    # 2. index
    print(str.index("a"))        # 0

    # 3. startswith
    print(str.startswith("am"))  # True

    # 4. endswith
    print(str.endswith("my"))    # True

    # 5. count
    print(str.count("a"))        # 2

```

**3. 문자열 대체 및 수정**
- replace(old, new) : 특정 문자열 대체
- split(sep) : 구분자 기준으로 문자열을 나누고 리스트로 반환
- join(iterable) : iterable의 요소(여러 개의 문자열)를 문자열 하나로 합침
- partition(sep) : 인자값을 기준으로 첫 번째 조건이 발견되면, 분리하여 튜플로 반환
```python
    str = "amy_korea_south"

    # 1. replace
    print(str.replace("amy", "bob"))   # bob_korea_south

    # 2. split
    arr = str.split('_')
    print(arr)  # ['amy', 'korea', 'south']

    # 3. join
    str = '^'.join(['a', 'b', 'c'])
    print(str)  # a^b^c
    
    str1 = ''.join(['a', 'b', 'c'])
    print(str)  # abc

    # 4. partiton
    print("amy_korea".partition("_"))# ('amy', '_', 'korea')

```

**4. 문자열 검사**
- isalnum() : 알파벳 or 숫자로만 구성된건지 확인
- isalpha() : 알파벳으로만 구성된건지 확인
- isdigit() : 숫자로만 구성된건지 확인
- isspace() : 공백만으로 구성된건지 확인
```python
    # 1. isalnum
    s1 = "abc123"
    print(s1.isalnum())  # True

    # 2. isalpha
    s2 = "abc"
    print(s2.isalpha())  # True

    # 3. isdigit
    s3 = "123"
    print(s3.isdigit())  # True

    # 4. isspace
    s4 = "   "
    print(s4.isspace())  # True   

```

**5. 문자열 조작**
- len() : 문자열 길이 반환
- [::-1] : 문자열 역순으로 뒤집기
- in : 특정 문자열 포함 여부 확인
- format() : 문자열 안에 값을 삽입 (포매팅)
```python
    str = "amy"

    # 1. len()
    print(len(str)) # 3

    # 2. [::-1]
    print(s[::-1])         # yma

    # 3. in
    print("a" in s)        # True

    # 4. format
    print("My name is {}".format("Amy"))  # My name is Amy

```

<br>

**(4) Python 자료구조**
- 리스트 = [], 튜플 = (), 딕셔너리, 셋 = {}
| 자료형       | 특징              | 변경 가능  | 중복     | 순서 | 대표 함수                        |
| --------- | --------------- | ------ | ------ | -- | ---------------------------- |
| **List**  | 여러 자료 저장, 수정 가능 | ✅      | ✅      | ✅  | append, insert, remove, sort |
| **Dict**  | 키-값 쌍 저장        | ✅ (값만) | ❌ (키만) | ✅  | keys, values, get, update    |
| **Set**   | 집합 형태 (중복 제거)   | ✅      | ❌      | ❌  | add, remove, union           |
| **Tuple** | 수정 불가한 리스트      | ❌      | ✅      | ✅  | count, index                 |


1️⃣ 리스트 (List)
- 순서가 있는 변경 가능한 자료 구조
- 다양한 데이터를 저장할 수 있음. (인덱싱 O -> 중복 O)
**종류**
- append(x) : 리스트 끝에 항목을 추가
- insert(i, x) : 특정 위치에 항목을 삽입
- pop([i]) : 특정 위치의 항목을 제거 (인덱스 생략 시 마지막 항목 제거)
- remove(x) : 특정 값을 가진 1번 항목 제거
- sort() : 리스트 항목 정렬
- reverse() : 리스트 항목 순서 뒤집음.
```python
    # 리스트 기본
    fruits = ['apple', 'banana', 'cherry']
    print(fruits[1])     # banana (인덱싱 가능)

    # append
    fruits.append('orange')
    print(fruits)        # ['apple', 'banana', 'cherry', 'orange']

    # insert
    fruits.insert(1, 'grape')
    print(fruits)        # ['apple', 'grape', 'banana', 'cherry', 'orange']

    # pop
    fruits.pop()         # orange 삭제
    print(fruits)        # ['apple', 'grape', 'banana', 'cherry']

    # remove
    fruits.remove('banana')
    print(fruits)        # ['apple', 'grape', 'cherry']

    # sort
    numbers = [3, 1, 2]
    numbers.sort()
    print(numbers)       # [1, 2, 3]

    # 리스트 슬라이스
    list = [1, 2, 3, 4, 5, 6, 7, 8]
    print(list[1:3])    # [2,3]
    print(list[:3])     # [1, 2, 3]
    print(list[3:])     # [4, 5, 6, 7, 8]
    print(list[1::2])   # [2, 4, 6, 8]

```


2️⃣ 딕셔너리 (Dictionary)
- 순서가 있고 키 중복 x, 값 중복 o (없으면 None 반환)
- 키-값(key-value) 쌍으로 데이터를 저장하는 자료 구조
**종류**
- keys() : 딕셔너리 모든 키 반환
- values() : 딕셔너리 모든 값 반환
- items() : 딕셔너리의 키-값 쌍 반환 (튜플 형태)
- get(key, [default]) : 키에 해당하는 값을 반환 (없으면 default)
- update(other_dict) : 다른 딕셔너리와 병합
```python
    # 딕셔너리 기본
    person = {'name': 'Amy', 'age': 25, 'city': 'Seoul'}

    # keys
    print(person.keys())      # dict_keys(['name', 'age', 'city'])

    # values
    print(person.values())    # dict_values(['Amy', 25, 'Seoul'])

    # items
    print(person.items())     # dict_items([('name', 'Amy'), ('age', 25), ('city', 'Seoul')])

    # get
    print(person.get('age'))          # 25
    print(person.get('job', 'None'))  # None

    # update
    person.update({'age': 26, 'job': 'Developer'})
    print(person)  # {'name': 'Amy', 'age': 26, 'city': 'Seoul', 'job': 'Developer'}

```


3️⃣ 셋 (Set)
- 순서와 중복 허용 X인 자료 구조
- 인덱싱 불가능 (중복 데이터 제거는 자동으로 됨)
**종류**
- add(x) : 항목 추가
- remove(x) : 특정 항목 제거 (항목 X -> keyError 발생)
- discard(x) : 특정 항목 제거 (항목 X -> 오류 없음)
- union(set) : 합집합
- intersection(set) : 교집합 반환
- difference(set) : 차집합 반환
```python
    # 셋 기본
    s1 = {1, 2, 3, 3}
    print(s1)        # {1, 2, 3} (중복 자동 제거)

    # add
    s1.add(4)
    print(s1)        # {1, 2, 3, 4}

    # remove
    s1.remove(4)
    print(s1)        # {1, 2, 3}

    # discard
    s1.discard(10)   # 오류 안 남

    # union
    s2 = {3, 4, 5}
    print(s1.union(s2))         # {1, 2, 3, 4, 5}

    # intersection
    print(s1.intersection(s2))  # {3}

    # difference
    print(s1.difference(s2))    # {1, 2}

```


4️⃣ 튜플 (Tuple)
- 순서 O, 변경 X인 자료 구조 (인덱싱은 O -> 중복 허용)
**종류**
- count(x) : 특정 값 개수 반환
- index(x) : 특정 값 첫번째 인덱스 반환
```python
    # 튜플 기본
    t = (1, 2, 2, 3)
    print(t[1])      # 2 (인덱싱 가능)
    # t[1] = 5       # ❌ 에러 (변경 불가)

    # count
    print(t.count(2))   # 2

    # index
    print(t.index(3))   # 3

```

<br>

**(5) Python Class / Function**
1️⃣ 클래스 (Class)
- 객체를 생성하기 위한 템플릿
- 데이터와 메서드를 하나의 논리적 단위로 묶는 것
**요소**
- 속성 (Attribute) : 객체의 데이터를 저장 (_init_메서드에서 self로 정의)
- 메서드 (Methods) : 객체가 수행할 동작을 정의 (첫 매개변수로 self 받음)
- 생성자 (Constructor) : _init_ 메서드로 정의 (객체 생성 시 초기화 담당)
- 소멸자 (Destructor) : _del_ 메서드로 정의 (객체가 소멸될 때 호출됨.)

2️⃣ 함수 (Function)
- 특정 작업을 수행하는 코드 블록 (재사용 가능한 형태로 정의)
- 가독성과 유지보수성이 올라감
**종류**
- 매개변수, 반환값 O
- 매개변수, 반환값 X
- 둘 다 X
- 기본값 매개변수
- 가변 인자

3️⃣ 전역변수 & 지역변수
- 전역변수 : 함수 외부에서 정의된 변수 (프로그램 전역에서 접근 가능)
- 지역변수 : 함수 내부에서 정의된 변수 (함수 종료 시 소멸)
    - 함수에서 전역변수 읽기 (함수 내부에서 전역변수 읽기 O)
    - 함수에서 전역변수 변경 (global 키워드를 함수 내부에서 써야 변경 가능)
    - 전역변수와 지역변수가 충돌하는 경우 (동일한 이름의 전역, 지역 -> 지역 우선)

<br>

**(6) List Comprehension**
- `expression for item in iterable if condition`
- 기존의 리스트나 다른 반복 가능한 객체로부터 조건 적용 or 변환
- 한 줄의 코드로 새로운 리스트를 간결하게 생성하는 문법으로, 가독성과 효율성이 올라감.
```python
    # expression : 리스트 각 요소 생성 표현식
    # item : 반복 가능 객체 각 요소
    # iterable : 반복 가능 객체
    # condition : 필터링

    numbers = [1, 2, 3, 4, 5]
    squared = [n ** 2 for n in numbers] # 기본
    evens = [n for n in numbers if n % 2 = 0] # 조건문

```
**리스트 컴프리헨션 동작 순서**
1. for item in iterable
2. if
3. expression


<br>

**(7) Lambda Function**
- `lambda arguments : expression`
- 익명함수 (Anonymous Function)를 정의하기 위해 사용하는 방식
- lambda 키워드를 사용하여 간단한 함수 정의 (한 줄로 작성, 간단한 계산)
```python
    # 1. add
    lambda x, y : x+y

    # 2. 정렬 기준 지정
    data = [(1, 2), (3, 1), (5, 0)]
    sorted_data = sorted(data, key = lambda x : x[1])

    # 3. 필터릴ㅇ
    numbers = [1, 2, 3, 4, 5]
    even_numbers = list(filter(lambda x : x % 2 == 0, numbers))

    # 4. 변환
    numbers = [1, 2, 3, 4, 5]
    squared_numbers = list(map(lambda x : x ** 2, numbers))

```