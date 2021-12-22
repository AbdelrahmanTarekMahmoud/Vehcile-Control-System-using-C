#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void sensormenu()
{

	char Enginestate[40]="ON";
	char choice, color;
	float speed = 100.00, temperature=50, enginetemp=90;
	char* AC="OFF";
	char* ETC="OFF";

	while (1)
	{
		// display of sensor menu
		printf("_____________________________\n\n");
		printf("Welcome To Sensor Set Menu\n");
		printf("_____________________________\n");
		printf("a. Turn off the engine\n");
		printf("b. Set the traffic light color.\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");
		scanf(" %c", &choice);
		// 4 options for user
		switch (choice)
		{
		case 'a':
		case 'A':
			return ;
			break;
		case 'b':
		case 'B':
			printf("Enter The color of The traffic light :\n");
			scanf(" %c", &color);
			if (color == 'G' ||color == 'g')
			{
				speed = 100;
			}
			else if (color == 'O'||color == 'o')
			{
				speed = 30;
			}
			else if (color == 'R'||color == 'r')
			{
				speed = 0;
			}
			else
			{
				printf("Please Enter Valid Value\n");
			}
			// chech of vechile speed
			if (speed == 30)
			{
				AC = "ON";
				ETC = "ON";
				temperature = (temperature * 5) / 4 + 1;
				enginetemp = (enginetemp * 5) / 4 + 1;
			}
			// display due to user options
			printf("Engine state : %s \n", Enginestate);
			printf("AC: %s \n", AC);
			printf("Vehicle speed : %.1f Km/Hr\n", speed);
			printf("Room Temperature : %.1f C\n", temperature);
			printf("Engine Temperature Controller State : %s \n", ETC);
			printf("Engine Temperature. : %.1f C\n", enginetemp);




			break;
		case 'c':
		case 'C':
			printf("Enter The Room temperature :\n");
			scanf("%d", &temperature);
			if (temperature < 10)
			{
				temperature = 20;
				AC = "ON";
			}
			else if (temperature > 30)
			{
				temperature = 20;
				AC = "ON";
			}
			else
			{
				AC = "OFF";
			}
			// chech of vechile speed
			if (speed == 30)
			{
				AC = "ON";
				ETC = "ON";
				temperature = (temperature * 5) / 4 + 1;
				enginetemp = (enginetemp * 5) / 4 + 1;
			}
			// display due to user options
			printf("Engine state : %s \n", Enginestate);
			printf("AC: %s \n", AC);
			printf("Vehicle speed : %.1f Km/Hr\n", speed);
			printf("Room Temperature : %.1f C\n", temperature);
			printf("Engine Temperature Controller State : %s \n", ETC);
			printf("Engine Temperature. : %.1f C\n", enginetemp);

			break;
		case 'd':
		case 'D':
			printf("Enter The Engine temperature :\n");
			scanf_s("%d", &enginetemp);
			if (enginetemp < 100)
			{
				enginetemp = 125;
				ETC = "ON";
			}
			else if (enginetemp > 150)
			{
				enginetemp = 120;
				ETC = "ON";
			}
			else
			{
				ETC = "OFF";
			}
			// chech of vechile speed
			if (speed == 30)
			{
				AC = "ON";
				ETC = "ON";
				temperature = (temperature * 5) / 4 + 1;
				enginetemp = (enginetemp * 5) / 4 + 1;
			}
			// display due to user options
			printf("Engine state : %s \n", Enginestate);
			printf("AC: %s \n", AC);
			printf("Vehicle speed : %.1f Km/Hr\n", speed);
			printf("Room Temperature : %.1f C\n", temperature);
			printf("Engine Temperature Controller State : %s \n", ETC);
			printf("Engine Temperature. : %.1f C\n", enginetemp);


			break;
		default:
			printf("Please Enter valid choice ");
			break;
		}
	}

}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char input;
	// Taking choices from user
	while (1) // To keep repeating program if user chose b
	{
		// display of main menu
		printf("Please Enter The choice u want : \n");
		printf("Press (a) to (Turn On The Vechile Engine)\n");
		printf("Press (b) to (Turn Off The Vechile Engine)\n");
		printf("Press (c) to (Quit The System)\n");
		scanf(" %c", &input);
		// 3 options of the user
		switch (input)
		{
		case 'a':
		case 'A':
			sensormenu();
			break;
		case 'b':
		case 'B':
			break;
		case 'c':
		case 'C':
			printf("YOU Quited the system\n");
			return 0;
			break;
		default:
			printf("Please Enter valid choice \n");
			break;
		}
	}
}
