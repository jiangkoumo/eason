#include <stdio.h>
// strlen函数所需的头文件
#include <string.h>
// Sleep所需的头文件
#include <windows.h>

int main()
{
    char arr1[] = "hello word";
    char arr2[] = "**********";

    int left = 0; 

    //strlen函数计算数组长度。数组长度减一就是最后一个元素的坐标
    int right = strlen(arr1)-1;

    while (left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);

        // 停顿1000毫秒
        Sleep(1000);

        // 清理屏幕
        // system("cls"); 

        left++;
        right--;
    }

    return 0;
}