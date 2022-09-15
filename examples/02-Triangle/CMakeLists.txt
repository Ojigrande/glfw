project(02-triangle)

add_executable(${PROJECT_NAME} main.cpp)
## glad::glad  vs   GLEW::GLEW
target_link_libraries(${PROJECT_NAME} PRIVATE  glad::glad glfw)
