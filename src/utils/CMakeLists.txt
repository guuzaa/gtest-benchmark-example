add_library(
        demo_utils
        OBJECT
        utils.cpp
)

set(ALL_OBJECT_FILES
        ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:demo_utils>
        PARENT_SCOPE)