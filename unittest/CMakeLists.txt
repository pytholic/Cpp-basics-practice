project(unittest)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} ${PROJECT_NAME}.cc)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::GTest GTest::Main)
