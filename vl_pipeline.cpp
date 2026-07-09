#include "vl_pipeline.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace vl {

    std::vector<char> VLPipeline::readFile(const std::string& filepath) {
        std::ifstream f(filepath, std::ios::ate | std::ios::binary);

        if (!f.is_open()) {
            throw std::runtime_error("failed to open + " + filepath);
        }

        size_t fileSize = static_cast<size_t>(f.tellg());
        std::vector<char> buffer(fileSize);

        f.seekg(0);
        f.read(buffer.data(), fileSize);
        f.close();
        return buffer;
    }
    void VLPipeline::createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath) {
        auto vertCode = readFile(vertFilepath);
        auto fragCode = readFile(fragFilepath);

        std::cout << "vertex shader code size: " << vertCode.size() << std::endl;
        std::cout << "fragment shader code size: " << fragCode.size() << std::endl;
    }
    VLPipeline::VLPipeline(const std::string& vertFilepath, const std::string& fragFilePath) {
        createGraphicsPipeline(vertFilepath, fragFilePath);
    }
}
