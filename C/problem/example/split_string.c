#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief
 *
 * @param string  分割的字串
 * @param seperators 分割符號
 * @param count  分割出來有幾個string
 * @return char**
 */
char **split(char *string, char *seperators, int *count);

int main(void)
{
    char *s[] = "To be, or not to  be, that is the question.";

    return 0;
}

char **split(char *string, char *seperators, int *count)
{
    int len = strlen(string); // 取得字串本身長度
    *count = 0;
    int i = 0;
    while (i < len)
    {
        while (i < len)
        {
            if (strchr(seperators, string[i]) == NULL)
                break;
            i++;
        }
    }
}