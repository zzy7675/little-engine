## 1. 项目说明

一个小型的3D引擎

## 2. 项目环境设置

该项目在Windows上完成，所以基于Windows环境搭建项目环境

### 2.0 安装`vcpkg`

vcpkg用于项目工具管理

```
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg; .\bootstrap-vcpkg.bat
```

### 2.1 设置`Vulkan SDK`

- [安装Vulkan SDK](https://vulkan.lunarg.com/)
- 将安装的Vulkan SDK路径下的Bin文件夹路径添加到系统环境变量中

### 2.1 设置`VCPKG_ROOT`

在系统环境变量中设置环境变量`VCPKG_ROOT`,路径是安装的`vcpkg`路径。

### 2.2 设置`CMakeUserPresets.json`

在项目根目录下添加`CMakeUserPresets.json`, `VCPKG_ROOT`后面写你安装的`vcpkg`路径
```json
{
    "version": 2,
    "configurePresets": [
        {
            "name": "default",
            "inherits": "vcpkg",
            "environment": {
                "VCPKG_ROOT": "你的vcpkg路径"
            }
        }
    ]
}
```

### 2.3 编译着色器

根目录下运行:
```
.\compile_shader.bat
```

## 3. 项目运行

根目录下运行：
```
cmake --preset=default
cmake --build build
.\build\vl-engine.exe
```




