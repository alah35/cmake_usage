add_executable(comp_sim main.cpp)

    target_include_directories(comp_sim PUBLIC ${MY_INCLUDE_DIR})

    add_library(my_lib ${MY_INCLUDE_DIR}/cpu.h cpu.cpp
            ${MY_INCLUDE_DIR}/gpu.h gpu.cpp
            ${MY_INCLUDE_DIR}/ram.h ram.cpp
            ${MY_INCLUDE_DIR}/kbd.h kbd.cpp)

    target_include_directories(my_lib PUBLIC ${MY_INCLUDE_DIR})

    target_link_libraries(comp_sim PRIVATE my_lib)
