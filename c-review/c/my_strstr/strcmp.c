/*************************************************************************
	> File Name: strlen.c
	> Author:yuzhe 
	> Mail:953659912@qq.com 
	> Created Time: Thu 20 Apr 2017 03:53:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
size_t strlen_my(const char *str)
{
    assert(str);
    size_t len = 0;
    const char *pstr = str;
    while(*pstr != '\0')
    {
        len++;
        pstr++;
    }
    return len;
}
int strcmp(const char *str1,const char *str2)
{
    assert(str1);
    assert(str2);
    const char *pstr1 = str1;
    const char *pstr2 = str2;
    int ret = 0;
    while(*str1)
    {
        if(*str1 == *str2)
        {
            str1++;
            str2++;
            ret = 0;
        }
        else
        {
            ret = *str1-*str2;
            break;
        }
    }
    return ret;
}
int main()
{
    char *str="123456789";
    char *str1="12345678";
    printf("%d\n", strcmp(str,str1));

    size_t len = strlen_my(str);
    printf("%d\n",len);
    return 0;

}

