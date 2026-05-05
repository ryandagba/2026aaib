/// week10-2.cpp 另外一種排序法
/// 上週教Bubble Sort泡泡排序法, 慢!
/// 今天教 Selection Sort 選擇排序法, 快一點!
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for (int k=0; k<10; k++) printf("%d ", a[k]); /// 負責印出原始陣列
    printf("\n");

    for (int i=0; i<10; i++) { /// 左邊 i
        for (int j=i+1; j<10; j++) { /// 右邊 j (從 i+1 開始)
            if (a[i] > a[j]) { /// 如果大小順序不對 (左邊比右邊大)
                int temp = a[i]; /// 就進行交換
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int k=0; k<10; k++) printf("%d ", a[k]); /// 負責印出排序後的陣列
    printf("\n");
}
