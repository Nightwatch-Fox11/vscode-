#include <bits/stdc++.h>
/*冒泡排序算法的原理如下： 
比较相邻的元素。如果第一个比第二个大，就交换他们两个。 
对每一对相邻元素做同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。 
针对所有的元素重复以上的步骤，除了最后一个。
持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。*/

/* 冒泡排序 */
/* 1. 从当前元素起，向后依次比较每一对相邻元素，若逆序则交换 */
/* 2. 对所有元素均重复以上步骤，直至最后一个元素 */
/* int arr[]: 排序目标数组; int len: 元素个数 */
void bubbleSort(int arr[], int len)
{
    int temp, i, j;
    for (i = 0; i < len - 1; i++) /* 外循环为排序趟数，len个数进行len-1趟 */
        for (j = 0; j < len - 1 - i; j++)
        { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
            if (arr[j] > arr[j + 1])
            { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}
//优化版本
// 假设数组的大小是n+1，冒泡排序从数组下标1开始
void bubble_sort(int *a, int n)
{
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] > a[i + 1])
            {
                flag = true;
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
}
