# Compiler
CXX := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -O2

# Libraries
LIBS := $(shell pkg-config --libs glfw3) -lvulkan -ldl -lpthread
CXXFLAGS += $(shell pkg-config --cflags glfw3)

# Files
SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
DEPS := $(OBJS:.o=.d)

# Output
TARGET := app

# Default rule
all: $(TARGET)

# Link
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LIBS)

# Compile + generate dependency files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Include header dependencies
-include $(DEPS)

# Clean
clean:
	rm -f $(OBJS) $(DEPS) $(TARGET)

.PHONY: all clean
