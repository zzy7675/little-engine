#pragma once

#include "vl_window.hpp"
#include "vl_pipeline.hpp"
namespace vl {
    class App {
        public:
            App();
            ~App();
            void run();
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;
        private:
            VLWindow window{WIDTH, HEIGHT, "Hello Vulkan!"};
            VLPipeline pipeline{"shaders/easy_shader.vert.spv", "shaders/easy_shader.frag.spv"};
    };
}
