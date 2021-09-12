#include <stdio.h>
#include <string.h>

int main() {
char str[] = "ABCD";
for (int i = 0;  i< strlen(str); i++)
    printf("%c", str[i]+i);

return 0;
}
