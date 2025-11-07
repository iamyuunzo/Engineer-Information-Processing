-- SQL구문의 빈칸을 작성하시오.

-- 1.
INSERT INTO 사원 (사원번호, 이름, 주소, 부서) () (12345, '홍길동', '서울', '영업');
-- 답 : VALUES

-- 2.
INSERT INTO 부서 (사원번호, 이름, 주소, 부서) () 사원번호, 이름, 나이, 25 
FROM 사원
WHERE 이름 = '홍길동'
-- SELECT

-- 3.
SELECT * () 사원;
-- FROM

-- 4.
UPDATE 사원 () 부서 = '퇴사'
WHERE 사원번호 = 12345;
-- SET