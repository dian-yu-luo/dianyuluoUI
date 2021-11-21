cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(src sources)
aux_source_directory(utils utilsources)
aux_source_directory(test testsources)

add_executable(main ${sources} ${utilsources} main.cpp )


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

find_package(jsoncpp CONFIG REQUIRED)
target_link_libraries(main PRIVATE jsoncpp_lib jsoncpp_object)

find_package(glad CONFIG REQUIRED)
target_link_libraries(main PRIVATE glad::glad)

find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(main PRIVATE Catch2::Catch2)

find_package(imgui CONFIG REQUIRED)
target_link_libraries(main PRIVATE imgui::imgui)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(main PRIVATE glfw)

target_link_libraries(main  PRIVATE opengl32)

include_directories(
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/utils
)
include(CPack)

# -----------------------------------------------------------------------------------------------------------


add_executable(testproject ${sources} ${utilsources} test/main.cpp )

find_package(jsoncpp CONFIG REQUIRED)
target_link_libraries(testproject PRIVATE jsoncpp_lib jsoncpp_object)

find_package(glad CONFIG REQUIRED)
target_link_libraries(testproject PRIVATE glad::glad)

find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(testproject PRIVATE Catch2::Catch2)

find_package(imgui CONFIG REQUIRED)
target_link_libraries(testproject PRIVATE imgui::imgui)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(testproject PRIVATE glfw)

target_link_libraries(testproject  PRIVATE opengl32)