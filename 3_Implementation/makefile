# target_name : Dependencies
#<tab>Command

SRC = project_main.c\
src/new_Account.c\
src/existing_customer.c\
unity/unity.c\
src/dollar.c\
src/euro_test.c

INC = inc

c.exe : $(SRC) $(TEST_SRC)
	gcc $^ -I$(INC) -o $@

run: c.exe
	./c.exe

clean :
	del c.exe