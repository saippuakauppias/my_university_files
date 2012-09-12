--------------------------------------------------------
--  DDL for Trigger MARKS_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."MARKS_PK_KEY" before insert on "DEKANAT"."MARKS"    for each row begin     if inserting then       if :NEW."ID_MARK" is null then          select MARKS_SEQ.nextval into :NEW."ID_MARK" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."MARKS_PK_KEY" ENABLE;
