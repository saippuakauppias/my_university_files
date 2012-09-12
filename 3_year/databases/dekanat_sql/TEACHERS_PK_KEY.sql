--------------------------------------------------------
--  DDL for Trigger TEACHERS_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."TEACHERS_PK_KEY" before insert on "DEKANAT"."TEACHERS"    for each row begin     if inserting then       if :NEW."ID_TEACHER" is null then          select TEACHERS_SEQ.nextval into :NEW."ID_TEACHER" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."TEACHERS_PK_KEY" ENABLE;
