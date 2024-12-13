/*Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên dương bất kỳ,
viết chương trình tìm ước chung lớn nhất của 2 số đó và in kết quả ra màn hình.*/
#include<stdio.h>
int main()
{
    int a,b,ucll;
    printf("Nhập số nguyên dương thứ nhất: ");scanf("%d",&a);
    printf("Nhập số nguyên dương thứ hai: ");scanf("%d",&b);
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
    printf("%d là ước chung lớn nhất",a);
}