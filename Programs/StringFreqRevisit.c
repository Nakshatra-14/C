#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *word;
    int freq;
} WordFreq;

int main()
{
    int i, j, n, found, k;
    char str[100], word[16];
    WordFreq **wf;
    // WordFreq *wf[50];
    n = 0; // no. of entries in the array wf (no. of unique words)
    puts("start");
    printf("Enter the String: ");
    gets(str);
    // wf = (WordFreq**)malloc(sizeof(WordFreq*) * (strlen(str) / 2 )); 
    wf = (WordFreq**)malloc(5000); 
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
            if (strcmpi(word, wf[j]->word) == 0)
            {
                wf[j]->freq++;
                found = 1;
                break;
            }
        }

        if (found == 0) // word not found
        {
            // make a new entry
            wf[n] = (WordFreq*)malloc(sizeof(WordFreq));
            wf[n] ->word = (char*)malloc(strlen(word)+1);
            strcpy(wf[n]->word, word);
            wf[n]->freq = 1;
            n++;
        }
    }

    // printing
        printf("%-10s    Frequency\n", "Word");
    for (i = 0; i < n; i++)
    {
        printf("%-10s    %2d\n", wf[i]->word, wf[i]->freq);
        free(wf[i]->word);
        free(wf[i]);
    }
        free(wf);
}
