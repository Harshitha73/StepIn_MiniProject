PROJECT_NAME = project_main

SRC = src\BubbleSort.c\
src\Swap.c\
src\Display.c\
src\InsertionSort.c\
src\SelectionSort.c\
src\QuickSort.c\
src\MergeSort.c

BUILD = build

#INC=inc
UNI=unity/unity.c

INC	= inc\
-Iunity\


INCLUDE_LIBS = -lcunit

TEST_SRC = test/test_sorting.c\


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

.PHONY: run clean test doc 


$(PROJECT_NAME).exe : $(SRC)
	gcc -I $(INC) $(PROJECT_NAME).c $(SRC)  -o $(PROJECT_NAME).exe

run: $(PROJECT_NAME).exe
	$(PROJECT_NAME).exe

test: $(SRC) $(TEST)
	gcc -I $(INC) $(UNI) $(SRC) $(TEST_SRC) -o test\test_sorting.exe
	./test\test_sorting.exe

test1:$(PROJECT_NAME).exe
	TEST_OUTPUT

run1:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out
memcheck:
	valgrind ./$(PROJECT_NAME).exe
	
coverage: $(SRC) 
	gcc -fprofile-arcs -ftest-coverage $< -o test_sorting.exe
	./$(PROJECT_NAME).out
	gcov -a $(SRC)

doc:
	make -C ./documentation

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

$(BUILD):
	mkdir build