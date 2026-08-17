# Compiler and Flags
CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2
TARGET   := UNFOCUSED_AI_REFACTOR

# Source Files
SRCS     := UNFOCUSED_AI_REFACTOR.cpp
OBJS     := $(SRCS:.cpp=.o)

# Default Rule
all: $(TARGET)

# Link Binary
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile Source Files to Object Files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean Build Artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Run the Program
run: all
	./$(TARGET)

.PHONY: all clean run
