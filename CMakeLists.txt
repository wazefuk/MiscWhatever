cmake_minimum_required(VERSION 4.0)
project(MiscWhatever CXX)

file(COPY ${CMAKE_SOURCE_DIR}/CMD/AAAAAA.wav DESTINATION ${CMAKE_BINARY_DIR})

set(SOURCE_FILES
    main.cpp
    placeholderfunc.cpp

    lib/General.cpp

    CMD/ItAdd.cpp
    CMD/RandomSongGen.cpp
    CMD/VocabExtract.cpp
    CMD/MysteryFunction.cpp
)

add_executable(MiscWhatever ${SOURCE_FILES})
target_link_libraries(MiscWhatever winmm)