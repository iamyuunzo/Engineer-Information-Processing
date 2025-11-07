-- emp 테이블 (id / name)
-- 1001 / 김철수
-- 1002 / 홍길동
-- 1004 / 강감찬
-- 1008 / 이순신

-- sal 테이블 (id / incentives)
-- 1002 / 300
-- 1004 / 300
-- 1008 / 1000
-- 1009 / 500

SELECT name, incentives FROM emp, sal
WHERE emp.id = sal.id and incentives >= 500

-- 답
-- name / incentives
-- 이순신 / 1000

-- 이유
-- incentives가 500이상인 것 : 1008, 1009
-- emp 테이블에서 충족하는 것 : 이순신 (1009는 존재X)