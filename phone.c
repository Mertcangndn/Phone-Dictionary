#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "add.h"
#include "list.h"
#include "search.h"
#include "menu.h"
#include "leave.h"

int main(void){
	
	int choice=0;
	char searchName[20];
	int searchResult=0;
	
	menu();
	
	do{
		printf("Choice a number: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				if(add()==0){
					printf("\nMission Succesful.\n");
				}
				else{
					printf("\nMission Unsuccesful.\n");
				}
				break;
			case 2:
				list();
				break;
			case 3:
				if(search()!=0){
					printf("\nMission Unsuccesful.\n");
				}
				break;
			case 4:
				leave();
				break;
			default:
				printf("Please enter a number between 1-4\n");
		}
		
		printf("\n");
		
	}while(choice!=4);
	
	return 0;
}
