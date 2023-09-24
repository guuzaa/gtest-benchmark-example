add_subdirectory(utils)

add_library(demo STATIC ${ALL_OBJECT_FILES})

set(demo_libs demo_utils)

find_package(Threads REQUIRED)

set(thirdparty_libs
        Threads::Threads
)

target_link_libraries(demo ${demo_libs} ${thirdparty_libs})

target_include_directories(demo PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEIR}>
)
