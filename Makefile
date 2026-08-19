NAME := game

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

LDLIBS := lib/libraylib.a -lX11 -lm

SRC_DIR := src
SRC_FILE := main.cpp \
			engine.cpp \
			utils.cpp \
			screen.cpp
SRC := $(addprefix $(SRC_DIR)/,$(SRC_FILE))

OBJ_DIR := obj
OBJS := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(LDLIBS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re