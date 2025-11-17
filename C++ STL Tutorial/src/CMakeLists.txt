file(GLOB SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*/*/*.cpp"
)
add_executable(Cpp-STL ${SOURCES})

# add_executable(Cpp-STL main.cpp

#     sort/stl_sort.cpp
#     sort/bubble_sort.cpp
#     sort/counting_sort.cpp
#     sort/remove_duplicates_in_vector.cpp
#     sort/kth_largest_element_in_array.cpp
#     sort/find_min_diff_in_pair.cpp

#     utils/utils.cpp)

target_include_directories(Cpp-STL PUBLIC ${PROJECT_SOURCE_DIR}/include)
