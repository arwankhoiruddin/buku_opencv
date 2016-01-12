rm -rf CMake*
rm cmake*
rm Make*

echo "cmake_minimum_required(VERSION 2.8)
project( $1 )
find_package( OpenCV REQUIRED )
add_executable( $1 $1.cpp )
target_link_libraries( $1 \${OpenCV_LIBS} )" > ./CMakeLists.txt

cmake .
make

./$1
