#include<stdio.h>

void choice1()
{
	printf("%s\n","Whoops, that was the wrong option");
}

void choice2()
{
	printf("%s\n","Here's the flag:\nJust kidding, wrong option as well");
}

void choice3()
{
	printf("%s\n","You got it this time!\nlol, nope. Just kidding");
}
int main()
{
	char * flag = "flag{g00d_us3_0f_str1ngs}";
	printf("Looking for a flag?\n\n");
	//printf("Enter a number, and I'll give you the flag:");

	printf("%s\n","\t1. Test your luck, maybe it's this one");
	printf("%s\n","\t2. Or maybe it's this one!");
	printf("%s\n","\t3. It's definitely this one.");
	

	printf("\nEnter a number, and I'll give you the flag:");

	char choice;

	choice = getchar();
	//printf("%c is your choice\n",choice);

	switch(choice)
	{
		case '1':
			choice1();
			break;
		case '2':
			choice2();
			break;
		case '3':
			choice3();
			break;
		default:
			printf("%s\n","Ah, ah, ah. You didn't say the magic word!");
			break;
	}

	return 0;
}




