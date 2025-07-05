17.out put using void.C
#include <stdio.h>
void myfunction(char name[]){
    printf("hello %s\n",name);
}
int main (){
    myfunction("bmw");
    myfunction("shankar\nshaq");
    return 0;
}