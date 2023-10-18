project(composerDB)

set(SOURCES composer.cc database.cc)

add_executable(${PROJECT_NAME} user_interface.cc ${SOURCES})