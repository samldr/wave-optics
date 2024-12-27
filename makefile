# naming
PRJ_NAME := $(shell basename $(CURDIR))
PRJ_DIR := $(CURDIR)

# flags
CPP_FLAGS_DEV := -std=c++11 -Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-unused-but-set-variable -Wno-unused-value -Wno-unused-local-typedefs -Wno-unused-private-field
CPP_FLAGS_BUILD := -std=c++11 -Wall -Wextra -Werror 

# paths
SRC_DIR := $(PRJ_DIR)/src
BUILD_DIR := $(PRJ_DIR)/build
INCLUDE_DIR := $(PRJ_DIR)/include

# library paths
LIB_EIGEN_PATH := /usr/local/lib/eigen

# build the main file that uses eigen
main: $(BUILD_DIR)/main.o
	g++ $(CPP_FLAGS_BUILD) -I$(INCLUDE_DIR) -I$(LIB_EIGEN_PATH) -o $(BUILD_DIR)/main $(BUILD_DIR)/main.o

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp
	g++ $(CPP_FLAGS_DEV) -I$(INCLUDE_DIR) -I$(LIB_EIGEN_PATH) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

# clean
clean:
	rm -f $(BUILD_DIR)/*.o
	rm -f $(BUILD_DIR)/main

# run
run: main
	$(BUILD_DIR)/main