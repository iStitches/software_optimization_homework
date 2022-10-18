target=app
INCLUDE_FILE=./include/
MAIN_OBJ=obj/main.o
HANDLE1_OBJ=obj/handle1.o
HANDLE2_OBJ=obj/handle2.o
HANDLE3_OBJ=obj/handle3.o
HANDLE4_OBJ=obj/handle4.o

#方案一:
$(target): $(MAIN_OBJ) $(HANDLE1_OBJ)
	$(CXX) -g $(MAIN_OBJ) $(HANDLE1_OBJ) -o $(target)
$(MAIN_OBJ):
	$(CXX) -c src/main.cpp -g -I $(INCLUDE_FILE) -o $(MAIN_OBJ)
$(HANDLE1_OBJ):
	$(CXX) -c src/handle1.cpp -g -I $(INCLUDE_FILE) -o $(HANDLE1_OBJ)
#方案二:


#方案三:


#方案四:

.PHONY:clean
clean:
	rm obj/*.o -f