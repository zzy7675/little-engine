#include "app.hpp"


namespace vl {
    App::App(): window( WIDTH, HEIGHT, "Hello Vulkan!") {}
    App::~App() {}
    void App::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}
