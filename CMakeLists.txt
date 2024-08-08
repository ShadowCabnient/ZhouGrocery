cmake_minimum_required(VERSION 3.27)
project(Practice)


# 设置OpenCV的路径
set(OpenCV_DIR D:/opencv/opencv/build/x64/vc16/lib)

# 查找OpenCV库
find_package(OpenCV REQUIRED)

# 添加OpenCV头文件路径
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加你的源代码文件
add_executable(Practice main.cpp)

# 链接OpenCV库
target_link_libraries(Practice ${OpenCV_LIBS})

set(CMAKE_CXX_STANDARD 14)
