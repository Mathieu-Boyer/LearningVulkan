#include "Window.hpp"

namespace MiniEngine
{
        Window::Window(const int w, const int h, const std::string n) : width(w), height(h), name(n){
            initWindow();
            window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
        };
        void Window::initWindow(){
            glfwInit();
            glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
            glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        }
        Window::~Window(){
            glfwDestroyWindow(window);
            glfwTerminate();
        };
} 
