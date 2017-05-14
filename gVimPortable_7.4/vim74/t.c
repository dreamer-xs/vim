#include<stdio.h>

void dec2bin(int num)
{
    if(num<2)
        return ;

    dec2bin(num/2);
    printf("%d",num%2);
}



int main()
{
    dec2bin(18);

    printf("\n");
    return 0;
}
