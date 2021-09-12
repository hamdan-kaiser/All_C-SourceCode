#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[100], stri[100000], str1[15]= {"| o   .  o|"}, str2[15]= {"|  o  .   |"}, str3[15]= {"| ooo .  o|"}, str4[15]= {"| ooo .o o|"}, str5[15]= {"| oo o.  o|"}, str6[15]= {"| oo  . oo|"}, str7[15]= {"| oo o. oo|"}, str8[15]= {"| oo  . o |"}, str9[15]= {"| ooo . o |"}, str10[15]= {"| oo o.ooo|"}, str11[15]= {"| ooo .ooo|"}, str12[15]= {"| oo o.oo |"},
                                          str13[15]= {"| oo  .oo |"}, str14[15]= {"| oooo.   |"}, str15[15]= {"| oo o. o |"}, str16[15]= {"| oo o.o o|"}, str17[15]= {"| ooo .   |"}, str18[15]= {"| ooo . oo|"}, str19[15]= {"| ooo .oo |"}, str20[15]= {"| oo  .o o|"}, str21[15]= {"| ooo .o  |"}, str22[15]= {"| oo o.   |"}, str23[15]= {"| oo o.o  |"}, str24[15]= {"| oo  .  o|"},
                                                  str25[15]= {"| oooo. o |"}, str26[15]= {"| oooo.  o|"}, str27[15]= {"| oo  .o  |"}, str28[15]= {"|  o o.oo |"}, str29[15]= {"|    o. o |"};
    long long int n, i;
    n=0;
    i=0;
    gets(str);
    while (gets(str))
    {
        if (str[0]=='_')
            break;
        if (strcmp(str, str1)==0)
        {
            stri[i]='A';
            i++;
        }
        else if (strcmp(str, str2)==0)
        {
            stri[i]=' ';
            i++;
        }
        else if (strcmp(str, str3)==0)
        {
            stri[i]='q';
            i++;
        }
        else if (strcmp(str, str4)==0)
        {
            stri[i]='u';
            i++;
        }
        else if (strcmp(str, str5)==0)
        {
            stri[i]='i';
            i++;
        }
        else if (strcmp(str, str6)==0)
        {
            stri[i]='c';
            i++;
        }
        else if (strcmp(str, str7)==0)
        {
            stri[i]='k';
            i++;
        }
        else if (strcmp(str, str8)==0)
        {
            stri[i]='b';
            i++;
        }
        else if (strcmp(str, str9)==0)
        {
            stri[i]='r';
            i++;
        }
        else if (strcmp(str, str10)==0)
        {
            stri[i]='o';
            i++;
        }
        else if (strcmp(str, str11)==0)
        {
            stri[i]='w';
            i++;
        }
        else if (strcmp(str, str12)==0)
        {
            stri[i]='n';
            i++;
        }
        else if (strcmp(str, str13)==0)
        {
            stri[i]='f';
            i++;
        }
        else if (strcmp(str, str14)==0)
        {
            stri[i]='x';
            i++;
        }
        else if (strcmp(str, str15)==0)
        {
            stri[i]='j';
            i++;
        }
        else if (strcmp(str, str16)==0)
        {
            stri[i]='m';
            i++;
        }
        else if (strcmp(str, str17)==0)
        {
            stri[i]='p';
            i++;
        }
        else if (strcmp(str, str18)==0)
        {
            stri[i]='s';
            i++;
        }
        else if (strcmp(str, str19)==0)
        {
            stri[i]='v';
            i++;
        }
        else if (strcmp(str, str20)==0)
        {
            stri[i]='e';
            i++;
        }
        else if (strcmp(str, str21)==0)
        {
            stri[i]='t';
            i++;
        }
        else if (strcmp(str, str22)==0)
        {
            stri[i]='h';
            i++;
        }
        else if (strcmp(str, str23)==0)
        {
            stri[i]='l';
            i++;
        }
        else if (strcmp(str, str24)==0)
        {
            stri[i]='a';
            i++;
        }
        else if (strcmp(str, str25)==0)
        {
            stri[i]='z';
            i++;
        }
        else if (strcmp(str, str26)==0)
        {
            stri[i]='y';
            i++;
        }
        else if (strcmp(str, str27)==0)
        {
            stri[i]='d';
            i++;
        }
        else if (strcmp(str, str28)==0)
        {
            stri[i]='g';
            i++;
        }
        else if (strcmp(str, str29)==0)
        {
            stri[i]='.';
            i++;
        }
    }
    stri[i]='\0';
    printf("%s", stri);
    return 0;
}
