#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct phonebook
{
    string names;
    string numbers;
} pb;

int main(void)
{

    int how_many = get_int("How Many Contect You Want To Add: ");
    pb contact[how_many];
    int o = 0;
    while (how_many > o)
    {
        contact[o].names = get_string("enter the contact name \n");
        contact[o].numbers = get_string("enter the contact number \n");
        o++;
    }

    printf("from these contact choose your contact name to show his number  \n");
    for (int i = 0; i < how_many; i++)
    {
        printf("| %s ", contact[i].names);
    }
    printf(": \n");

    string contact_choose = get_string("");

    for (int i = 0; i < how_many; i++)
    {
        if (strcmp(contact[i].names, contact_choose) == 0)
        {
            printf("this is %s and this is his number %s \n", contact[i].names, contact[i].numbers);
            return 0;
        }
    }
    printf("Not Found\n");
}

/*
This Simple Project Made by @aym_cod on instagram and aymenuxma on github
*/
