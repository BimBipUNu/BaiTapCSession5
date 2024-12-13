/*Viết chương trình khai báo và gán giá trị cho một biến số nguyên cho trước,
yêu cầu người dùng nhập vào một số cho đến khi số được nhập trùng với số cho trước thì kết thúc chương trình.*/
#include<stdio.h>
int main()
{
    int qus = 8, ans;
    for ( ans =0 ; ans!=qus ;ans )
    {
        printf("Nhập một số nguyên: ");scanf("%d",&ans);
    }
}