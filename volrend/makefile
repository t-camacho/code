INCLUDE   = ./include
SRC       = ./source
BUILD     = ./build
OBJ_DIR   = $(BUILD)/objects
APP_DIR   = $(BUILD)/apps
APPS      = ./apps

TARGET_S  = $(APP_DIR)/sequential

FLAGS     = -O3 -Wall

all: libed apps

libed:                     \
	build                  \
	$(OBJ_DIR)/util.o

apps:                      \
	$(TARGET_S)

build:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(APP_DIR)

$(OBJ_DIR)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	g++ -c $< -I $(INCLUDE) $(FLAGS) -o $@

$(APP_DIR)/%: $(APPS)/%.cpp
	g++ -g $< $(OBJ_DIR)/*.o -I $(INCLUDE) $(FLAGS) -o $@

clean:
	rm -rf $(BUILD)