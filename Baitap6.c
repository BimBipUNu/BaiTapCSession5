#include<stdio.h>
int main()
{
    float a,b;
    int ans;
    printf("Nhập số thứ nhất: ");scanf("%f",&a);
    printf("Nhập số thứ hai: ");scanf("%f",&b);
    printf("CALCULATOR\n");
    printf("1. Tổng 2 số\n");
    printf("2. Hiệu 2 số\n");
    printf("3. Tích 2 số\n");
    printf("4. Thương 2 số\n");
    printf("5. Thoát\n");
    printf("Lựa chọn của bạn: ");scanf("%d",&ans);
    for(ans ; ans != 5 ; ans)
    {
        switch(ans)
        {
            case 1:
                printf("1. Tổng 2 số là: %.2f\n",a+b);
                printf("Lựa chọn của bạn: ");scanf("%d",&ans);
                break;
            case 2:
                printf("2. Hiệu 2 số là: %.2f\n",a-b);
                printf("Lựa chọn của bạn: ");scanf("%d",&ans);
                break;
            case 3:
                printf("3. Tích 2 số là: %.2f\n",a*b);
                printf("Lựa chọn của bạn: ");scanf("%d",&ans);
                break;
            case 4:
                printf("4. Thương 2 cố là: %.2f\n",a/b);
                printf("Lựa chọn của bạn: ");scanf("%d",&ans);
                break;
            default:
                printf("Dữ liệu không hợp lệ");
                ans=5;
        }
    }
    if(ans ==5)
    {
        printf("Thoát chương trình");
    }
}