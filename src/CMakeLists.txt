cmake_minimum_required(VERSION 3.30)

project(prog_kids)

include_directories(/usr/include/antlr4-runtime)

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

# Ajusta la ruta si tus archivos .cpp están en 'src/'
file(GLOB SOURCES "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

llvm_map_components_to_libnames(llvm_libs
  core
  executionengine
  object
  orcjit
  support
  targetparser
  native
)

target_link_libraries(${PROJECT_NAME} ${llvm_libs} antlr4-runtime)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
