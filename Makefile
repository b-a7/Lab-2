########################################################################
####################### Makefile Template ##############################
########################################################################

# Compiler settings - Can be customized.
CC = g++
CXXFLAGS = -std=c++11 -Wall -I./include
LDFLAGS = 

# Makefile settings - Can be customized.
APPNAME = program
EXT = .cpp
SRCDIR = src
OBJDIR = obj
BINDIR = bin

############## Do not change anything from here downwards! #############
SRC = $(wildcard $(SRCDIR)/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
DEP = $(OBJ:.o=.d)

# UNIX-based OS variables & settings
RM = rm -f

########################################################################
####################### Targets beginning here #########################
########################################################################

all: $(BINDIR)/$(APPNAME)

# Builds the app
$(BINDIR)/$(APPNAME): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Building rule for .o files and its .c/.cpp in combination with all .h
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CXXFLAGS) -MMD -MP -MF $(OBJDIR)/$*.d -c $< -o $@

# Includes all .h files
-include $(DEP)

# Run the program
.PHONY: run
run: $(BINDIR)/$(APPNAME)
	./$(BINDIR)/$(APPNAME)

################### Cleaning rules ###################
# Cleans complete project
.PHONY: clean
clean:
	$(RM) $(OBJDIR)/*.o $(OBJDIR)/*.d $(BINDIR)/$(APPNAME)

# Cleans only all files with the extension .d
.PHONY: cleandep
cleandep:
	$(RM) $(OBJDIR)/*.d