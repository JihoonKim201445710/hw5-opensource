#include "phone.h"

void _link(contact _new) {
	contact *data = (contact*)malloc(sizeof(contact));
	strcpy(data->Name, _new.Name);
	strcpy(data->PhoneNumber, _new.PhoneNumber);
	if (head == NULL) {
		head = data;
		tail = data;
	}
	else {
		tail->next = data;
		tail = data;
	}
	printf("%s %s\n", _new.Name, _new.PhoneNumber);
}

void aa() {
	contact _new;
	FILE* fp;
	fp = fopen("D:\\vap\\phonelist.txt", "rb");
	while (fread(&_new, sizeof(contact), 1, fp) > 0) {
		_link(_new);
	}
}