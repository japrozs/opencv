#!/bin/sh
echo "g++  -Wall -Wextra -g  -std=c++17 \`pkg-config --cflags opencv\` \`pkg-config --libs opencv\` $1 -o bin/$(basename $1 .cpp)"
g++  -Wall -Wextra -g -std=c++17 `pkg-config --cflags opencv` `pkg-config --libs opencv` $1 -o bin/$(basename $1 .cpp)
rm -rf bin/*.dSYM