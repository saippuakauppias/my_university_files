--------------------------------------------------------
--  DDL for Trigger ID_DISCNAME_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."ID_DISCNAME_PK_KEY" before insert on "DEKANAT"."DISCNAMES"    for each row begin     if inserting then       if :NEW."ID_DISCNAME" is null then          select DISCNAMES_SEQ.nextval into :NEW."ID_DISCNAME" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."ID_DISCNAME_PK_KEY" ENABLE;
