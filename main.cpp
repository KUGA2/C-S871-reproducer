#include <string>

int main() {
   return 0;
}

std::string a()
{
   const char* cstring = "Hello World";
   std::string cppstring = std::string(cstring);
   return cppstring;
}

std::string b()
{
   const char* cstring = "Hello World";
   std::string cppstring = cstring;
   return cppstring;
}

