#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

// prototypes
int count_letters (string text);
int count_words (string text);
int count_sentences (string text);
float calc_grade (int letters, int words, int sentences);

// main function
int main(void)
{
    // get user input
    string text;
    do
    {
    string text = get_string("Text: ");
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
        printf("Before grade 1!\n");
    }
    else if (grade > 16)
    {
        printf("Above grade 16!\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

// functions
// count letters
int count_letters (string text)
{

}

// count words
int count_words (string text)
{

}

// count sentences
int count_sentences (string text)
{

}

// calculate grade
float calc_grade (int letters, int words, int sentences)
{

}

