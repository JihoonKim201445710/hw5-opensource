#include "phone.h"

void deleteByName()
{
    char name_delete[10];
    contact *curr = head;
    contact *curr2;

        printf("Deletion is done\n");
        printf(">>Enter a name to Delete: ");
        scanf("%s", name_delete);
        while (curr->next != NULL) {
            if (strcmp(curr->Name, name_delete) == 0) {
                break;
                curr = curr->next;
            }
            else {
                printf("Oops! %s is not in the PhoneBook.\n", name_delete);
                curr = curr->next;
            }
        }
        printf("%s is deleted\n", curr->Name);
        curr2 = curr->next->next;
        free(curr->next);
        curr->next = curr2;
    }