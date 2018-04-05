#include "MyThread.h"
#include <string.h>

void g()
{
    int i = 0;
    while(i>-1)
    {
        printf("In g(%d) :\n",i++);
        //fflush(stdout);
        //sleep(1);
    }
    return;
}

void f ()
{
    printf("In f\n");
    int i = 0;
    char a[100];
    strcat(a,"a");
    strcat(a,"a");
    strcat(a,"a");
    strcat(a,"a");
    printf("%s\n",a);
    while(i > -1)
    {
        printf("In f(%d) :\n",i++);
        //fflush(stdout);
        //sleep(1);
    }
    return;
}


/*
void k()
{
    int i = 0;
    while(1)
    {
        printf("In k(%d) :\n",i++);
        //fflush(stdout);
        sleep(1);
    }
}

void* fargs(int* a)
{
    *a = *a+5;
    
    return a;      
}

void* gargs(int* a)
{
    *a = *a -1;
    
    return a;
}*/

int main()
{
    printf("In Main:\n");
    int a=5, tid, tid2;
    tid = create(f);
    tid2 = create(g);
    printf("\nThread created with id = %d",tid);
    
    
    start();
    run(tid);run(tid2);    
}
