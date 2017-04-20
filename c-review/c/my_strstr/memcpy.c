/*************************************************************************
	> File Name: strlen.c
	> Author:yuzhe 
	> Mail:953659912@qq.com 
	> Created Time: Thu 20 Apr 2017 03:53:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
void *memcpy_my(void *dst,void *src,size_t size)
{
    assert(dst);
    assert(src);
    char *pdst = (char *)dst;
    char *psrc = (char *)src;
    while(size--)
    {
        *pdst = *psrc;
        pdst++;
        psrc++;
    }
    return dst;
}

int main()
{
    char arr[100] = "12345";
    char arr1[10]={0};
    memcpy_my(arr+3,arr,sizeof(arr));
    printf("%s\n",arr);
    
    return 0;
}

