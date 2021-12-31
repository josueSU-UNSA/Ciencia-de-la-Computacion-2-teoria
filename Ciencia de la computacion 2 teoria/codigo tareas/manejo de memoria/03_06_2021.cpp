#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a=1025;
    int *p;
    p=&a;
   
    char*pc;
    pc=(char*)p;

    printf("valor de p %d\n",*p);
    printf("direccion de p %d\n",p);
    printf("valor de pc %d\n",*pc);
    printf("direccion de pc %d\n",pc);
    
    printf("valor de p %d\n",*(p+1));
    printf("direccion de p %d\n",p+1);
    printf("valor de pc %d\n",*(pc+1));
    printf("direccion de pc %d\n",(pc+1));
   
    system("pause");
    return 0;

}