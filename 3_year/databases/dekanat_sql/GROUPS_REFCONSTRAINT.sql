--------------------------------------------------------
--  Ref Constraints for Table GROUPS
--------------------------------------------------------

  ALTER TABLE "DEKANAT"."GROUPS" ADD CONSTRAINT "PROFESSIONS2GROUPS" FOREIGN KEY ("ID_PROFESSION")
	  REFERENCES "DEKANAT"."PROFESSIONS" ("ID_PROFESSION") ON DELETE SET NULL ENABLE;
