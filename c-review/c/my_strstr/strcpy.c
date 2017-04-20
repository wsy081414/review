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
char *strcpy(char *dst,const char * src)
{
    assert(dst);
    assert(src);
    const char *psrc = src;
    char *pdst = dst;
    while(*pdst=*psrc)
    {
        pdst++;
        psrc++;
    }
    return pdst;
}
int main()
{
    char *str="123456789";
    char arr[10] = {0};
    strcpy(arr,str);
    printf("%s\n",arr);
    size_t len = strlen_my(str);
    printf("%d\n",len);
    return 0;

}

