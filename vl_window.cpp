#include "vl_window.hpp"

namespace vl {
    VLWindow::VLWindow(int w, int h, std::string name) : width(w), height(h), windowName(name) {
        initWindow();
    }

    VLWindow::~VLWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void VLWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}
