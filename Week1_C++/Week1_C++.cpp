#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
using namespace std;

//WEEK 1 - Celsius to Fahrenheit and Fahrenheit to Celcius conversion, repeatable + exit command
/*
float Calculus_Celcius_To_Fahrenheit(float temperature)
{
	float result = 0;
	result = ((temperature * 9) / 5) + 32;
	return result;
}

float Calculus_Fahrenheit_To_Celcius(float temperature)
{
	float result = 0;
	result = ((temperature - 32) * 5) / 9;
	return result;
}

int main()
{
	int running = 1;
	int response = 0;
	float temperature;
	while (running == 1)
	{
		cout << " Hello Customer!\n This program converts your temperature from Celcius to Fahrenheit degrees and vice versa.\n 1. Celcius -> Fahrenheit \n 2. Fahrenheit -> Celcius \n Please enter the number of your choice:" << endl;
		int k = 0, g = 0;
		while (k == 0)
		{

			while (response == 0)
			{
				cin >> response;
				if (cin.fail())
				{
					cout << "\n Please enter a valid answer:";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> response;
				}
			}
			if (response == 1)
			{
				while (k == 0)
				{
					cout << "\n Please enter the temperature: ";
					cin >> temperature;

					if (cin.fail())
					{
						cout << "\n Please enter a valid value:";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cin >> temperature;
					}
					else
					{
						k = 1;
						cout << Calculus_Celcius_To_Fahrenheit(temperature) << endl;
					}
				}
			}
			else if (response == 2)
			{
				while (k == 0)
				{
					cout << "\n Please enter the temperature: ";
					cin >> temperature;
					if (cin.fail())
					{
						cout << "\n Please enter a valid value:";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cin >> temperature;
					}
					else
					{
						k = 1;					
						cout << Calculus_Fahrenheit_To_Celcius(temperature);
					}
				}

			}
			else
			{
				cout << "Please enter a valid answer: ";
			}
		}
		running = 3;
		cout << "Would you like to run another conversion? \n For Yes, press 1, for No, press 2." << endl;
		while (running == 3)
		{
			cin >> running;
			if (cin.fail())
			{
				cout << "Please enter a valid answer: ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> running;
			}
			else
			{
				if (running != 1 && running != 2)
				{
					running = 3;
					cout << "Please enter a valid answer: ";
				}
				else
				{
					k = 0;
					response = 0;
				}
			}
		}
	}
	return 0;
}*/

/**********************************************************************************************************/

//WEEK 2 Checking values and band assigning( + storage for 4 numbers)
/*
int main()
{
	int array[5];
	char band[5];
	signed long int number;
	bool ok = 0;
	cout << "Hello customer! \n Please enter 4 numbers:\n";
	for (int i = 1; i < 5; i++)
	{
		cout << "\nNumber " << i << ":";
		{
			cin >> number;
			if (cin.fail())
			{
				cout << "\n Please enter a valid answer:";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> number;
			}
			else
			{
				array[i] = number;
				ok = 1;
			}
		}while (ok == 0)
		ok = 0;
	}
	for (int i = 1; i < 5; i++)
	{
		if (array[i] < 11)
		{
			band[i] = 97;
		}
		else if (array[i] > 10 && array[i] < 51)
		{
			band[i] = 98;
		}
		else if (array[i] > 50 && array[i] < 71)
		{
			band[i] = 99;
		}
		else
		{
			band[i] = 100;
		}
		cout << band[i];
	}

	return 0;
}*/
//Checking values and band assigning (infinit reading + on spot answer)
/*
int main()
{
	char band;
	char exit;
	signed long int number;
	bool ok = 0;
	cout << "Hello customer! \n Please enter a number:\n";
	while(ok == 0)
	{
		int q = 0;
		cout << "\nNumber :";
		{
			cin >> number;
			if (cin.fail())
			{
				cout << "\n Please enter a valid answer:";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> number;
			}
			else
			{
				ok = 1;
			}
		}while (ok == 0)
		ok = 0;
		if (number < 11)
		{
			band = 97;
		}
		else if (number > 10 && number < 51)
		{
			band = 98;
		}
		else if (number > 50 && number < 71)
		{
			band = 99;
		}
		else
		{
			band = 100;
		}
		cout << band;
		cout << "\nFor exit press q\n";
		while (q == 0)
		{
			cin >> exit;
			if (cin.fail())
			{
				cout << "\n Please enter a valid answer:";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> exit;
			}
			else if (strchr("q", exit) || strchr("Q", exit))
			{
				q = 1;
				ok = 1;
			}
			else
			{
				q = 1;
				ok = 0;
			}

		}

	}
	return 0;
}*/

//Checking values and band assigning (infinit input + on spot answer + infinit storage)
/*
int main()
{
	ofstream fout("Output.txt");

	char band;
	char exit;
	signed long long int number;
	bool ok = 0;
	cout << "Hello customer! \n Please enter a number:\n";
	while (ok == 0)
	{
		int q = 0;
		cout << "\nNumber :";
		{
			cin >> number;
			if (cin.fail())
			{
				cout << "\n Please enter a valid answer:";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> number;
			}
			else
			{
				ok = 1;
			}
		}while (ok == 0)
		ok = 0;
		if (number < 11)
		{
			band = 97;
			fout << band << " " << number <<endl;
		}
		else if (number > 10 && number < 51)
		{
			band = 98;
			fout << band << " " << number << endl;
		}
		else if (number > 50 && number < 71)
		{
			band = 99;
			fout << band << " " << number << endl;
		}
		else
		{
			band = 100;
			fout << band << " " << number << endl;
		}
		cout << band;
		cout << "\nFor exit press q\n";
		while (q == 0)
		{
			cin >> exit;
			if (cin.fail())
			{
				cout << "\n Please enter a valid answer:";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> exit;
			}
			else if (strchr("q", exit) || strchr("Q", exit))
			{
				q = 1;
				ok = 1;
				fout.close();
			}
			else
			{
				q = 1;
				ok = 0;
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}

	}
	return 0;
}*/

/**********************************************************************************************************/

//WEEK 3
ofstream fout("Output_Week3.txt");

int main()
{
	void Check_And_Division(int& i, int counter, float numbers_array[]);
	int counter = 0,  i = 1;
	float number, numbers_array[253];
	char exit;
	bool ok = 0;
	cout << "Hello customer." << endl << "Please enter a number:" << endl;
	while (ok == 0)
	{
		int q = 0;
		cout << "\nNumber :";
		{
			cin >> number;
			if (cin.fail())
			{
				cout << "\n Please enter a valid answer:";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> number;
			}
			else
			{
				counter++;
				numbers_array[counter] = number;
			}
			cout << "For endindg the program, please enter Q"<< endl;
			while (q == 0)
			{
				cin >> exit;
				if (cin.fail())
				{
					cout << "\n Please enter a valid answer:";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> exit;
				}
				else if (strchr("q", exit) || strchr("Q", exit))
				{
					q = 1;
					ok = 1;
				}
				else
				{
					q = 1;
					ok = 0;
				}
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		
	}
	Check_And_Division(i, counter, numbers_array);
	return 0;
}

void Check_And_Division(int& i, int counter, float numbers_array[])
{
	if (i <= counter)
	{
		if (numbers_array[i] <= 100)
		{

			cout << "Your number " << numbers_array[i] << " was smaller than 100." << endl;
			fout << "Your number " << numbers_array[i] << " was smaller than 100." << endl;
		}
		else
		{
			cout << "Your number " << numbers_array[i] << " was higher than 100." << endl;
			fout << "Your number " << numbers_array[i] << " was higher than 100." << endl;
		}

		float check;
		check = numbers_array[i]/ 5.0f* 10;
		check = fmod(check, 10);
		if (check == 0)
		{
			cout << "Your number " << numbers_array[i] << " is a multiple of 5." << endl <<"\n\n";
			fout << "Your number " << numbers_array[i] << " is a multiple of 5." << endl << "\n\n";
		}
		else
		{
			cout << "Your number " << numbers_array[i] << " is not a multiple of 5." << endl<<"\n\n";
			fout << "Your number " << numbers_array[i] << " is not a multiple of 5." << endl << "\n\n";
		}
		i++;
		Check_And_Division(i, counter, numbers_array);
		fout.close();
	}
}


/**********************************************************************************************************/
