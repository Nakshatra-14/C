#include <stdio.h>
#include <string.h>

typedef struct
{
    char word[30];
    int freq;
} WordFreq;

int main()
{
    int i, j, n, found, k;
    char str[100], word[16];
    WordFreq wf[50];
    n = 0; // no. of entries in the array wf (no. of unique words)

    printf("Enter the String: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            continue;

        k = 0;
        while (str[i] != '\0' && str[i] != ' ')
        {
            word[k] = str[i];
            k++;
            i++;
        }
        i--;
        word[k] = '\0';
        // search current word in array wf
        found = 0;
        for (j = 0; j < n; j++)
        {
            if (strcmpi(word, wf[j].word) == 0)
            {
                wf[j].freq++;
                found = 1;
                break;
            }
        }
        if (found == 0) // word not found
        {
            // make a new entry
            strcpy(wf[n].word, word);
            wf[n].freq = 1;
            n++;
        }
    }

    // printing
        printf("%-10s    Frequency\n", "Word");
    for (i = 0; i < n; i++)
    {
        printf("%-10s    %2d\n", wf[i].word, wf[i].freq);
    }
}
