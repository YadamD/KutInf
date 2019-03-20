cmake_minimum_required(VERSION 3.8) # CXX_STANDARD 17

project(template LANGUAGES CXX)

if (MSVC)
  string(REGEX REPLACE "/W[0-9]" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
endif (MSVC)

add_executable(${PROJECT_NAME} Main.cpp)
add_executable(Test1_Add tests/test1_add.cpp)

target_include_directories(Test1_Add PRIVATE ${CMAKE_CURRENT_LIST_DIR})

include(CTest)
enable_testing()

add_test(NAME Test1_Add COMMAND Test1_Add)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17
                                                 CXX_STANDARD_REQUIRED ON
                                                 CXX_EXTENSIONS OFF)

target_compile_options(${PROJECT_NAME} PRIVATE $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wall -Wextra -pedantic>
                                               $<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive->)

                                
