#pragma once
#include "Window.hpp"

namespace MiniEngine
{
    class FirstApp
    {
        private:
            /* data */
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;
            Window window{WIDTH, HEIGHT, "My first vulkan app"};
        public:
            void run();
    };
    
} // namespace MiniEngine
