#include<iostream>
#include<fstream>
#include <stdlib.h> 
#include <time.h>
#include<string>
#include<iostream>
#include<vector>

using namespace std;


int rollDie(int num)
{
	int roll;

	srand(time(nullptr) + rand());

	roll = 1 + rand() % num;

	return roll;

}

string FF(int fileNUM)
{
	ifstream file;
	string file1;

	if (fileNUM == 1) { file1 = "DragonbornFF.txt"; }
	if (fileNUM == 2) { file1 = "DwarfFF.txt"; }
	if (fileNUM == 3) { file1 = "EldarinFF.txt"; }
	if (fileNUM == 4) { file1 = "ElfFF.txt"; }
	if (fileNUM == 5) { file1 = "HaflingFF.txt"; }
	if (fileNUM == 6) { file1 = "HumanFF.txt"; }
	if (fileNUM == 7) { file1 = "TieflingFF.txt"; }

	file.open(file1);
	vector<string> names;
	string input;


	if (!file)
	{
		cout << "File does not exist";
	}

	while (!file.eof())
	{
		file >> input;
		names.push_back(input);
	}


	int ran = rollDie(names.size());

	string ff = names[ran - 1];

	return ff;

}

string FM(int fileNUM)
{
	ifstream file;
	string file1;

	if (fileNUM == 1) { file1 = "DragonbornFM.txt"; }
	if (fileNUM == 2) { file1 = "DwarfFM.txt"; }
	if (fileNUM == 3) { file1 = "EldarinFM.txt"; }
	if (fileNUM == 4) { file1 = "ElfFM.txt"; }
	if (fileNUM == 5) { file1 = "HaflingFM.txt"; }
	if (fileNUM == 6) { file1 = "HumanFM.txt"; }
	if (fileNUM == 7) { file1 = "TieflingFM.txt"; }

	file.open(file1);
	vector<string> names;
	string input;


	if (!file)
	{
		cout << "File does not exist";
	}

	while (!file.eof())
	{
		file >> input;
		names.push_back(input);
	}


	int ran = rollDie(names.size());

	string ff = names[ran - 1];

	return ff;

}

string L(int fileNUM)
{
	ifstream file;
	string file1;

	if (fileNUM == 1) { file1 = "DragonbornL.txt"; }
	if (fileNUM == 2) { file1 = "DwarfL.txt"; }
	if (fileNUM == 3) { file1 = "EldarinL.txt"; }
	if (fileNUM == 4) { file1 = "ElfL.txt"; }
	if (fileNUM == 5) { file1 = "HaflingL.txt"; }
	if (fileNUM == 6) { file1 = "HumanL.txt"; }
	if (fileNUM == 7) { file1 = "TieflingL.txt"; }

	file.open(file1);
	vector<string> names;
	string input;


	if (!file)
	{
		cout << "File does not exist";
	}

	while (!file.eof())
	{
		file >> input;
		names.push_back(input);
	}


	int ran = rollDie(names.size());

	string ff = names[ran - 1];

	return ff;

}


int main()
{
	cout << "1. Dice \n2. Random Name Generator \n";
	int in, sides, times;
	int i = 0;
	cin >> in;

	if (in == 1)
	{
		cout << "<<< WELCOME TO DICE >>> \nPlease input number of sides\n";
		cin >> sides;

		cout << "How many times? \n";
		cin >> times;

		for(i; i < times; i++)
		{
			cout << "Your dice roll is: " << rollDie(sides) << "\n";
		}

	}

	else if (iequal(in, "M") )
	{
		cout << "<<< WELCOME TO FANTACY NAME GENERATOR >>> \nPlease Select Your Sex: \n(M)\n(F)\n(NA)\n\n";

		string sex;

		cin >> sex;

		if (sex == "M")
		{
			cout << "Please Select Your Race\n1.Dragonborn\n2.Dwarf\n3.Eldarin\n4.Elf\n5.Hafling\n6.Human\n7.Tiefling\n";
			int race;
			cin >> race;
			cout << FM(race) << " " << L(race) << "\n";

		}
		else if (sex == "F")
		{
			cout << "Please Select Your Race\n1.Dragonborn\n2.Dwarf\n3.Eldarin\n4.Elf\n5.Hafling\n6.Human\n7.Tiefling\n";
			int race;
			cin >> race;
			cout << FF(race) << " " << L(race) << "\n";
		}
		else
		{
			cout << "Please Select Your Race\n1.Dragonborn\n2.Dwarf\n3.Eldarin\n4.Elf\n5.Hafling\n6.Human\n7.Tiefling\n";
			int race;
			int ran = rollDie(2);
			cin >> race;
			if (ran == 1)
			{
				cout << FF(race) << " " << L(race) << "\n";
			}
			else
			{
				cout << FM(race) << " " << L(race) << "\n";
			}

			
			
		}
		
	}
	system("pause");
}