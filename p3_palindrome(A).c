#include <stdio.h>
#include <string.h>
int main()
{
    char word[500000], reverse_word[500000];
    int i, j, len;
    scanf("%s", word);
    len = strlen(word);
    for(i = 0, j = len - 1; i < len; i++, j--)
    {
        reverse_word[i] = word[j];
    }
    reverse_word[i] = '\0';

    if (0 == strcmp(word, reverse_word))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
