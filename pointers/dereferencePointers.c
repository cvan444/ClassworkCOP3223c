#include<stdio.h>


int main () {

int x = 10, *ptr = &x;

*ptr = 4;

printf("%d\n",x);


return 0;
}