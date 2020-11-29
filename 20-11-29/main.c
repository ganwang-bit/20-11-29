//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char ch;
//    ch=getchar();
//    printf("%c\n",ch);
//    return 0;
//}
//#include<stdio.h>
//int is_left(char*arr1,char*arr2)
//int main()
//{
//    char arr1[30]="abcdef";
//    char arr2[]="cdefab";
//    if(is_left(arr1,arr2)==1)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    if(a>=0&&a<=5)
//    {
//        printf("0");
//    }
//    else if(a>5)
//    {
//        printf("%d\n",a+3);
//    }
//    else
//        printf("%d\n",2*a+30);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    if(a<=5)
//    {
//        if(a>=0)
//        {
//            printf("0");
//        }
//        else
//        {
//            printf("%d\n",2*a+30);
//        }
//    }
//    else
//    {
//        printf("%d\n",a+3);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    //int len=strlen("abcdef");
//    char a[]={'a','b'};
//    printf("%d\n",strlen(a));
//    return 0;
//}
//#include<stdio.h>
//#define F(x) x*x
//int main()
//{
//    int a,b;
//    a=5;
//    b=6;
//    int c=(F(a))/(F(b));
//    printf("%d\n",c);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char*arr1,const char*arr2)
//{
//    assert(arr1!=NULL);
//    assert(arr2!=NULL);
//    char*dest=arr1;
//    while(*arr1++=*arr2++)
//    {
//        ;
//    }
//    return dest;
//}
//int main()
//{
//    char arr1[20]="abcdefghi";
//    char arr2[]="bit";
//    //strcpy(arr1,arr2);
//    printf("%s\n",my_strcpy(arr1,arr2));
//    printf("%s\n",strcat(arr1,arr2));
//    return 0;
//}
//#include<stdio.h>
//char arr[100000];
//int n=0;
//int arr2[100000];
//int main()
//{
//    int j=0;
//    int i=0;
//    gets(arr);
//    while(arr[i]!='\0')
//    {
//        if(arr[i]>='0'&&arr[i]<='9')
//        {
//            n=n+arr[i]-'0';
//            if(arr[i+1]>='0'&&arr[i+1]<='9')
//                n=n*10;
//            else
//            {
//                arr2[j]=n;
//                j++;
//                n=0;
//            }
//        }
//        i++;
//    }
//    int z=0;
//    while(arr2[z]!=0)
//    {
//        z++;
//    }
//    printf("%d\n",z);
//    z=0;
//    while(arr2[z]!=0)
//    {
//        printf("%d\n",arr2[z]);
//        z++;
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//char*my_strcat(char*dst,char*scr)
//{
//    assert(dst&&scr);
//    char*cmp=dst;
//    while(*cmp)
//        cmp++;
//    while(*cmp++=*scr++)
//    {
//        ;
//    }
//    return dst;
//
//}
//
//int main()
//{
//    char arr1[30]="abcdef";
//    char arr2[]="abcd";
//    printf("%s\n",my_strcat(arr1,arr2));
//    return 0;
//}
//#include<stdio.h>
//int my_strcmp(const char*dst,const char*scr)
//{
//    while(*dst==*scr)
//    {
//        if(*dst==0)
//        {
//            return 0;
//        }
//        dst++;
//        scr++;
//    }
//    return *dst-*scr;
//}
//int main()
//{
//    char*p1="abcdef";
//    char*p2="sqwer";
//    printf("%d\n",my_strcmp(p1,p2));
//    return 0;
//}
#include<stdio.h>
//int my_strncmp(char*a,char*b,int n)
//{
//    while(n--&&(*a==*b))
//    {
//        a++;
//        b++;
//            if(*a=='\0')
//            return 0;
//    }
//    return *a-*b;
//}
//int main()
//{
//    char a[]="accdef";
//    char b[]="abcdefg";
//    printf("%d\n",my_strncmp(a,b,4));
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n;
    if(n=2>0)
        printf("0");
    return 0;
}
