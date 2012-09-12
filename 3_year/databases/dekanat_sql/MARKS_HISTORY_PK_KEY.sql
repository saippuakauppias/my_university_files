--------------------------------------------------------
--  DDL for Trigger MARKS_HISTORY_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."MARKS_HISTORY_PK_KEY" before insert on "DEKANAT"."MARKS_HISTORY"    for each row begin     if inserting then       if :NEW."ID_MARK" is null then          select MARKS_HISTORY_SEQ.nextval into :NEW."ID_MARK" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."MARKS_HISTORY_PK_KEY" ENABLE;
