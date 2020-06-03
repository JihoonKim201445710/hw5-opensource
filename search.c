#include "phone.h"

/*****************
** Your code..
** This function should be implemented in search.c
*************************/
void printAll()
{
    contact *curr = head;
    printf("Print all contants in the PhoneBook\n");
    printf("<<Display all contact in the PhoneBook>>\n");
    while (curr != NULL)
    {
        printf("%s\n", curr->Name);
        printf("%s\n", curr->PhoneNumber);
        break;
        curr = curr->next;
    }
}

/*****************
** Your code..
** This function should be implemented in search.c
*************************/
void searchByName()
{
    contact* curr = head;
        char name_search[10];
        printf("Search by Name\n");
        printf(">>Enter a name to search: \n");
        scanf("%s", name_search);
        while (curr->next != NULL) {
            if (strcmp(curr->Name, name_search) == 0) {
                break;
                curr = curr->next;
            }
            else {
                printf("Oops! %s is not in the PhoneBook.\n", name_search);
            }
        }
        printf("%s %s\n", curr->Name, curr->PhoneNumber);
    }