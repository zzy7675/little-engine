#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace vl {
    class VLWindow {
        public:
            VLWindow(int w, int h, std::string name);
            ~VLWindow();

            VLWindow(const GLFWwindow &) = delete;                  // copy constructor
            GLFWwindow &operator=(const GLFWwindow &) = delete;     // assign operator

            inline bool shouldClose() { return glfwWindowShouldClose(window); }
        private:
            const int width;
            const int height;
            std::string windowName;
            void initWindow();
            GLFWwindow* window;
    };
}
