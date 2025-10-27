#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[100], str2[100], str3[100];

    printf("Input string dengan scanf(): ");
    scanf("%s", &str1);
    fflush(stdin);

    printf("Input string dengan gets(): ");
    gets(str2);

    printf("Input string dengan fgets(): ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';

    printf("scanf() : %s\n", str1);
    printf("gets() : %s\n", str2);
    printf("fgets() : %s", str3);

    return 0;
}
