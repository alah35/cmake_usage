add_executable(surg_sim main.cpp)

target_include_directories(surg_sim PUBLIC ${MY_INCLUDE_DIR})

add_library(my_lib ${MY_INCLUDE_DIR}/coordinates.h coordinates.cpp
        ${MY_INCLUDE_DIR}/instruments.h instruments.cpp)

target_include_directories(my_lib  PUBLIC ${MY_INCLUDE_DIR})

target_link_libraries(surg_sim PRIVATE my_lib)
