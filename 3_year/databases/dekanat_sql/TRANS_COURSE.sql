--------------------------------------------------------
--  DDL for Procedure TRANS_COURSE
--------------------------------------------------------
set define off;

  CREATE OR REPLACE PROCEDURE "DEKANAT"."TRANS_COURSE" 
(
  IDG IN NUMBER  
, ERR OUT NUMBER  
) AS 
trans_on BOOLEAN;

cursor stud is
  SELECT 
    s.id_student, g.course 
  FROM 
    students s
  JOIN
    groups g
  ON
    g.id_group = s.id_group
  WHERE 
    (s.id_group = idg) AND (s.id_status = 1) AND (((sysdate-s.expiry_status)/30) > 8);

cursor disc is
  SELECT 
    m.value_mark, d2.id_type
  FROM 
    marks m
  JOIN
    disciplines d2
  ON
    d2.id_discipline = m.id_discipline
  WHERE (m.id_discipline in 
    (
      SELECT
        d.id_discipline
      FROM
        disciplines d
      WHERE
        d.id_group = idg
    ));
BEGIN
  err := 0;

  FOR std IN stud LOOP
    trans_on := TRUE;
    
    FOR dsc IN disc LOOP
      IF dsc.id_type = 1 AND dsc.value_mark <= 2 THEN
        trans_on := FALSE;
      END IF;
      IF dsc.id_type = 2 AND dsc.value_mark = 0 THEN
        trans_on := FALSE;
      END IF;
      IF dsc.id_type = 3 AND dsc.value_mark <= 2 THEN
        trans_on := FALSE;
      END IF;
      
    END LOOP;
    
    IF trans_on = TRUE THEN
      IF std.course = 5 THEN
        UPDATE 
          students
        SET
          id_status = 4,
          expiry_status = to_date(sysdate, 'DD-MON-RR')
        WHERE
          id_student = std.id_student;
      END IF;
    END IF;
      
  END LOOP;
  
END TRANS_COURSE;

/

