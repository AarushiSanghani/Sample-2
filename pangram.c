#include<stdio.h>
int main()
{
char sent[1000],flag,s='z';
int len,i;
gets(sent);
len=strlen(sent);
flag='a';
for(i=0;i<len;i++)
{
	if(flag==sent[i])
	{
		i=0;
		flag++;
	}
}
if(flag==s+1)
	printf("pangram");
else
	printf("not a pangram");
return 0;
}
