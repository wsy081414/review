/*************************************************************************
	> File Name: strlen.c
	> Author:yuzhe 
	> Mail:953659912@qq.com 
	> Created Time: Thu 20 Apr 2017 03:53:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
void * memmove_my(void *dest,void *src,size_t size)
{
    assert(dest);
    assert(src);
    char *pdest = dest;
    char *psrc = src;
    if(psrc+size > pdest)
    {
        pdest = pdest+size-1;
        psrc = psrc+size-1;
        while(size--)
        {
            *pdest = *psrc;
            pdest--;
            psrc--;
        }
    }
    else
    {
        while(size--)
        {
            *pdest = *psrc;
            pdest++;
            psrc++;
        }   
    }
    return dest;
}
int main()
{
    char arr[100] = "12345";
    char arr1[10]={0};
    memmove_my(arr+3,arr,5);
    printf("%s\n",arr);
    
    return 0;
}

