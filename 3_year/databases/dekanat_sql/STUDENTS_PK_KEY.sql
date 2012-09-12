--------------------------------------------------------
--  DDL for Trigger STUDENTS_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."STUDENTS_PK_KEY" before insert on "DEKANAT"."STUDENTS"    for each row begin     if inserting then       if :NEW."ID_STUDENT" is null then          select STUDENTS_SEQ.nextval into :NEW."ID_STUDENT" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."STUDENTS_PK_KEY" ENABLE;
