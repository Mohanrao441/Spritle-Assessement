#include<stdio.h>
int funcadd(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int funcsub(int a,int b)
{
    int sub;
    sub=a-b;
    return sub;
}
int funcmul(int a,int b)
{
    int mul;
    mul=a*b;
    return mul;
}
int funcdiv(int a,int b)
{
    int div;
    div=a/b;
    return div;
}
int main()
{
    int x,y,ch,brk=0;
    scanf("%d %d",&x,&y);
        printf("enter 1.add 2.sub 3.mul 4.div 5.break\n");
        scanf("%d",&ch);
        switch(ch)
        {
            
            case 1:printf("%d",funcadd(x,y));
                   break;
            case 2:printf("%d",funcsub(x,y));
                   break;
            case 3:printf("%d",funcmul(x,y));
                   break;
            case 4:printf("%d",funcdiv(x,y));
                   break;
            case 5:break;
        }
}