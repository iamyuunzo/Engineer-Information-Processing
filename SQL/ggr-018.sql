SELECT COUNT(*)
FROM employee AS e JOIN project AS p ON e.project_id = p.project_id
WHERE p.name IN (
    SELECT name FROM project p WHERE p.project_id IN (
        SELECT project_id FROM employee GROUP BY project_id HAVING COUNT(*) < 2
    )
);

-- employee (no / first_name / last_name / project_id)
-- 1 / John / Doe / 10
-- 2 / Jim / Carry / 20
-- 3 / Rachel / Redmond / 10

-- project (project_id / name)
-- 10 / Alpha
-- 20 / Beta
-- 10 / Gamma

-- 답 : 1

-- 1. 가장 안의 sub query
-- employee 테이블에서 project_id 그룹 지정하고 행 개수가 2개 미만인 것만 산출
-- 10은 2개이므로 20인 1개만 산출

-- 2. 밖의 sub query
-- project에서 project_id가 20인 name 산출 : Beta

-- 3. main query
-- 1, 2의 개수 = 1