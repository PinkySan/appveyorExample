mkdir build
cd build
cmake .. -G "Visual Studio 15 2017 Win64" -DCMAKE_INSTALL_PREFIX="../install"
cmake --build . --target INSTALL --config %configuration%