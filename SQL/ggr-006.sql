-- 다음과 같이 테이블을 정의하고 튜플을 삽입하였을 때, 아래 1, 2번의 SQL문 결과 작성

CREATE TABLE 부서 {
    부서코드 INT PRIMARY KEY,
    부서명 VARCHAR(20)
};
CREATE TABLE 직원 {
    직원코드 INT PRIMARY KEY,
    부서코드 INT,
    직원명 VARCHAR(20),
    FOREIGN KEY (부서코드) REFERENCES 부서(부서코드) ON DELETE CASCADE
};

INSERT INTO 부서 VALUES (10, '영업팀');
INSERT INTO 부서 VALUES (20, '개발팀');
INSERT INTO 부서 VALUES (30, '기획팀');

INSERT INTO 직원 VALUES (1000 10, '김영업');
INSERT INTO 직원 VALUES (2000, 10, '이영업');
INSERT INTO 직원 VALUES (3000, 20, '박개발');
INSERT INTO 직원 VALUES (4000, 20, '최개발');
INSERT INTO 직원 VALUES (5000, 20, '정개발');
INSERT INTO 직원 VALUES (6000, 30, '조기획');
INSERT INTO 직원 VALUES (7000, 30, '강기획');

-- 1. SELECT DISTINCT COUNT(부서코드) FROM 직원
--    WHERE 부서코드 = 20;

-- 답: 3
-- 이유 : 부서코드가 20인 직원은 박개발, 최개발, 정개발로 총 3명
--        따라서 DISTINCT COUNT(부서코드)의 결과는 3이 된다.
--        (부서코드가 20인 직원이 3명이지만, 부서코드는 모두 20으로 동일하므로
--         DISTINCT COUNT(부서코드)는 1이 아닌 3이 된다.)


-- 2. DELETE FROM 부서 WHERE 부서코드 = 20;
--    SELECT DISTINCT COUNT(부서코드) FROM 직원;

-- 답: 4
-- 이유 : 부서코드가 20인 부서를 삭제하면, ON DELETE CASCADE 옵션에 의해
--        해당 부서에 속한 직원들도 모두 삭제된다.
--        따라서 직원 테이블에는 부서코드가 10인 김영업, 이영업과
--        부서코드가 30인 조기획, 강기획만 남게 되어 총 4명의 직원이 남게 된다.