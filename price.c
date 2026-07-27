#include <stdio.h>

int main() {  
    int price;
    printf("请输入金额: ");
    scanf("%d", &price);
    int change = 1000 - price;
    printf("找零金额为: %d\n", change);
    return 0;
}