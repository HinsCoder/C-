#include<stdio.h>
#include<string.h>
int  input(int ch, int sh)
{
    if (0 > ch || 26 < ch)
    {
        return 0;      //�޶�Ϊ26����ĸ
    }
    int arr[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    int tmp = arr[0];
    for (int j = 0; j < ch; j++)  //��λ
    {
        int tmp = arr[0];
        for (int i = 0; i < 25; i++)
            arr[i] = arr[i + 1];
        arr[25] = tmp;
    }
    return arr[sh];
}

int main()
{
    char arr[30];          //��Կ
    printf("��������Կ>:");
    gets_s(arr);
    
    printf("����������>:");
    char ch;
    int ret = strlen(arr);
    int i = 0, j = 1;
    while (scanf("%c", &ch))    //��������
    {
        if (j)
        {
            printf("���ܵ�����>:");
            j--;
        }
        if (ch == '\n')
            break;
        else if (ch == ' ')
            printf(" ");
        else
        {
            if (i == ret)
                i = 0;
            printf("%c", input(ch - 65, arr[i] - 65));
            i++;
        }
    }
    return 0;
}