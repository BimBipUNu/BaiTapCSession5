/*Viết chương trình yêu cầu người dùng nhập vào một số nguyên dương,
tính tổng tất cả các số từ 1 đến số được nhập và in kết quả ra màn hình.*/
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Nhập một số nguyên dương");scanf("%d",&n);
    for ( int i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Tổng tất cả các số từ 1 đến %d là: %d",n,sum);
}