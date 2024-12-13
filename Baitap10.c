//Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ, in ra tất cả các chữ số trong số đã nhập.
#include<stdio.h>
int main()
{
    int n;
    int ans =00;
    printf("Nhập một số nguyên bất kỳ: "); scanf("%d",&n);
    printf("Các chữ số trong số đã nhập là: ");
    while(n!=0)
    {
        ans = ans*10 + n%10;
        n=n/10;
    }
    while(ans!=0)
    {
        printf("%d ",ans%10);
        ans = ans/10;
    }
}