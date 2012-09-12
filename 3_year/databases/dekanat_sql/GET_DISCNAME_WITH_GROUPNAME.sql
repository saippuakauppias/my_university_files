--------------------------------------------------------
--  DDL for Function GET_DISCNAME_WITH_GROUPNAME
--------------------------------------------------------

  CREATE OR REPLACE FUNCTION "DEKANAT"."GET_DISCNAME_WITH_GROUPNAME" 
(
  ids IN NUMBER,
  idg IN varchar2
) RETURN VARCHAR2 AS 
  dname varchar(100);
  gname varchar(150);
BEGIN
  SELECT discnames.DISC_NAME into dname FROM discnames WHERE discnames.id_discname = ids;
  SELECT get_groupname(name_group, course, subgroup) into gname FROM groups WHERE groups.id_group = idg;
  RETURN dname  || ' (' || gname || ')';
END GET_DISCNAME_WITH_GROUPNAME;

/

