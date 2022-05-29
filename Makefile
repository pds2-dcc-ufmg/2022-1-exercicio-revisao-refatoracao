MAIN_SRCDIR = ./src
SECONDARY_SRCDIR = $(MAIN_SRCDIR)/objects
OBJDIR = ./build
INCDIR = ./include

CC = g++

EXEC = lab2_5
SRC = $(wildcard $(SECONDARY_SRCDIR)/*.cpp $(MAIN_SRCDIR)/*.cpp)
OBJ = $(addprefix $(OBJDIR)/,$(notdir $(SRC:.cpp=.o)))

CFLAGS = -I $(INCDIR) -Wall -pedantic -std=c++11

.PHONY : compile
compile: $(OBJ)

$(OBJDIR)/%.o: $(SECONDARY_SRCDIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

$(OBJDIR)/%.o: $(MAIN_SRCDIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY : link
link: compile
	@printf "\033[36mLinking build files:\033[0m\n"
	$(CC) -o $(EXEC) $(OBJDIR)/*.o

.PHONY : run
run:
	@printf "\033[36mRunning executable file:\033[0m\n"
	./$(EXEC)

.PHONY : clean
clean:
	@printf "\033[36mDeleting executable and build files:\033[0m\n"
	rm -f $(EXEC)
	rm -f $(EXEC).exe
	rm -f $(OBJDIR)/*.o