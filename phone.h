#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

typedef struct Contact
{
    char Name[10];
    char PhoneNumber[13];
    struct Contact *next;
} contact;

struct Contact PhoneBook[MAX];

extern contact*head;
extern contact*tail;

void registerPhoneData();
void printAll();
void searchByName();
void deleteByName();
void aa();
void save_data();