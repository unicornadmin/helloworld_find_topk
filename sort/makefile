##############################
## Usage: 
## 1) optional write text "objects.def" with definition like below:
## 	  main_OBJS:=main.o
## 2) run commands: 
##    make PROJECT_NAME init; make PROJECT_NAME; make PROJECT_NAME clean;
##

-include objects.def

PRJNAME:=$(firstword $(MAKECMDGOALS))
OBJROOT=obj
OBJDIR:=$(OBJROOT)/$(PRJNAME)
INC:=-I../lib/
LIB:=-L../lib -laux


ifndef $(PRJNAME)_OBJS   
$(PRJNAME)_OBJS:=$(OBJDIR)/$(PRJNAME).o
endif
PRJ_OBJS:=$($(PRJNAME)_OBJS)

###=========rules1:==================
ifeq ($(words $(MAKECMDGOALS)),1)

$(PRJNAME): $(PRJ_OBJS) 
	gcc -g -o $(OBJDIR)/$@.exe $^  $(LIB) -lstdc++ -lm

.SECONDEXPANSION:
$(PRJ_OBJS): $$(basename $$(@F)).cpp 
	gcc -c -o $@ $< -g $(INC) -std=c++11

###=========rules2:==================
else ifeq ($(words $(MAKECMDGOALS)),2)

.PHONY:$(PRJNAME) FORCE
$(PRJNAME):;@: 
clean: 
	rm $(PRJ_OBJS) $(PRJNAME).exe 
init:
	if [ ! -d $(OBJDIR) ];then mkdir -p $(OBJDIR); fi

###=========rules3:==================
else
   $(error =========):
endif 

$(lastword $(MAKEFILE_LIST)):;
