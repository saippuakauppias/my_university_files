--------------------------------------------------------
--  DDL for View VIEW_COURSES
--------------------------------------------------------

  CREATE OR REPLACE FORCE VIEW "DEKANAT"."VIEW_COURSES" ("COURSE") AS 
  SELECT distinct course
FROM groups
ORDER BY course;
