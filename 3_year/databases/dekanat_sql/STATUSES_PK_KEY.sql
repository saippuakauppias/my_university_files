--------------------------------------------------------
--  DDL for Trigger STATUSES_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."STATUSES_PK_KEY" before insert on "DEKANAT"."STATUSES"    for each row begin     if inserting then       if :NEW."ID_STATUS" is null then          select STATUSES_SEQ.nextval into :NEW."ID_STATUS" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."STATUSES_PK_KEY" ENABLE;
