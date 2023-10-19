project(classes)

# Get a list of all source files in the current directory
file(GLOB SOURCES *.cc)

# Create an executable target for each source file
foreach(SOURCE ${SOURCES})
    get_filename_component(TARGET_NAME ${SOURCE} NAME_WE)
    add_executable(${TARGET_NAME} ${SOURCE})
endforeach()

add_subdirectory(./composer-database)
add_subdirectory(./IntList)