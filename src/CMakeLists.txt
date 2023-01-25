SET(
    SRC_LIST
    display/display_win.cpp
    display/display.cpp
    actor/actor.cpp
    actor/paddle.cpp
    actor/ball.cpp
    interaction/input.cpp
    main.cpp
)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR/bin})

ADD_EXECUTABLE(PongExe ${SRC_LIST})