#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define kiyoshi "キ・ヨ・シ！"

int main (){

	int num,flag = 0;
	int zun_cnt = 0;
	char *kiyo = kiyoshi; 
	
	srand((unsigned int) time(NULL)); 
	do{
		num  = rand() % 2 + 1;
		switch(num){
				
			case 1:
				printf("ズン\n");
				zun_cnt++;
				break;
			case 2:
				printf("ドコ\n");
				if(zun_cnt == 4) flag = 1;
				else zun_cnt = 0;
				break;
		}
	}while(flag != 1);
	printf("%s\n",kiyo);
}
