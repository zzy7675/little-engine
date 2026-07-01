#pragma once

#include "vl_window.hpp"

namespace vl {
    class App {
        public:
            App();
            ~App();
            void run();
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;
        private:
            VLWindow window;
    };
}
