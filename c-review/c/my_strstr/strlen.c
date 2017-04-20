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
int main()
{
    char *str="123456789";
    size_t len = strlen_my(str);
    printf("%d\n",len);
    return 0;

}

