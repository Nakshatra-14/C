//find no. of charecter, no. of words, no. of alphabet, no. of upper case letter, no. of lowercase letter, no. of vowels and no. of digits in the file readme.txt
#include <stdio.h>
#include <ctype.h>

char isVowel(char c)
{
    char vowels[] = "aeiouAEIOU";
    int i;
    for(i = 0 ; vowels[i] != '\0' ; i++)
    {
        if(c == vowels[i])
            return 1;
    }
    return 0;
} 

int main(void)
{
    char ch;
    FILE *fp;
    int i, f, len, character;
    int chara = 0, word = 0, alpha = 0, upp = 0, low = 0, vowel = 0, digit = 0;

    fp = fopen("readme.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    character = 0;
    while ((ch = getc(fp)) != EOF)
    {
        character++;
        if(ch == ' ' || ch == '\n')
            word++;                 //spaces
        else if(isdigit(ch))
            digit++;
        else if(isalpha(ch))
        {
            alpha++;
            if(islower(ch))
                low++;
            else
                upp++;   

            if(isVowel(ch))
                vowel++;     
        }    

    }

    printf("Number of characters: %d\n", character);
    printf("Number of words: %d\n", word+1);
    printf("Number of alphabets: %d\n", alpha);
    printf("Number of upper case letters: %d\n", upp);
    printf("Number of lower case letters: %d\n", low);
    printf("Number of vowels: %d\n", vowel);
    printf("Number of digits: %d\n", digit);

    fclose(fp);
    return 0;
}
