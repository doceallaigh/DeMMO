SET(
TARGET_TPP
# Template files here
)

SET(
TARGET_HPP
# Header files here
)

SET(
TARGET_CPP
# Source files here
"Source/Main.cpp"
)

add_executable(Graphics ${TARGET_TPP} ${TARGET_HPP} ${TARGET_CPP})