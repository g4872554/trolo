set(SOURCE_FILES
        main.cpp
        SYS.h
        SYS.cpp
)

add_executable(trolo ${SOURCE_FILES})
target_link_libraries(trolo ${COMMON_LIBS})