/*Viết chương trình yêu cầu người dùng nhập vào một số nguyên dương từ 1 đến 10,
in ra bảng cửu chương tương ứng với số đã được nhập.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Nhập một số nguyên dương từ 1 đến 10: ");scanf("%d",&n);
    for (int i=1; i<=10;i++)
    {
        printf("%d x %d= %d\nn",n,i,n*i);
    }
}