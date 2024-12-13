#include<stdio.h>
int main()
{
    float a,b,c,min,max;
    int ans;
    printf("MENU\n");
    printf("1. Nhập 3 số\n");
    printf("2. Tổng 3 số\n");
    printf("3. Trung bình cộng 3 số\n");
    printf("4. Số nhỏ nhất\n");
    printf("5. Số lớn nhất\n");
    printf("6. Thoát\n");
    printf("Lựa chọn của bạn: ");scanf("%d",&ans);
    while(ans != 1)
    {
        printf("Chưa có dữ liệu\n");
        printf("Lựa chọn của bạn: ");scanf("%d",&ans);
    }
    printf("Nhập số thứ nhất: ");scanf("%f",&a);
    printf("Nhập số thứ hai: ");scanf("%f",&b);
    printf("Nhập số thứ ba: ");scanf("%f",&c);
    while(ans != 6)
    {
        printf("Lựa chọn của bạn: ");scanf("%d",&ans);
        switch(ans)
        {
            case 1:
                printf("Nhập số thứ nhất: ");scanf("%f",&a);
                printf("Nhập số thứ hai: ");scanf("%f",&b);
                printf("Nhập số thứ ba: ");scanf("%f",&c);
                break;
            case 2:
                printf("Tổng 3 số là %.2f\n",a+b+c);
                break;
            case 3:
                printf("Trung bình cộng 3 số là %.2f\n",(a+b+c)/3.0);
                break;
            case 4:
                if(a<b && a<c)
                {
                    min = a;
                }else if(b<a && b<c)
                {
                    min = b;
                }else
                {
                    min = c;
                }
                printf("Số nhỏ nhất là %.2f\n",min);
                break;
            case 5:
                if(a>b && a>c)
                {
                    max = a;
                }else if(b>a && b>c)
                {
                    max = b;
                }else
                {
                    max = c;
                }
                printf("Số lớn nhất là %.2f\n",max);
                break;
            case 6:
                printf("Thoát chương trình");
                break;
            default:
                printf("Dữ liệu không hợp lệ\n");
        }
    }
}