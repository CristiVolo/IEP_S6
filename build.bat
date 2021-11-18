cls
cd out
cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release ..\src
mingw32-make
IEP_S6.exe
cd ..
