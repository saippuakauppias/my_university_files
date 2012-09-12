--------------------------------------------------------
--  DDL for Procedure EXAM_SHEET
--------------------------------------------------------
set define off;

  CREATE OR REPLACE PROCEDURE "DEKANAT"."EXAM_SHEET" 
(
  IDGR IN NUMBER  
, IDTE IN NUMBER  
, IDDI IN NUMBER  
, ERR OUT NUMBER  
) AS 
--  stud_id students.id_student%TYPE;
  marked NUMBER;
BEGIN
  err := 0;
  
    FOR stud_id IN (SELECT id_student FROM students WHERE (id_status = 1) AND (id_group = idgr)) LOOP
--  OPEN studs;
--  LOOP
--    FETCH studs INTO stud_id;
--    EXIT WHEN NOT studs%FOUND;
    
    SELECT count(value_mark) INTO marked FROM marks WHERE (id_student = stud_id.id_student) AND (id_teacher = idte) AND (id_discipline = iddi);
    
    IF marked = 0 THEN
      INSERT INTO marks(id_mark, value_mark, id_student, id_teacher, id_discipline) VALUES(null, 0, stud_id.id_student, idte, iddi);
    END IF;
    
  END LOOP;


EXCEPTION
  WHEN CURSOR_ALREADY_OPEN THEN
    err := 1;
  WHEN DUP_VAL_ON_INDEX THEN
    err := 2;
  WHEN INVALID_CURSOR THEN
    err := 3;
  WHEN INVALID_NUMBER THEN
    err := 4;
  WHEN LOGIN_DENIED THEN
    err := 5;
  WHEN NO_DATA_FOUND THEN
    err := 6;
  WHEN NOT_LOGGED_ON THEN
    err := 7;
  WHEN PROGRAM_ERROR THEN
    err := 8;
  WHEN STORAGE_ERROR THEN
    err := 9;
  WHEN TIMEOUT_ON_RESOURCE THEN
    err := 10;
  WHEN TOO_MANY_ROWS THEN
    err := 11;
--  WHEN TRANSACTION_BACKED_OUT THEN
--    err := 12;
  WHEN VALUE_ERROR THEN
    err := 13;
  WHEN ZERO_DIVIDE THEN
    err := 14;
  WHEN OTHERS THEN
    err := 15;
END EXAM_SHEET;

/

