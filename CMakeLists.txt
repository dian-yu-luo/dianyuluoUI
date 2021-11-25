cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(src sources)
aux_source_directory(utils utilsources)
aux_source_directory(test testsources)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

find_package(jsoncpp CONFIG REQUIRED)
link_libraries(jsoncpp_lib jsoncpp_object)

find_package(glad CONFIG REQUIRED)
link_libraries(glad::glad)

find_package(Catch2 CONFIG REQUIRED)
link_libraries(Catch2::Catch2)

find_package(imgui CONFIG REQUIRED)
link_libraries(imgui::imgui)

find_package(glfw3 CONFIG REQUIRED)
link_libraries(glfw)

find_package(Boost)

link_libraries(opengl32)

include_directories(
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/utils
)
include(CPack)

# -----------------------------------------------------------------------------------------------------------

add_executable(main ${sources} ${utilsources} main.cpp)
add_executable(testproject ${sources} ${utilsources} test/main.cpp)

