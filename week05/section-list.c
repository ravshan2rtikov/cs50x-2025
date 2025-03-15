#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node
{
    string phrase;
    struct node *next;
} node;

#define LIST_SIZE 2

bool unload(node *list);

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < LIST_SIZE; i++)
    {
        string phrase = get_string("enter a new phrase: ");

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        n->phrase = phrase;
        n->next = list;

        list = n;
    }
}

bool unload(node *list)
{
    node *ptr = list;
    while (ptr != NULL)
    {
        ptr = list->next;
        free(list);
        list = ptr;
    }
    return true;
}

