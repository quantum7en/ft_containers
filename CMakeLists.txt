cmake_minimum_required(VERSION 3.19)
project(ft_containers)

set(CMAKE_CXX_STANDARD 98)

#'-DFOR(X,Y,Z)=for(X;Y;Z){' '-DFOR=}

add_executable(ft_containers
        #ft_list.hpp
        #ft_list.cpp
        main.cpp ft_vector.hpp ft_map.hpp ft_stack.hpp ft_queue.hpp)