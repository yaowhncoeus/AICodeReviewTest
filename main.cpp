#include <iostream>

void init_buffer(char* buffer)
{
  buffer = (char*)malloc(1024);
  if (!buffer)
    std::cerr << "malloc failed" << std::endl;
}

int main()
{
  char* buffer = nullptr;
  init_buffer(buffer);
  return 0;
}
