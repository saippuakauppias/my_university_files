--------------------------------------------------------
--  DDL for Trigger GROUPS_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."GROUPS_PK_KEY" before insert on "DEKANAT"."GROUPS"    for each row begin     if inserting then       if :NEW."ID_GROUP" is null then          select GROUPS_SEQ.nextval into :NEW."ID_GROUP" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."GROUPS_PK_KEY" ENABLE;
