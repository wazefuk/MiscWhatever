cmake_minimum_required(VERSION 4.0)
project(MiscWhatever CXX)
file(COPY ${CMAKE_SOURCE_DIR}/Help.txt DESTINATION ${CMAKE_BINARY_DIR}) # This does absolutely nothing but it looks fancy and deleting it and recompiling makes no noticable changes so why both deleting it
set(SOURCE_FILES
    main.cpp
    text.cpp
    General.cpp

    CMD/ItAdd.cpp
    CMD/RandomSongGen.cpp
    CMD/VocabExtract.cpp
)
add_executable(MiscWhatever ${SOURCE_FILES})