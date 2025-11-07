-- A 테이블 (NAME)
-- MARTIN
-- SCOTT
-- SMITH

-- B 테이블 (RULE)
-- S%
-- %T%

SELECT COUNT(*) CNT FROM A CROSS JOIN B
WHERE A.NAME LIKE B.RULE;

-- CNT 테이블 (A.NAME / B.RULE)
-- MARTIN / S%
-- MARTIN / %T%
-- SCOTT / S%
-- SCOTT / %T%
-- SMITH / S%
-- SMITH / %T%

-- 답 : 5
-- 이유 : B.RULE의 조건을 만족하는 A.NAME 행의 개수는 5개이다.
-- MARTIN은 S% 조건을 만족하지 않지만 %T% 조건을 만족하여 1개,
-- SCOTT은 S% 조건과 %T% 조건을 모두 만족하여 2개,
-- SMITH는 S% 조건과 %T% 조건을 모두 만족하여 2개이다.