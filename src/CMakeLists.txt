set(SOURCE_FILES
        main.cpp
        SYS.h
        SYS.cpp
        my_app.h
        my_app.cpp
)

add_executable(trolo ${SOURCE_FILES})
target_link_libraries(trolo ${COMMON_LIBS})