#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

void CreateGameAuthorty(void);

void InitializeGame(int opt);

void pauseStr(void);

int ReadHost(char strp[]);

void Initialize(void);

void Exit(void);

int SelectedHouse;


class GameClass {


	//CONSTRUCTOR
	GameClass() 
	{

	}
	//DESTRUCTOR
	~GameClass()
	{

	}

public:
	static int getUserResponse() {
		int resp = 0;
		cin >> resp;
		return resp;
	};

public:
	static int ReadHost(char strp[]) {
		cout << strp;
		int response = 0;
		cin >> response;

		return response;
	}
};



void CreateGameAuthorty(void) 
{
	//THIS METHOD INTIALIZES THE ENTIRE GAME
	std::cout << "Town Of Impostors\n";

	std::cout << "|1. Play|\n|2.Exit|\n";
	int opt = 0;
	std::cin >> opt;

	if (opt) 
	{
		InitializeGame(opt);
	}
	else 
	{
		cin >> opt;
		InitializeGame(opt);
	}
}

void InitializeGame(int opt)
{
	switch (opt) 
	{
		case 1:
			cout << "Your name is timmy, you met with your friends on an abandoned port near your city. You and your friends found a box, decided to open it and found a box full of cocaine. You took some but then a mafia found you out, you started running like a fucking rat. Where do you hide?\n1. House 1\n2. House 2\n3. House 3\n";
			Initialize();
			break;
		case 2:
			cout << "\nExiting\n";
			break;
		default:
			cout << "Invalid option!";
			pauseStr();
			break;
	}
}

void Initialize() 
{
	int exit = GameClass::getUserResponse();

	if (exit != SelectedHouse) 
	{
		cout << "The mafia caught you. Your friends and you got tortured by the mafia. After all, you died.";
	}
	else
	{
		cout << "The mafia couldn't catch you. Your friends escaped from the mafia. After all, you're safe?";
	}

	cout << SelectedHouse;
}

void pauseStr() 
{
	std::cin;
}




int main() {
	srand(time(NULL));
	SelectedHouse = rand() % 3 + 1;
	CreateGameAuthorty();
	return 0;
}