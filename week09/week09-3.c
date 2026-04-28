#include <stdio.h>
int main()
{
    int a[10];
    // 輸入 10 個數字
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    // here!!! You will learn today
    // 泡沫排序法核心邏輯
    for (int k=0; k<10; k++) {
        for (int i=0; i<10-1; i++) {
            if (a[i] < a[i+1]) { // 如果左邊比右邊小，就交換位置
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    // here!!! You will learn today
    // 輸出排序後的結果
    for (int i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
}
