#include <stdio.h>



int a = 10;
int b = 100;


int i,j;
int arr[2][3] = {{1,2,3},{4,5,6}};
//addr = &arr;

void myfucntion(int *param)
{
  for(i = 0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      param[i][j] = 100;
    }
  }
}


int main(void)
{

  printf("%d\n",arr[0][0]);

}
