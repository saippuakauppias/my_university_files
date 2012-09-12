--------------------------------------------------------
--  DDL for Trigger MARKS_HISTORY_LOG
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."MARKS_HISTORY_LOG" 
AFTER UPDATE ON MARKS 
FOR EACH ROW 
  BEGIN
    INSERT INTO marks_history(id_mark, value_new_mark, value_old_mark, date_mark, id_student, id_new_teacher, id_old_teacher, id_discipline)
      VALUES(null, :new.value_mark, :old.value_mark, :new.date_mark, :old.id_student, :new.id_teacher, :old.id_teacher, :old.id_discipline);
  END;
/
ALTER TRIGGER "DEKANAT"."MARKS_HISTORY_LOG" ENABLE;
