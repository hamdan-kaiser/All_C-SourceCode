#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *tp,*ip,*op;
    char ch,c;
    tp = fopen("new.txt","w");

    while((ch = getche()) != '\r')
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
