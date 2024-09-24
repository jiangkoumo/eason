//数组练习2：二分查找
//二分查找前提数组有序
#include <stdio.h>

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 0;
    scanf("%d", &k);//输入要查找的数
    int sz = sizeof(arr) / sizeof(arr[0]); //用数组总大小除以数组每个元素的大小得到数组元素个数

    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了，下标是%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到");
    }
    

    return 0;
}