#include "FirstApp.hpp"

namespace MiniEngine
{
    void FirstApp::run(){
        while (!window.shouldClose())
            glfwPollEvents();
    }
    
} // namespace MiniEngine
