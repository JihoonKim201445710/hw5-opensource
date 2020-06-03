#include "phone.h"

void save_data() {
	FILE* fp;
	fp = fopen("D:\\vap\\phonelist.txt", "ab");
	fwrite(tail, sizeof(contact), 1, fp);
	fclose(fp);
}