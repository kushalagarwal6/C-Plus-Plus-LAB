#include<stdio.h>
int main()
{
	int ch;
	int flag=1;
	//while(flag)
	//{
	do{
		printf("Welcome to the cafe Sir/Mam\n");
		printf("Enter 1 for Tea\nEnter 2 for Coffee\nEnter 3 for Cold Drink ");
		printf("\nEnter your choice:");
        scanf("%d",&ch);
	
		
	
		switch(ch)
		{
			case 1:printf("Here is your Tea Sir/Mam");
			break;
			case 2:printf("Here is your Coffee Sir/Mam");
			break;
			case 3:printf("Here is your Cold Drink Sir/Mam");
			break;
			default:printf("Invalid");
			break;
			
		}
		printf("do you want to continue?y/n");
		scanf(" %d",&flag);
	}while(flag==1);
		return flag;
	
}
