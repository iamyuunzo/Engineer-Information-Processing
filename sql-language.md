## 🖥️ SQL

### 1. SQL (Structured Query Language)

**(1) SQL의 종류**

- **DDL (Definition)** : 데이터 정의어
    => 논리/물리적 데이터 구조 정의, 변경
    => RENAME, TRUNCATE(테이블의 모든 데이터 삭제. 구조는 남기고 데이터만)도 있음.

    1. CREATE (생성)
    - CREATE DOMAIN/SCHEMA/TABLE/VIEW/INDEX
    ```sql
    CREATE TABLE Student (id INT, name VARCHAR(20));
    ```

    2. ALTER (변경)
    - 기존 테이블 구조 변경
    ```sql
    ALTER TABLE Student ADD age INT;
    ```

    3. DROP (삭제)
    - DROP DOMAIN/SCHEMA/TABLE/VIEW/INDEX
    - CASCADE : 참조하는 모든 개체 함께 제거
    - RESTRICT : 제거할 요소를 다른 개체가 참조 시 제거 취소
    ```sql
    DROP TABLE Student;
    ```

- **DML (Manipulation)** : 데이터 조작어
    => 테이블 안의 데이터를 조작(조회, 추가, 수정, 삭제)
    => NOT, OR, AND -> 논리 연산자
    
    1. SELECT (조회)
    - SELECT FROM 테이블명 [WHERE 조건];
    | 절(Clause)    | 역할                | 예시                     |
    | ------------ | ----------------- | ---------------------- |
    | **SELECT**   | 출력할 컬럼(필드) 지정     | `SELECT 이름, 학년`        |
    | **DISTINCT** | 중복 제거             | `SELECT DISTINCT 이름`   |
    | **FROM**     | 조회할 테이블 지정        | `FROM 학생`              |
    | **WHERE**    | 조건 지정 (행 단위)      | `WHERE 수학 >= 80`       |
    | **GROUP BY** | 그룹화 (집계 기준)       | `GROUP BY 학년`          |
    | **HAVING**   | 그룹 조건 지정          | `HAVING COUNT(*) >= 2` |
    | **ORDER BY** | 정렬 (ASC↑ / DESC↓) | `ORDER BY 나이 DESC`     |
    | **OR** | 여러 조건 중 하나라도 참이면 참 | `부서='경리' OR 부서='영업'` <br> `부서 IN ('경리', '영업')` |
    | **AND** | 두 조건이 모두 참일 때만 참 | `생일 >= '2001-01-01' AND 생일 <= '2002-12-31'` <br> `생일 BETWEEN '2001-01-01' AND '2002-12-31'` |
    | **LIKE** | 문자열 패턴 검색 <br> `%` : 모든 글자 / `_` : 한 글자 | `LIKE '박%'` → '박'으로 시작하는 모든 이름 <br> `LIKE '_은'` → '은'으로 끝나는 두 글자 이름 |
    | **IS NULL** | 값이 비어있을 때 | `전화번호 IS NULL` → 전화번호가 없는 경우 |
    | **NOT** | 부정 조건 (조건의 반대) | `NOT IN ('경리', '영업')` <br> `수학 NOT BETWEEN 0 AND 50` |

    ```sql
    SELECT DISTINCT 이름             -- 이름 컬럼을 선택하고, 중복된 이름은 제거
    FROM 학생                        -- '학생' 테이블에서 데이터를 가져옴
    WHERE 수학 >= 80                 -- 수학 점수가 80 이상인 학생만 조회
    GROUP BY 학년                    -- 학년별로 데이터를 묶음
    HAVING COUNT(*) >= 2             -- 학년별로 학생이 2명 이상인 그룹만 출력
    ORDER BY 나이 ASC;               -- 나이를 오름차순(ASC)으로 정렬
    ```

    ** 집합 연산자 **
    | 절(Clause)           | 종류                    |
    | -------------------- | ---------------------- |
    | **UNION**            | 합집합 (중복행 제거)      |
    | **UNION ALL**        | 합집합 (중복행 포함)      | 
    | **INTERSECT**        | 교집합 (중복행 제거)      |
    | **EXCEPT(MINUS)**    | 차집합 (중복행 제거)      |

    ** JOIN **
    - 2개 이상의 테이블 결합하여 검색
    - 내부 조인 (Inner Join)
    - 자연 조인 (Natural Join)
    - 왼쪽 외부 조인 (Left Outer Join)
    - 오른쪽 외부 조인 (Right Outer Join)
    - 곱집합 (Cross Join)


    2. INSERT (삽입)
    - INSERT INTO 테이블명 VALUES 데이터;
    ```sql
    INSERT INTO Student VALUES (1, 'Alice', 22);
    ```

    3. DELETE (삭제)
    - DELETE FROM 테이블명 [WHERE 조건];
    ```sql
    UPDATE Student SET age = 23 WHERE id = 1;
    ```

    4. UPDATE (변경)
    - UPDATE 테이블명 SET 속성명 = 데이터 [WHERE 조건];
    ```sql
    DELETE FROM Student WHERE id = 1;
    ```


- **DCL (Control)** : 데이터 제어어
    => 데이터 보안/복구/병행 수행 제어 무결성 유지
    => COMMIT, ROLLBACK, SAVEPOINT는 TCL 이라고도 함. (트랜잭션 제어어)

    1. COMMIT (정상 완료)
    - 트랜잭션 확정 (변경 저장)

    2. ROLLBACK (이전 상태)
    - 트랜잭션 취소 (복원)
    - SAVEPOINT : 트랜잭션 내 ROLLBACK할 저장 위치 지정

    3. GRANT (권한 부여)
    - GRANT 권한리스트 ON 개체 TO 사용자 [WITH GRANT OPTION]
    - WITH GRANT OPTION : 부여받은 권한을 다른 사용자에게 재부여
    ```sql
    GRANT SELECT ON Student TO user1;
    ```

    4. REVOKE (권한 취소)
    - REVOKE [GRANT OPTION FOR] 권한 리스트 ON 개체 FROM 사용자
    - GRANT OPTION FOR : 다른 사용자에게 권한 부여 가능한 권한 취소
    ```sql
    REVOKE SELECT ON Student FROM user1;
    ```

    ** 사용자 등급별 권한 요약 **
    
    | 사용자 구분 | 주요 역할 | 기본 권한 | 설명 / 예시 |
    |--------------|------------|------------|---------------|
    | **DBA (Database Administrator)** | 데이터베이스 관리자 | 모든 권한 (ALL PRIVILEGES) | 데이터베이스 생성, 사용자 생성, 권한 부여/회수, 백업 및 복구 등 전체 관리 권한을 가짐 |
    | **RESOURCE (자원 사용자)** | 개발자 또는 객체 생성자 | CREATE, ALTER, DROP | 자신이 소유한 테이블·뷰·시퀀스 등을 생성하고 수정 가능 |
    | **CONNECT (일반 사용자)** | 일반 접속 사용자 | SELECT, INSERT, UPDATE, DELETE | DB 접속 및 기본 DML(데이터 조작) 명령 실행 가능 |
    | **PUBLIC (공용 사용자 그룹)** | 모든 사용자에게 공통으로 적용 | 제한적 접근 권한 | 모든 사용자에게 자동으로 부여되는 공통 객체 접근 권한 (예: 공용 뷰, 함수 등) |
    | **USER (일반 계정)** | 개별 사용자 | 개별 부여된 권한 | DBA 또는 다른 사용자로부터 GRANT 받은 권한만 사용 가능 |

<br>

### 2. 관계해석, 관계대수

1. 관계대수

- 절차적 언어 (일반 집합 연산자, 순수 관계 연산자)
    
    (1) 순수 관계 연산자
    - **SELECT (σ)**: 행(튜플) 필터링
    ```sql
    SELECT * FROM Student WHERE Major = 'CS';
    ```

    - **PROJECT (π)**: 열(속성) 선택
    ```sql
    SELECT DISTINCT SName, Major FROM Student;
    -- π SName, Major (Student)
    ```

    - **JOIN (⋈)**: 두 릴레이션을 조건으로 결합
    ```sql
    SELECT *
    FROM Student s
    JOIN Enroll e ON s.SID = e.SID;
    -- Student ⋈_{Student.SID = Enroll.SID} Enroll
    ```

    - **DIVISION (÷)**: “모든 ~에 대해” 조건을 만족하는 튜플 찾기
    ```sql
    SELECT e1.SID
    FROM Enroll e1
    GROUP BY e1.SID
    HAVING COUNT(DISTINCT e1.CID) = (SELECT COUNT(*) FROM Course);
    -- π SID (Enroll) ÷ π CID (Course)
    ```

    (2) 일반 관계 연산자
    - **UNION (∪)**: 합집합
    ```sql
    SELECT SName FROM Student WHERE Major='CS'
    UNION
    SELECT SName FROM Student WHERE Major='EE';
    -- π SName (σ Major='CS' (Student)) ∪ π SName (σ Major='EE' (Student))
    ```

    - **INTERSECTION (∩)**: 교집합
    ```sql
    SELECT SName FROM Student WHERE Major='CS'
    INTERSECT
    SELECT s.SName
    FROM Student s
    JOIN Enroll e ON s.SID=e.SID
    JOIN Course c ON c.CID=e.CID
    WHERE c.CName='DB';
    -- π SName (σ Major='CS' (Student)) ∩ π SName (Student ⋈ Enroll ⋈ σ CName='DB'(Course))
    ```

    - **DIFFERENCE (−)**: 차집합
    ```sql
    SELECT SID FROM Student WHERE Major='CS'
    EXCEPT
    SELECT e.SID
    FROM Enroll e JOIN Course c ON c.CID=e.CID
    WHERE c.CName='DB';
    -- π SID (σ Major='CS'(Student)) − π SID (Enroll ⋈ σ CName='DB'(Course))
    ```

    - **CARTESIAN PRODUCT (×)**: 교차 곱
    ```sql
    SELECT * FROM Student CROSS JOIN Course;
    -- Student × Course
    ```


2. 관계해석

- 비절차적 특성
- 논리 연산자(∧, ∨, ¬) 와 정량자(∀, ∃) 로 질의를 표현

🔹 관계해석에서 사용하는 연산자 / 정량자 기호 정리

| 기호 | 이름 | 읽는 법 / 의미 | 설명 | SQL과의 대응 |
|------|-------|----------------|--------|----------------|
| **∧** | 논리곱 (AND) | 그리고(and) | 두 조건이 모두 참일 때 참 | `AND` |
| **∨** | 논리합 (OR) | 또는(or) | 두 조건 중 하나라도 참일 때 참 | `OR` |
| **¬** 또는 **~** | 부정 (NOT) | 아니다(not) | 조건의 참/거짓을 반대로 바꿈 | `NOT` |
| **∃** | 존재 정량자 (Existential) | "∃x P(x)" → 어떤 x가 존재한다 | 조건을 만족하는 튜플이 **하나라도 있으면 참** | `EXISTS` |
| **∀** | 전칭 정량자 (Universal) | "∀x P(x)" → 모든 x에 대해 | (For All) 모든 튜플이 조건을 **모두 만족하면 참** | `NOT EXISTS` 패턴으로 대체 |