//Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ, in ra tất cả các chữ số trong số đã nhập.
#include<stdio.h>
int main()
{
    int n;
    int ans =00;
    printf("Nhập một số nguyên bất kỳ: "); scanf("%d",&n);
    printf("Các chữ số trong số đã nhập là: ");
    //đảo ngược các chữ số n. vd n=345
    while(n!=0)
    {
        ans = ans*10 + n%10; // 0 = 0*10 +5 => ans =5 || 5 = 5*10+ 4 =>ans =54 ...
        n=n/10;
    }
    //In ra các các chữ số trong biến ans theo chiều ngược.
    while(ans!=0)
    {
        printf("%d ",ans%10);//ans =543 => In 3 4 55
        ans = ans/10;
    }
}