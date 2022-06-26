#Directories
MAIN_DIR = ./src
OBJECTS_DIR = $(MAIN_DIR)/objects
BUILD_DIR = ./build
HEADERS_DIR = ./include

#Compiler
CC = g++

#Flags
CFLAGS = -I $(HEADERS_DIR) -Wall -pedantic -std=c++11

#Executable name
EXEC = vpl06_refactor

#Prepare output names (change .cpp to .o)
SRC = $(wildcard $(OBJECTS_DIR)/*.cpp $(MAIN_DIR)/*.cpp)
OBJ = $(addprefix $(BUILD_DIR)/,$(notdir $(SRC:.cpp=.o)))

#Compile from source
compile: $(OBJ)

$(BUILD_DIR)/%.o: $(OBJECTS_DIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/%.o: $(MAIN_DIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

#Make the executable file
link: compile
	$(CC) -o $(EXEC) $(BUILD_DIR)/*.o

#Make the debug file for gdb
debug: compile
	$(CC) -g $(BUILD_DIR)/*.o

#Run the executable
run:
	./$(EXEC)

#Do all of the above
all: link run

#Clean build and executable files
clean:
	rm -f $(EXEC)
	rm -f $(EXEC).exe
	rm -f $(BUILD_DIR)/*.o