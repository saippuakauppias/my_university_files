--------------------------------------------------------
--  DDL for Function GET_GROUPNAME
--------------------------------------------------------

  CREATE OR REPLACE FUNCTION "DEKANAT"."GET_GROUPNAME" 
(
  NAME_GROUP IN VARCHAR2  
, COURSE IN NUMBER  
, SUBGROUP IN NUMBER  
) RETURN VARCHAR2 AS 
BEGIN
  RETURN name_group || '-' || to_char(course) || to_char(subgroup);
END GET_GROUPNAME;

/

