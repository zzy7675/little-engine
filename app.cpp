#include "app.hpp"


namespace vl {
    App::App() {}
    App::~App() {}
    void App::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}
