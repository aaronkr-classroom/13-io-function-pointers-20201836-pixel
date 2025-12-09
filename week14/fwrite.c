#include <stdio.h>

int main(void) {
	int data1 = 0x00000412;
	int data2 = 100;
		int data_list[5] = { 0,1,2,3,4 };
	char* text = "I'm Batman! Swear to me!";
	FILE* p_file = fopen("jin.dat", "wb");
	if (NULL != p_file) {
		fwrite(&data1, sizeof(int), 1, p_file);
		fwrite(&data2, sizeof(int), 5, p_file);

		//fwrite(&data_list, sizeof(int), 5, p_file);
		//fwrite(&data_list, sizeof(int) * 5, 1, p_file);
		fwrite(&data_list, sizeof(data_list), 1, p_file);

		fwrite(&text, sizeof(text), 1, p_file);

		printf("모든 내용을 썼습니다!");

		fclose(p_file);
	}

	return 0;
}