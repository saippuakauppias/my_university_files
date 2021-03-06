--------------------------------------------------------
--  DDL for Table STUDENTS
--------------------------------------------------------

  CREATE TABLE "DEKANAT"."STUDENTS" 
   (	"ID_STUDENT" NUMBER(7,0), 
	"LAST_NAME" VARCHAR2(50 BYTE), 
	"FIRST_NAME" VARCHAR2(50 BYTE), 
	"THIRD_NAME" VARCHAR2(50 BYTE), 
	"BIRTHDAY" DATE, 
	"EXPIRY_STATUS" DATE, 
	"ENTER_DATE" DATE, 
	"ID_STATUS" NUMBER(7,0), 
	"ID_GROUP" NUMBER(7,0)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
