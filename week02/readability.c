#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// prototypes
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
float calc_grade(int letters, int words, int sentences);

// main function
int main(void)
{
    // get user input
    string text;
    do
    {
        text = get_string("Text: ");
    }
    while (text[0] == ' ');

    // counting letters, words and sentences
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    int grade = round(calc_grade(letters, words, sentences));

    // print result
    if (grade < 1)
    {
        printf("Below grade 1!");
    }
    else if (grade > 16)
    {
        printf("Above grade 16!");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

// functions
// count letters
int count_letters(string text)
{
    int letters = 0;
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// count words
int count_words(string text)
{
    int words = 0;
    int len = (strlen(text));
    for (int i = 0; i < len; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words + 1;
}

// count sentences
int count_sentences(string text)
{
    {
        int sentences = 0;
        int len = (strlen(text));
        for (int i = 0; i < len; i++)
        {
            if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            {
                sentences++;
            }
        }
        return sentences + 1;
    }
}

// calculate grade
float calc_grade(int letters, int words, int sentences)
{
    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;
    return 0.0588 * L - 0.296 * S - 15.8;
}
