#include<stdio.h>
#include<string.h>
int  input(int ch, int sh)
{
    if (0 > ch || 26 < ch)
    {
        return 0;      //限定为26个字母
    }
    int arr[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    int tmp = arr[0];
    for (int j = 0; j < ch; j++)  //排位
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
    char arr[30];          //密钥
    printf("请输入密钥>:");
    gets_s(arr);
    
    printf("请输入明文>:");
    char ch;
    int ret = strlen(arr);
    int i = 0, j = 1;
    while (scanf("%c", &ch))    //多组输入
    {
        if (j)
        {
            printf("加密的密文>:");
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