#include <iostream>
#include <sys/utsname.h>
#include <cstring>

int main() {

struct utsname buffer;

if (uname(&buffer) != 0) {
     std::cerr << "Fehler bei uname(): " << strerror(errno) << std::endl;
      return 1;
}

std::cout << "Hostname: " << buffer.nodename << std::endl;
std::cout << "OS: " << buffer.sysname << std::endl;
std::cout << "Version: " << buffer.version << std::endl;
std::cout << "Release: " << buffer.release << std::endl;

 return 0;
}



