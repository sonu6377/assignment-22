/* 1
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     char *str ,c;
     int i=0,j=1;
     str=(char*)malloc(sizeof(char));
     printf(" enter the string ");
     while(c!='\n')
     {
         c=getc(stdin);
         j++;
         str=(char*)realloc(str,j*sizeof(char));
         str[i]=c;
         i++;
     }
     str[i]='\0';
     printf(" \n %s ",str);
     free(str);
     return 0;
 }*/
/* 2
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int *ptr,sum=0,size=0,i=0;
     printf(" enter the size of arrays ");
     scanf("%d",&size);
     ptr=(int*)calloc(size,sizeof(int));
     printf(" enter the %d value ",size);
     for(i=0;i<size;i++)
     {
         scanf("%d",ptr+i);
     }
     for(i=0;i<size;i++)
     {
         sum=sum+*(ptr+i);
     }
     printf(" \n average of %d ",sum/size);
     free(ptr);
     return 0;
 }*/
/* 4
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int *ptr,n=0,sum=0,i;
     printf(" enter the value of n");
     scanf("%d",&n);
     ptr=(int*)malloc(sizeof(int));
     printf(" enter the %d value ",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",ptr+i);
          sum=sum+*(ptr+i);
         ptr=(int*)malloc(sizeof(int));

     }
     printf(" sum of %d ",sum);
     free(ptr);
     return 0;
 }*/
/* 4
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     char *str,c;
     int i=0,j=1;
     str=(char*)malloc(sizeof(char));
     printf(" enter the your string ");
     while(c!='\n')
     {
     c=getc(stdin);
     j++;
     str=(char*)realloc(str,j*sizeof(char));
     str[i]=c;
     i++;
     }
     str[i]='\0';
     printf(" string : %s ",str);
     free(str);
     return 0;

 }*/
/* 5
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
   int *ptr,size,sum=0,i;
   printf(" enter the size of array ");
   scanf("%d",&size);
 ptr=(int*)calloc(size,sizeof(int));
   printf(" enter the array element ");
   for(i=0;i<size;i++)
   {
       scanf("%d",ptr+i);
   }
   for(i=0;i<size;i++)
   {
       sum=sum+*(ptr+i);
   }
   printf(" \n sum of all array elements %d ",sum);
   free(ptr);
   return 0;
 }*/
/* 6
 #include<stdio.h>
 #include<stdlib.h>
 int main()
{
    int *ptr,n,i;
    printf(" enter the total numbers of elements ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf(" enter the %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        if(*ptr<*(ptr+i))
        {
            *ptr=*(ptr+i);
        }
    }
    printf(" largest elements %d ",*ptr);
    free(ptr);
    return 0;
}*/
/* 7
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=NULL;

    return 0;
}*/

/* 8
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf(" enter the a numbers your choice ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int));
    *p=n;
    printf(" \n before free %d ",*p);

    free(p);

    printf(" \n after free %d  ",*p);
    return 0;

}*/
/* 9
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    printf(" enter the size of in bytes ");
    scanf("%d",ptr);
    if(ptr==NULL)
    {
        printf(" \n memory allocation is failed ");
        return 0;
    }
    printf(" \n entered bytes %d ",*ptr);
    free(ptr);

    return 0;

}*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr ,size,i,max=0,min=0;
    printf(" enter the size of an arrays ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    printf(" enter the value of an arrays ");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    max=*ptr;
    min=*ptr;
    for(i=0;i<size;i++)
    {
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }
    }
    printf("\n maximum number in array %d ",max);
    for(i=0;i<size;i++)
    {
        if(min>*(ptr+i))
        {
            min=*(ptr+i);
        }
    }
    printf(" \n minimum numbers in array %d ",min);
    free(ptr);
    return 0;
}





