#-----------------------------------------------------------------------------#
#			PROJECT SPECIFICS
#-----------------------------------------------------------------------------#
# Project name and source files
NAME   := blinker

SRC    := scheduler.c \
	  blinker.c \
	  linux_timer.c \
	  main.c \

INC    := ../../bitloom-core/include \
	  ../../bitloom-core/include/hal \
	  config \
	  src \


#-----------------------------------------------------------------------------#
#			MAKEFILE CORE
#-----------------------------------------------------------------------------#
.PHONY: clean all debug
CC	= gcc

INC_P   = $(addprefix $(ROOT), $(INC))
INC_L   = $(foreach d, $(INC_P), -I$(d))
INC_AL  = $(foreach d, $(INC_A), -I$(d))
INC_U	= $(foreach d, $(UNITY_I), -I$(d))
OBJ     = $(SRC:.c=.o) $(UNITY_S:.c=.o)

CFLAGS  := -Wall -g3 -I. $(INC_L) $(INC_AL) $(INC_U)
LDFLAGS :=

all: 	$(NAME)

VPATH = ../../bitloom-core/src/scheduler \
	../linux_hal \
	src \

$(NAME) : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

#-----------------------------------------------------------------------------#
#			CLEAN
#-----------------------------------------------------------------------------#
clean:
	rm -rf $(OBJ)
	rm -f $(NAME)


#-----------------------------------------------------------------------------#
#			DEBUG
#-----------------------------------------------------------------------------#
debug:
	@echo "SRC_P   : " $(SRC_P)
	@echo "INC_P   : " $(INC_P)
	@echo "INC_L   : " $(INC_L)
	@echo "INC_AL  : " $(INC_AL)
	@echo "INC_U   : " $(INC_U)
	@echo "OBJ     : " $(OBJ)
	@echo "OBJ_U   : " $(OBJ_U)
	@echo "CFLAGS  : " $(CFLAGS)
	@echo "LDFLAGS : " $(LDFLAGS)
	@echo "VPATH   : " $(VPATH)
	@echo "CURDIR  : " $(CURDIR)
