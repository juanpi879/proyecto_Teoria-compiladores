cmake_minimum_required(VERSION 3.30)

project(prog_kids)

# Añadir soporte para ANTLR
set(ANTLR_EXECUTABLE "/usr/share/java/antlr-4.13.2-complete.jar")
# find_package(ANTLR REQUIRED)

# Directorios de cabeceras
include_directories(${ANTLR_INCLUDE_DIRS} /usr/include/antlr4-runtime)

# Encontrar LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

# Archivos fuente
file(GLOB SOURCES "*.cpp")

# Ejecutable
add_executable(${PROJECT_NAME} ${SOURCES})

# Enlazar bibliotecas necesarias
llvm_map_components_to_libnames(llvm_libs
  core
  executionengine
  object
  orcjit
  support
  targetparser
  native
)
target_link_libraries(${PROJECT_NAME} ${llvm_libs} antlr4-runtime ${ANTLR_LIBS})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
