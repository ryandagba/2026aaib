/// week09-6.cpp 重複 week09-5 做很多次 變成「泡泡排序法Bubble Sort」
#include <stdio.h>
int main()
{
    /// 陣列有10個數字
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 97, 99};

    for (int i=0; i<10; i++) printf("%d ", a[i]); /// 擠一行
    printf("\n"); /// 跳行

    for (int k=0; k<10-1; k++) { /// 只加這一行，確保掃描次數足夠
        for (int i=0; i<10-1; i++) { /// 小心，i < 10-1 的「-1」
            if ( a[i] < a[i+1] ) { /// 希望左大、右小，但現在「反過來」
                int temp = a[i];   /// 就交換
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        /// 每做完一次外層 k 迴圈，就印出來看目前的進度
        for (int i=0; i<10; i++) printf("%d ", a[i]);
        printf("\n");
    }
}
