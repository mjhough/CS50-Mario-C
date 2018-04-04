# CS50-Mario-C
A mario pyramid builder written in C for the Harvard CS50 course.

### Instructions to run:
1. Compile the code by running the following command: `clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow mario.c -lcrypt -lcs50 -lm -o mario`.
2. Run the compiled code by typing `./mario` asssuming you are in the same directory as the compiled file.
