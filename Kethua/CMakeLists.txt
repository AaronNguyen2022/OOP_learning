# Chỉ định phiên bản tối thiểu của CMake yêu cầu
cmake_minimum_required(VERSION 3.10)

# Tên của dự án
project(MyProject)

# Chỉ định phiên bản của C++ yêu cầu
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Tạo thư mục cho các tệp header    
include_directories(${PROJECT_SOURCE_DIR}/lib)

# Định nghĩa các tệp nguồn của dự án
set(SOURCES
    src/main.cpp
    src/NhanVien.cpp
    src/NVSanXuat.cpp
    src/NVVanPhong.cpp
    src/NVQuanLy.cpp
    src/CongTy.cpp
)

# Tạo tệp thực thi
add_executable(myprog ${SOURCES})
