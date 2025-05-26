#include <stdio.h>
int main()
{
  char my_name[64];

  printf("What your name>");
  scanf("%s",my_name);

  printf("Hello,%s!\n",my_name);

  return 0;
}
