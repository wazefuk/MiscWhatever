cmake_minimum_required(VERSION 4.0)
project(MiscWhatever CXX)

# Resources
file(COPY ${CMAKE_SOURCE_DIR}/CMD/AAAAAA.wav DESTINATION ${CMAKE_BINARY_DIR})
file(COPY ${CMAKE_SOURCE_DIR}/.gitignore DESTINATION ${CMAKE_BINARY_DIR})

# Source fles
set(SOURCE_FILES

    # Main files
    main.cpp
    placeholderfunc.cpp

    # Library implementation
    lib/General.cpp

    # Commands
    CMD/ItAdd.cpp
    CMD/RandomSongGen.cpp
    CMD/VocabExtract.cpp
    CMD/MysteryFunction.cpp
    CMD/ShowTheGitignore.cpp
)

# Create the executables and link some libraries
add_executable(MiscWhatever ${SOURCE_FILES})
target_link_libraries(MiscWhatever winmm)