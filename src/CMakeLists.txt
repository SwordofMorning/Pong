SET(
    SRC_LIST
    display/display_win.cpp
    display/display.cpp
    main.cpp
)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR/bin})

ADD_EXECUTABLE(PongExe ${SRC_LIST})