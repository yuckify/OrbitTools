# Author
This is Michael F. Henry's OrbitTools library. See 
http://www.zeptomoby.com/satellites/ for details on the library.

# Fork
I uploaded this to github as a fork of the original library to include
changes such as porting to linux.

# Build
## Linux
cd OrbitTools
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j
sudo make install
echo "/usr/local/lib" | sudo tee /etc/ld.so.conf.d/usrlocal.conf
sudo ldconfig

