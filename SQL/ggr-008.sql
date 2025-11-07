-- 다음 테이블을 참조하여 SQL문을 실행했을 때 출력 결과 구하기 (TABLE 내 NULL은 값이 없음을 의미)

SELECT COUNT(COL2)
FROM TABLE
WHERE COL1 IN (2,3) OR COL2 IN (3, 5)

-- TABLE (INDEX / COL1 / COL2)
-- 1 / 2 / NULL
-- 2 / 5 / 8
-- 3 / 3 / 5
-- 4 / 7 / 3
-- 5 / NULL / 3


-- 정답: 3
-- 해설: WHERE 절에서 COL1이 2 또는 3인 행과 COL2가 3 또는 5인 행을 모두 고려한다.
-- COL1이 2인 행은 INDEX 1, COL1이 3인 행은 INDEX 3이다.
-- COL2가 3인 행은 INDEX 4와 INDEX 5, COL2가 5인 행은 INDEX 3이다.
-- 따라서 조건을 만족하는 행은 INDEX 1, 3, 4, 5로 총 4행이지만,
-- COUNT 함수는 NULL 값을 제외하고 계산하므로 INDEX 1의 COL2 값이 NULL이므로 제외된다.
-- 최종적으로 INDEX 3, 4, 5의 3행이 COUNT 함수에 의해 계산된다.