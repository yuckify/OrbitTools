# Author
This is Michael F. Henry's OrbitTools library. See 
http://www.zeptomoby.com/satellites/ for details on the library.

# License
The original library is free for non-commercial use under a copyleft license.
See the website above for more details.

# Fork
I uploaded this to github as a fork of the original library to include
changes such as porting to linux.

# Build
## Linux

mkdir build; cd build<br/>
cmake .. -DCMAKE_BUILD_TYPE=Release<br/>
make -j<br/>
sudo make install<br/>
echo "/usr/local/lib" | sudo tee /etc/ld.so.conf.d/usrlocal.conf<br/>
sudo ldconfig<br/>

