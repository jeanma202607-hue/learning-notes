#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name[20];
    int age;// 嫌疑人年龄  
    float skill; // 嫌疑人战斗力，保留小数点

    //第一次审讯
    printf ("报上你的名字:");
    scanf("%[^\n]%*c", name);

    printf ("还有你的年龄:");
    scanf ("%d", &age);

    printf ("以及你的战斗力是多少：");
    scanf ("%f", &skill);

    // 宣读审讯结果
    printf("\n--- 档案已建立 ---\n");
    printf ("你是%s, 今年%d岁, 战斗力为%.2f\n", name, age,skill);

    return 0;
}