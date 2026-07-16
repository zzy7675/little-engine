#pragma once

#include <vector>
#include "vl_window.hpp"

namespace vl {
    class VLDevice {
        public:
            VLDevice() {
                
            }
        private:
            void createInstance();
            std::vector<const char*> getRequiredInstanceExtensions();
            void hasGlfwRequiredInstanceExtensions();
            VkInstance instance;
    };
}
