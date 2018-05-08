#include <unistd.h>
#include <sys/syscall.h>
#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
system("pwd");
printf("enter the cmd");
gets(s);
if(!strncmp(s,"cd ",3))
{
chdir(s+3);
}
system("pwd");
}
