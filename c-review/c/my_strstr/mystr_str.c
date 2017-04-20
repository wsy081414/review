#include<stdio.h>
#include<assert.h>
char *str_str( char *str1, char *str2)
{
    assert(str1);
    assert(str2);
    char *pstr1 = str1;
    char *pstr2 = str2;
    char *start = pstr1;
    while(pstr1!='\0')
    {
        start = pstr1;
        while(*pstr1 == *pstr2)
        {
            pstr1++;
            pstr2++;
            if(*pstr1=='\0' || *pstr2=='\0')
                break;
        }
        if(*pstr2 == '\0')
        {
            return (char *)pstr1;
        }
        pstr1 = start;
        pstr1++;
        pstr2 = str2;
    }
    return NULL;
}
int main()
{
    char *str = "12345678";
    char *str1 = "456";

    char *str2 = str_str(str,str1);
    printf("%s\n",str2);
}
