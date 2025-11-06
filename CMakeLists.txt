cmake_minimum_required(VERSION 3.14)
project(CMake_Project)

# CPM setup
set(CPM_DOWNLOAD_VERSION 0.38.8)
include(cmake/CPM.cmake)

# Dépendances externes
CPMAddPackage(
    NAME Catch2
    GITHUB_REPOSITORY catchorg/Catch2
    VERSION 3.6.0
    OPTIONS "CATCH_BUILD_TESTING OFF"
)

add_subdirectory(Vector)

add_executable(Executable main.cpp)
target_link_libraries(Executable PRIVATE Vector)

enable_testing()

# Création de l'exécutable
add_executable(Test tests.cpp)

# Liaison des bibliothèques
target_link_libraries(Test PRIVATE Catch2::Catch2WithMain)

include("cmake/Catch.cmake")
catch_discover_tests(Test)
