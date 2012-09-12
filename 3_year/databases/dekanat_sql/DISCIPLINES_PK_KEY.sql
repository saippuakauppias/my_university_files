--------------------------------------------------------
--  DDL for Trigger DISCIPLINES_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."DISCIPLINES_PK_KEY" before insert on "DEKANAT"."DISCIPLINES"    for each row begin     if inserting then       if :NEW."ID_DISCIPLINE" is null then          select DISCIPLINES_SEQ.nextval into :NEW."ID_DISCIPLINE" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."DISCIPLINES_PK_KEY" ENABLE;
