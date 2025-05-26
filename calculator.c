#include <stdio.h>
int main()
{
  int operation,x,y;
  double z;

  printf("使いたい四則を選べ、\n+>1\n->2\n*>3\n/>4\n");
  scanf("%d",&operation);

  printf("x>");
  scanf("%d",&x);

  printf("y>");
  scanf("%d",&y);

  z = x/y;
  
  if(1<=operation&&operation<=4) {
    if(operation == 1) {
      printf("%d\n",x+y);
    }
    if(operation == 2) {
      printf("%d\n",x-y);
    }
    if(operation == 3) {
      printf("%d\n",x*y);
    }
    if(operation == 4 && y != 0) {
      printf("%f\n",z);
    } else if(operation == 4 && y == 0) {
      printf("0で割ることはできません\n");
    }
  } else {
    printf("正しい演算を選択してください\n");
  }
  
  return 0;
}

    
    
