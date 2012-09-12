--------------------------------------------------------
--  Ref Constraints for Table DISCIPLINES
--------------------------------------------------------

  ALTER TABLE "DEKANAT"."DISCIPLINES" ADD CONSTRAINT "DISCNAMES2DISCIPLINES" FOREIGN KEY ("ID_DISCNAME")
	  REFERENCES "DEKANAT"."DISCNAMES" ("ID_DISCNAME") ON DELETE SET NULL ENABLE;
