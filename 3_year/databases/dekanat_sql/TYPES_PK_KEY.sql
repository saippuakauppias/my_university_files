--------------------------------------------------------
--  DDL for Trigger TYPES_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."TYPES_PK_KEY" before insert on "DEKANAT"."TYPES"    for each row begin     if inserting then       if :NEW."ID_TYPE" is null then          select TYPES_SEQ.nextval into :NEW."ID_TYPE" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."TYPES_PK_KEY" ENABLE;
