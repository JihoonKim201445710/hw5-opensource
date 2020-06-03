#include "phone.h"

void registerPhoneData()
{
    contact* curr = head;
    printf("Registration\n");
    static int pw_count = 0;
    char pw[] = "qwerty1234";
    char pw_input[10];

    while (pw_count <= 3) {
        printf("Password:\n");
        scanf("%s", pw_input);
        if (strcmp(pw, pw_input) == 0) {
            char Name[10];
            char PhoneNumber[13];
            printf("\nNew user name: ");
            scanf("%s", Name);
            printf("\nPhoneNumber: ");
            scanf("%s", PhoneNumber);
            contact* _new = (contact*)malloc(sizeof(contact));
            strcpy(_new->Name, Name);
            strcpy(_new->PhoneNumber, PhoneNumber);
            printf("%s registered!\n", Name);

            _new->next = NULL;
            if (head == NULL) {
                head = _new;
                tail = _new;
            }
            else {
                tail->next = _new;
                tail = _new;
            }
            save_data();
            break;
        }
        else {
            pw_count++;
            if (pw_count == 1) {
                printf("Not matched !!!\n");
            }
            if (pw_count == 2) {
                printf("Not matched (twice) !!!\n");
            }
            if (pw_count == 3) {
                printf("Not matched (3 times) !!!\n");
            }
        }
    }
    printf("you are not allowed to access PhoneBook. ");
    exit(0);
}