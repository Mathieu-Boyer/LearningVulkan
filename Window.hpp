#pragma once
#include <GLFW/glfw3.h>
#include <string>
#define GLFW_INCLUDE_VULKAN

namespace MiniEngine {
    class Window
    {
        private:
            GLFWwindow *window;
            const int width;
            const int height;
            const std::string name;
            void initWindow();
        public:
            Window(const int w, const int h, const std::string n);
            Window(const Window&) = delete;
            Window &operator=(Window &) = delete;

            bool shouldClose() {return glfwWindowShouldClose(window);}
            ~Window();
        };
}

