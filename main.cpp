#include "app.hpp"

// std
#include <iostream>
#include <stdexcept>

using namespace vl;

int main() {
    App app{};

    try {
        app.run();
    } catch (std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
