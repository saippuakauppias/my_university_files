--------------------------------------------------------
--  DDL for Function GET_DISCNAME
--------------------------------------------------------

  CREATE OR REPLACE FUNCTION "DEKANAT"."GET_DISCNAME" 
(
  ids IN NUMBER  
) RETURN VARCHAR2 AS 
  dname varchar(100);
BEGIN
  SELECT discnames.DISC_NAME into dname FROM discnames WHERE discnames.id_discname = ids;
  RETURN dname;
END GET_DISCNAME;

/

