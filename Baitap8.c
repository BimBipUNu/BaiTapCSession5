//Bội chung nhỏ nhất
#include<stdio.h>
int main()
{
    int a,b;
    int bcnn;
    printf("Nhập số nguyên dương thứ nhất: ");scanf("%d",&a);
    printf("Nhập số nguyên dương thứ hai: ");scanf("%d",&b);
    int bcll = a*b;
    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }else
        {
            b=b-a;
        }
    }
    printf("%d là bội chung nhỏ nhất của 2 số",bcll/a);
}