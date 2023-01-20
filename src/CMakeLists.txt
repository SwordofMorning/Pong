SET(
    SRC_LIST
    win_graphic/console.cpp
    main.cpp
)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR/bin})

ADD_EXECUTABLE(PongExe ${SRC_LIST})