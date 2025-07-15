cmake_minimum_required(VERSION 4.0)
project(MiscWhatever CXX)
set(SOURCE_FILES
    main.cpp
    placeholderfunc.cpp
    General.cpp

    CMD/ItAdd.cpp
    CMD/RandomSongGen.cpp
    CMD/VocabExtract.cpp
)
add_executable(MiscWhatever ${SOURCE_FILES})