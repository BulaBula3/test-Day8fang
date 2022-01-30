#include <iostream>
using namespace std;

int main1()
{
    /*int arr[5] = { 300,350,200,400,250 };

    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "最重的小猪体重为：" << max << endl;*/

    //元素逆置
    int arr[5] = {1,2,3,4,5};
    cout << "数组逆置前：" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int start = 0;//起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标

    while (start < end)
    {
 //实现元素互换
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    //下标更新
    start ++;
    end--;
    }
   
    cout << "数组元素逆置后：" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
        
    system("pause");

    return 0;
}