project(04-organizing)

add_executable(${PROJECT_NAME} main.cpp
                               EBO.cpp VAO.cpp VBO.cpp
                               shaderClass.cpp)
## glad::glad  vs   GLEW::GLEW
target_link_libraries(${PROJECT_NAME} PRIVATE  glad::glad glfw)
