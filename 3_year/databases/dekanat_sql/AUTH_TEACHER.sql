--------------------------------------------------------
--  DDL for Procedure AUTH_TEACHER
--------------------------------------------------------
set define off;

  CREATE OR REPLACE PROCEDURE "DEKANAT"."AUTH_TEACHER" 
(
  IDX IN teachers.id_teacher%type
, PWD IN teachers.passwod%type
, ERR OUT NUMBER  
) AS 
authed NUMBER;
BEGIN
  SELECT COUNT(id_teacher) into authed from teachers
    WHERE (id_teacher = IDX) AND (passwod = PWD);

  if authed = 1 then
    err := 0;
  else
    err := 2;
  end if;
  
EXCEPTION
  when TOO_MANY_ROWS then
    err := 3;
  when OTHERS then
    err := 4;
END AUTH_TEACHER;

/

