--------------------------------------------------------
--  DDL for Function GET_FULLNAME
--------------------------------------------------------

  CREATE OR REPLACE FUNCTION "DEKANAT"."GET_FULLNAME" 
(
  LAST_NAME IN VARCHAR2  
, FIRST_NAME IN VARCHAR2  
, THIRD_NAME IN VARCHAR2  
) RETURN VARCHAR2 AS 
BEGIN
  RETURN LAST_NAME || ' ' || FIRST_NAME || ' ' || THIRD_NAME;
END GET_FULLNAME;

/

