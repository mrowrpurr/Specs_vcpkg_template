cmake_minimum_required(VERSION 3.21)

project(MyTests)

# Create an executable target which will execute your specs when run
add_executable(
    ${PROJECT_NAME}
    main.cpp
    Basic.Test.cpp
    Snowhouse.Test.cpp
)

# C++17 is required (but requires adding the 'fmt' library if used)
# C++20 works out-of-the-box without any additional dependencies
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20) 

# Add dependency on 'specs'
find_package(specs CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE specs::specs)

# (Optional) add dependency on the 'snowhouse' assertion library and the specs adapter for it
#
# Snowhouse:
find_path(SNOWHOUSE_INCLUDE_DIRS "snowhouse/assert.h")
target_include_directories(${PROJECT_NAME} PRIVATE ${SNOWHOUSE_INCLUDE_DIRS})
# Specs adapter for Snowhouse:
find_package(specs_snowhouse CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE specs::specs_snowhouse)
