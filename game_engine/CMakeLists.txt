file(GLOB_RECURSE SRC "src/*.cpp" "include/*.h")

add_library(game_engine ${SRC})

target_include_directories(game_engine PRIVATE include)