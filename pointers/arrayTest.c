#include<stdio.h>




int main () {

int mainArray[10];
int sum = 0;


for (int i = 0; i < 10; i++)
{
   mainArray[i]=i +1;
} 

for (int i = 0; i < 10; i++)
{
    sum+= mainArray[i];
    printf("%d\n", mainArray[i]);
}


return 0;
}