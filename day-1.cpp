#include<stdio.h>
#include<conio.h>

void main()
{
int i=0,cst=0, test=0, st[4][2]=
                { 1, 0,
                2, 0,
                2, 3,
                3, 3};
char ch,str[20];
printf("Enter the String consisting of 0 and 1");
scanf("%s",&str);
ch = str[0];
while(ch!='\0')
        {
        if(ch=='0')
        cst=st[cst][0];
        else if (ch=='1')
        cst=st[cst][1];
        else
        test=1;
        i++;
        ch=str[i];
        }
  if(cst==3 && test==0)
  printf("The String %s is Accepted with this DFA", str);
  else
  printf(" The String %s is not Accepted with this DFA", str);
}
