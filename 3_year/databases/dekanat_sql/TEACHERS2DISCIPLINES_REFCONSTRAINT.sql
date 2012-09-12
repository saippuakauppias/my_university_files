--------------------------------------------------------
--  Ref Constraints for Table TEACHERS2DISCIPLINES
--------------------------------------------------------

  ALTER TABLE "DEKANAT"."TEACHERS2DISCIPLINES" ADD CONSTRAINT "FK_ASS_7" FOREIGN KEY ("TEACHERS_ID_TEACHER")
	  REFERENCES "DEKANAT"."TEACHERS" ("ID_TEACHER") ON DELETE CASCADE ENABLE;
