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
    cout << "���ص�С������Ϊ��" << max << endl;*/

    //Ԫ������
    int arr[5] = {1,2,3,4,5};
    cout << "��������ǰ��" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int start = 0;//��ʼ�±�
    int end = sizeof(arr) / sizeof(arr[0]) - 1;//�����±�

    while (start < end)
    {
 //ʵ��Ԫ�ػ���
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    //�±����
    start ++;
    end--;
    }
   
    cout << "����Ԫ�����ú�" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
        
    system("pause");

    return 0;
}