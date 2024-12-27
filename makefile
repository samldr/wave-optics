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

# make
# make clean
# make all

# create target for making the build folder
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# make clean
clean:
	rm -rf $(BUILD_DIR)
