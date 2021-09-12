#include<stdio.h>
#include<stdlib.h>
#include <termios.h>
#include <stdio.h>
 
static struct termios old, new;
void initTermios(int echo) 
{
  tcgetattr(0, &old); 
  new = old; 
  new.c_lflag &= ~ICANON; 
  new.c_lflag &= echo ? ECHO : ~ECHO;
  tcsetattr(0, TCSANOW, &new);
}
 

void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}
 

char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}
 

char getch(void) 
{
  return getch_(0);
}
 

char getche(void) 
{
  return getch_(1);
}
 
int main()
{
    FILE *tp,*ip,*op;
    char ch,c;
    tp = fopen("new.txt","w");

    while((ch = getche()) != '\n')
    {
        fputc(ch,tp);
    }
    fclose(tp);

    ip = fopen("new.txt","r");
    op = fopen("output.txt","w");
    c = fgetc(ip);
    while(c!=EOF)
    {
        fputc(c,op);
        c = fgetc(ip);
    }
    printf("\n\n-----------------------Copied!------------------------\n");
    fclose(ip);
    fclose(op);
    return 0;
}
