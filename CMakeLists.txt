cmake_minimum_required(VERSION 4.0)
project(MiscWhatever CXX)

# Resources
set(RESOURCES
    CMD/AAAAAA.wav
    .gitignore
)

foreach(file IN LISTS RESOURCES)
    configure_file(
        ${PROJECT_SOURCE_DIR}/${file}
        ${CMAKE_BINARY_DIR}/${file}
        COPYONLY
    )
endforeach()

# Source files
set(SOURCE_FILES

    # Library implementations
    lib/General.cpp

    # Main files
    main.cpp
    placeholderfunc.cpp

    # Commands
    CMD/ItAdd.cpp
    CMD/RandomSongGen.cpp
    CMD/VocabExtract.cpp
    CMD/MysteryFunction.cpp
    CMD/ShowTheGitignore.cpp
    CMD/CMDHistory.cpp
)

# Create the executables and link some libraries
add_executable(MiscWhatever ${SOURCE_FILES})
target_link_libraries(MiscWhatever winmm)