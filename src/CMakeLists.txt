set(SOURCE_FILES
	${SOURCE_FILES}
	${CMAKE_CURRENT_SOURCE_DIR}/boot.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/MainApplication.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/MainWindow.cpp
)

add_subdirectory(Widgets)
add_subdirectory(Windows)
add_subdirectory(Models)
add_subdirectory(util)


link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})
add_executable(boot ${SOURCE_FILES})
target_link_libraries(boot ${GTKMM_LIBRARIES})
