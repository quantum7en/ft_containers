cmake_minimum_required(VERSION 3.19)
project(ft_containers)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
#'-DFOR(X,Y,Z)=for(X;Y;Z){' '-DFOR=}

add_executable(ft_containers
       # ft_list.hpp


        # main.cpp

        # ft_vector.hpp

        # ft_map.hpp

        #test QUEUE
        # ft_queue.hpp
        # test_queue.cpp
        # *********

        #test STACK
        ft_stack.hpp
        test_stack.cpp
        # *********

        ft_reverse_iterator.hpp

        #enable if
        enable_if.hpp)