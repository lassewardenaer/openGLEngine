#! /bin/sh

rm -rf ./out;
cmake -S . -B out/debug-build -DCMAKE_BUILD_TYPE=Debug;
cmake --build out/debug-build;