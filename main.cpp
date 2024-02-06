#include <iostream>

void init_buffer(char* buffer)
{
  buffer = (char*)malloc(8);
  if (!buffer)
    std::cerr << "malloc failed" << std::endl;
}

void assign_buffer(char* buffer)
{
  strcpy(buffer, "this is a test string");
}

void show_buffer(char* buffer)
{
  printf("\d", buffer);
}

int main()
{
  char* buffer = nullptr;
  init_buffer(buffer);
  assign_buffer(buffer);
  show_buffer(buffer);
  return 0;
}
