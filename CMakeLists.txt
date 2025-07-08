cmake_minimum_required(VERSION 4.0)
project(MiscWhatever CXX)
file(COPY ${CMAKE_SOURCE_DIR}/Help.txt DESTINATION ${CMAKE_BINARY_DIR})
set(SOURCE_FILES
    main.cpp
    General.cpp
    VocabExtract.cpp
    RandomSongGen.cpp
    text.cpp
    ItAdd.cpp
)
add_executable(MiscWhatever ${SOURCE_FILES})