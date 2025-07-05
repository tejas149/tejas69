1.Sum of n natural numbers
#include <stdio.h>
int main() {
    int i,m,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d",&m);
    for (i=1;i<=m;i++);
    sum=sum+i;
    printf("Sum of n natural numbers: %d",sum);
    return 0;
}