--------------------------------------------------------
--  DDL for Trigger PROFESSIONS_PK_KEY
--------------------------------------------------------

  CREATE OR REPLACE TRIGGER "DEKANAT"."PROFESSIONS_PK_KEY" before insert on "DEKANAT"."PROFESSIONS"    for each row begin     if inserting then       if :NEW."ID_PROFESSION" is null then          select PROFESSIONS_SEQ.nextval into :NEW."ID_PROFESSION" from dual;       end if;    end if; end;
/
ALTER TRIGGER "DEKANAT"."PROFESSIONS_PK_KEY" ENABLE;
