//Change console font size to '16' and font style to 'Consolas'

#include<iostream>  		// cout, cin
#include<stdlib.h> 			// random number gen3
#include<windows.h> 		// WinAPIs
#include<conio.h> 			// get user input
#include<ctime>				// seeding time
#include<iomanip>			// setw, setfill
#include<math.h>			// std::abs()
#include "include/pacman.h"
#include "include/map.h"
#include "include/asciiart.h"

using namespace std;		//to avoid std::cout ,std::cin

// automatically go to fullscreen
void fullScreen() {
	keybd_event(VK_MENU, 0x38, 0, 0);					// press 'ALT'
	keybd_event(VK_RETURN, 0x1c, 0, 0);					// press 'ENTER'
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);	// release 'ENTER'
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);		// release 'ALT'
}

//clear screen
void clearScreen() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);	// handle to console screen buffer
	COORD cursorPosition; 
	cursorPosition.X = 0;
	cursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsole, cursorPosition);	// sets the cursor position to (0,0)
}

// Game Title
void printSplashScreen() {
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);// handle to console screen buffer
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN);
	
	//pac-man splashscreen
	for(int i = 0; i < 16; i++){
		for(int j = 0; j < 173; j++){
			cout << pString[i][j];
		}
	}
	
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	//continue
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 150; j++){
			cout << cont[i][j];
		}
	}

	cin.get();
	system("cls");
	mainMenuScene();
}

//print main menu
void mainMenuScene() {
	isFromGame = 0;
	isEnterPressed = 0;
	pointerArrow = 1;
	gameControl = 3;
	do {
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		
		//pac-man 
		for(int i = 0; i < 25; i++){
			for(int j = 0; j < 250; j++){
				cout << pacmanArt[i][j];
			}
		}
	
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN);

		//pac-man title
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 120; j++){
				cout << pacmanTitle[i][j];
			}
		}
		
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		
		//menu
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 45; j++) {
					if (i == 0 || i == 1 || i == 2) {
						if (pointerArrow == 1) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << menuSelection[i][j];
					}
					else if (i == 3 || i == 4 || i == 5) {
						if (pointerArrow == 4) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << menuSelection[i][j];
					}
					else if (i == 6 || i == 7 || i == 8) {
						if (pointerArrow == 7) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << menuSelection[i][j];
					}
			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		userInput();
		playerMovement();
		clearScreen();
	} while (isEnterPressed == 0);
	
	isEnterPressed = 0;
		if (pointerArrow == 1) {
			Beep(3000, 20);// sound (3000 Hz, 100ms)
			gameLevel = 1;
			healthPacMan = 3;
			gameScore = 0;
			instructionsScene();
		}
		else if (pointerArrow == 4) {
			Beep(3000, 20);
			creditsScene();
		}
		else {
			Beep(3000, 20);
			system("cls");
			checkScene(0);
		}	
}

//display instructions scene
void instructionsScene() {
	system("cls");
	prevTime2 = 0;
	prevTime = 0;
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
		
		//instructions
		for(int i = 0; i < 16; i++){
			for(int j = 0; j < 160; j++){
				cout << howTo[i][j];
			}
		}

	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		
		//spade
		for(int i = 0; i < 11; i++){
				for(int j = 0; j < 60; j++){
				cout << spade[i][j];
			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE| FOREGROUND_INTENSITY);
	cout << "\n\n\t\t\t\t                 __   __       . ___          ___ ___     __        __   __  ___  __      ___      ___         __          | | | \n"
		"\t\t\t\t                |  \\ /  \\ |\\ | '  |     |    |__   |     / _` |__| /  \\ /__`  |  /__`    |__   /\\   |     \\ / /  \\ |  |    | | | \n"
		"\t\t\t\t                |__/ \\__/ | \\|    |     |___ |___  |     \\__> |  | \\__/ .__/  |  .__/    |___ /~~\\  |      |  \\__/ \\__/    . . . \n\n";

	//ghosts
	for (int i = 0; i < 7; i++) {
		cout << "\t\t\t\t\t\t      ";
		for (int j = 0; j < 107; j++) {
			if (j < 20) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_INTENSITY);
			}
			else if (j < 42) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			}
			else if (j < 64) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			else if (j < 86) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			else if (j < 107) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED);
			}
			cout << ghostsArray[i][j];
		}
	}
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	system("pause");
	system("cls");
	gameMenuScene();
}

//display game menu
void gameMenuScene() {
	pointerArrow = 16;
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	isHorizontal = 1;
	char u = char(205);
	char v = char(201);
	char w = char(186);
	char x = char(187);
	char y = char(188);
	char z = char(200);
	do {
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     __        __   __   __   ___     __             __        __  ___  ___  __  \n"
			"\t\t\t\t\t\t\t\t    /  ` |__| /  \\ /  \\ /__` |__     /  ` |__|  /\\  |__)  /\\  /  `  |  |__  |__)\n"
			"\t\t\t\t\t\t\t\t    \\__, |  | \\__/ \\__/ .__/ |___    \\__, |  | /~~\\ |  \\ /~~\\ \\__,  |  |___ |  \\\n";

		//user character selection
		for (int i = 0; i < 24; i++) {
			cout << "\t\t\t\t\t\t\t\t";
			for (int j = 0; j < 100; j++) {
				if (j < 50) {
					if (pointerArrow == 16) {
						SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_RED);
					}
					else {
						SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					}
					cout << characterSelection[i][j];
				}
				else {
					if (pointerArrow == 44) {
						SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_RED);	
					}
					else {
						SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					}
					cout << characterSelection[i][j];
				}
			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		userInput();
		playerMovement();
		clearScreen();
	} while (isEnterPressed == 0);
	
	isEnterPressed = 0;
	isHorizontal = 0;

	//selecting char code for PacMan
	if (pointerArrow == 16) {
		c = 1;
	}
	else {
		c = 2;
	}
	Beep(3000, 20);
	pointerArrow = 1;
	system("cls");

	do {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t      __        __   __   __   ___    __     ___  ___    __            ___   \n"
			"\t\t\t\t\t\t\t\t     /  ` |__| /  \\ /  \\ /__` |__    |  \\ | |__  |__  | /  ` |  | |     |  \\ / \n"
			"\t\t\t\t\t\t\t\t     \\__, |  | \\__/ \\__/ .__/ |___   |__/ | |    |    | \\__, \\__/ |___  |   |\n";

		//difficulty selection
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 78; j++) {
				if (i == 0 || i == 1 || i == 2) {
					if (pointerArrow == 1) {
						SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
					}
					else {
						SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					}
					cout << difficultySelection[i][j];
				}
				else if (i == 4 || i == 5 || i == 6) {
					if (pointerArrow == 4) {
						SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);	
					}
					else {
						SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					}
					cout << difficultySelection[i][j];
				}
				else if (i == 8 || i == 9 || i == 10) {
					if (pointerArrow == 7) {
						SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_INTENSITY);	
					}
					else {
						SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					}
					cout << difficultySelection[i][j];
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << difficultySelection[i][j];
				}

			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		userInput();
		playerMovement();
		clearScreen();
	} while (isEnterPressed == 0);
	
	isEnterPressed = 0;
	isCongrats = 0;

	if (pointerArrow == 1) {
		levelDifficulty = 1;
	}
	else if (pointerArrow == 4) {
		levelDifficulty = 2;
	}
	else {
		levelDifficulty = 3;
	}
	Beep(3000, 20);
	system("cls");
	do {
		clearScreen();
		cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t ___      ___  ___  __          __        __                     ___ \n"
			"\t\t\t\t\t\t\t\t\t|__  |\\ |  |  |__  |__)    \\ / /  \\ |  | |__)    |\\ |  /\\  |\\/| |__\n"
			"\t\t\t\t\t\t\t\t\t|___ | \\|  |  |___ |  \\     |  \\__/ \\__/ |  \\    | \\| /~~\\ |  | |___\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
		
			cin.getline(playerName, 100);
		} while (int(playerName[0] == 0));
		
		pointerArrow = 16;
		isHorizontal = 1;
		system("cls");
		do {
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t __   ___       ___  __  ___     __   __       ___  __   __        __  \n"
				"\t\t\t\t\t\t\t\t\t/__` |__  |    |__  /  `  |     /  ` /  \\ |\\ |  |  |__) /  \\ |    /__`\n"
				"\t\t\t\t\t\t\t\t\t.__/ |___ |___ |___ \\__,  |     \\__, \\__/ | \\|  |  |  \\ \\__/ |___ .__/ \n";
		
			controlSelection[4][63] = char(30);
			controlSelection[11][63] = char(31);
			controlSelection[11][55] = char(17);
			controlSelection[11][71] = char(16);

			//controls seslection
			for (int i = 0; i < 20; i++) {
				for (int j = 0; j < 90; j++) {
					if (j < 40) {
						if (pointerArrow == 16) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						}
						cout << controlSelection[i][j];
					}
					else {
						if (pointerArrow == 44) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						}
						cout << controlSelection[i][j];
					}
				}
			}
		SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		userInput();
		playerMovement();
		clearScreen();
		} while (isEnterPressed == 0);
		
		isHorizontal = 0;
		isEnterPressed = 0;
		Beep(3000, 20);

		//selecting control
		if (pointerArrow == 16) {
			gameControlCopy = 1;
		}
		else {
			gameControlCopy = 0;
		}
		gameControl = gameControlCopy;
		system("cls");
		loadingScene(); 
}

//display credits
void creditsScene() {
	system("cls");
	isCredits = 1;
		
		//credits art
		for(int i = 0; i < 35; i++){
			for(int j = 0; j < 190; j++){
				cout << credits[i][j];
			}
		}

		if (isFromFinal == 1) {
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Press \"e\" to go to Main Menu\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
		}
		else {
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPress \"e\" to go back\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
		}
		do {
			userInput();
			if (isCredits == 0) {
				isFromFinal = 0;
				Beep(3000, 20);
				system("cls");
				mainMenuScene();
			}
		} while (isCredits == 1);

}

//display checkScene
void checkScene(int exitCondition) {
	pointerArrow = 79;
	isEnterPressed = 0;
	isFromGame = 0;
	isHorizontal = 1;
	isFromCheck = 1;
	do{
		
		//quit screen
		for(int i = 0; i < 7; i++){
			for(int j = 0; j < 140; j++){
				cout << chk[i][j];
			}
		}	

		HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);

		//auit selection
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 118; j++) {
					if (j < 50) {
						if (pointerArrow == 11) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_RED);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						}
						cout << checkSelection[i][j];
					}
					else {
						if (pointerArrow == 79) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						}
						cout << checkSelection[i][j];
					}
			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		userInput();
		playerMovement();
		clearScreen(); 
		} while (isEnterPressed == 0);
		
	isEnterPressed = 0;
	isHorizontal = 0;
	isFromCheck = 0;
	
	system("cls");
	
	if (isNewClicked == 1) {
		if (pointerArrow == 11) {
			Beep(3000, 20);
			gameLevel = 1;
			healthPacMan = 3;
			gameScore = 0;
			prevTime2 = 0;
			gameControl = gameControlCopy;
			loadingScene();
		}
		else {
			Beep(3000, 20);
			prevTime += clock() - prevTime2;
			pauseScene();
		}
	}
	else {
		if (pointerArrow == 11) {
			exit(0);
		}
		else {
			if (exitCondition == 0) {
				Beep(3000, 20);
				mainMenuScene();
			}
			else if (exitCondition == 1) {
				Beep(3000, 20);
				prevTime += clock() - prevTime2;
				pauseScene();
			}
			else {
				Beep(3000, 20);
				gameOverScene();
			}
		}
	}
}

//get user input
void userInput() {
	if (_kbhit()) {// if any key pressed
		switch (_getch()) {
		case 'a':
		case 'A':
			if (gameControl == 1 || gameControl == 3) {
				dir = LEFT;
			}
			break;
		case 75:
			if (gameControl == 0 || gameControl == 3) {
				dir = LEFT;
			}
			break;
		case 'd':
		case 'D':
			if (gameControl == 1 || gameControl == 3) {
				dir = RIGHT;
			}
			break;
		case 77:
			if (gameControl == 0 || gameControl == 3) {
				dir = RIGHT;
			}
			break;
		case 'w':
		case 'W':
			if (gameControl == 1 || gameControl == 3) {
				dir = UP; 
			}
			break;
		case 72:
			if (gameControl == 0 || gameControl == 3) {
				dir = UP;  
			}
			break;
		case 's':
		case 'S':
			if (gameControl == 1 || gameControl == 3) {
				dir = DOWN;
			}
			break;
		case 80:
			if (gameControl == 0 || gameControl == 3) {
				dir = DOWN;
			}
			break;
		case 27:			// esc key
			if (isFromGame == 1) {
				system("cls");
				pauseScene();
			}
			break;
		case 13:			// return key
			isEnterPressed = 1;
			break;
		case 'e':
		case 'E':
			isCredits = 0;
		default:
			break;
		}
	}
}

//movement of PacMan
void playerMovement() {
	switch (dir) {
	case LEFT:
		if ((isFromGame == 1) && (gameMap[iniPacManY][(iniPacManX - 1)] != a)) {								//move left if next position is not border
			iniPacManX--;
		}
		else if (isHorizontal == 1) {
			dir = STAY;
			if (pointerArrow != 11 && isFromCheck == 1) {
				pointerArrow = 11;
			}
			else if (pointerArrow != 16 && isFromCheck == 0) {
				pointerArrow = 16;
			}
		}
		break;
	case RIGHT:
		if ((isFromGame == 1) && (gameMap[iniPacManY][(iniPacManX + 1)] != a)) {								//move right if next position is not border
			iniPacManX++;
		}
		else if (isHorizontal == 1) {
			dir = STAY;
			if (pointerArrow != 79 && isFromCheck == 1) {
				pointerArrow = 79;
			}
			else if (pointerArrow != 44 && isFromCheck == 0) {
				pointerArrow = 44;
			}
		}
		break;
	case UP:
		if (isFromGame) {
			if (gameMap[(iniPacManY - 1)][iniPacManX] != a) {													//move up if next position is not border
				iniPacManY--;
			}
			if (((iniPacManX == 28) || (iniPacManX == 29) || (iniPacManX == 30)) && ((iniPacManY + 1) == 1)) {	//fast travel from upper hole to lower hole
				iniPacManY = 34;
			}
		}
		else if (isHorizontal == 0) {
			dir = STAY;
			if (pointerArrow != 1) {
				pointerArrow -= 3;
			}
		}

		break;
	case DOWN:
		if (isFromGame == 1) {
			if (gameMap[(iniPacManY + 1)][iniPacManX] != a) {													//move down if next position is not border
				iniPacManY++;
			}
			if (((iniPacManX == 28) || (iniPacManX == 29) || (iniPacManX == 30)) && ((iniPacManY - 1) == 33)) {	// fast travel from lower hole to upper hole
				iniPacManY = 0;
			}
		}
		else if (isHorizontal == 0) {	
			dir = STAY;
			if (pointerArrow != 7 && pointerArrow != 10) {
				pointerArrow += 3;
			}
			else if (pointerArrow == 7 && isFromPause == 1) {
				pointerArrow += 3;
			}
		}

		break;
	default:
		break;
	}
}

//display loading screen
void loadingScene() {
	unsigned char a = 178;
	unsigned char b = 205;
	if (isCongrats == 0) {
		prevTime = 0;
	}
	int z;
	double l = 1.5;
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 75; ++i) {
		clearScreen();
		SetConsoleTextAttribute(changeColor, FOREGROUND_RED);
		if (gameLevel == 1) {
			
			//lvl loading 	
			for(int i = 0; i < 7; i++){
				for(int j = 0; j < 100; j++){
					cout << lvl1[i][j];
				}
			}
				
		}
		else if (gameLevel == 2) {
				
			//lvl2 loading	
			for(int i = 0; i < 7; i++){
				for(int j = 0; j < 100; j++){
					cout << lvl2[i][j];
				}
			}
		}
		else {
			
			//lvl 3 loading	
			for(int i = 0; i < 7; i++){
				for(int j = 0; j < 100; j++){
					cout << lvl3[i][j];
				}
			}	
				
		}
		
		SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN| FOREGROUND_BLUE | FOREGROUND_RED);
		z = 1 + rand() % (30 + 1 - 1) + 30;
		cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t       Loading "<< (int)l <<" %\n\n";
		SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN);
		cout << "\t\t\t\t\t\t\t\t     "<<(char)201;
		printLoading(76, b);
		cout <<(char)187<<"\n\t\t\t\t\t\t\t\t     "<<(char)186<<" ";
		printLoading(i, a);
		printLoading(75 - i, ' ');
		cout <<(char)186 << "\n";

		//second line
		cout << "\t\t\t\t\t\t\t\t     "<< (char)186 <<" ";
		printLoading(i, a);
		printLoading(75 - i, ' ');
		cout << (char)186 << endl;
		//second line

		//third line
		cout << "\t\t\t\t\t\t\t\t     "<< (char)186 <<" ";
		printLoading(i, a);
		printLoading(75 - i, ' ');
		cout << (char)186 << "\n";
		//third line

		//forth line
		cout << "\t\t\t\t\t\t\t\t     "<< (char)186 <<" " ;
		printLoading(i, a);
		printLoading(75 - i, ' ');
		cout << (char)186<< "\n";
		//forth line

		cout << "\t\t\t\t\t\t\t\t     "<< (char)200;
		printLoading(76, b);
		cout << (char)188;

		l = l + 1.33333;
		SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}

	cout <<"\n\n\t\t\t\t\t\t\t\t\t\t               ";
	system("pause");
	system("cls"); 
	prevTime += clock() - prevTime2;
	isCongrats = 0;
	callGame(1);  
}

//run loading
void printLoading(int b, char a = ' ')
{
	for (int i = 0; i < b; ++i)
		cout <<  a;
}

// display pause menu
void pauseScene() {
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	prevTime2 = clock();
	gameControl = 3;
	isFromGame = 0;
	pointerArrow = 1;
	isEnterPressed = 0;
	isFromPause = 1;
	do {
		SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_INTENSITY );	
		
		//pause menu
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 100; j++){
				cout << pause[i][j];
			}
		}

		//pasue menu selecton
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 45; j++) {
					if (i == 0 || i == 1 || i == 2) {
						if (pointerArrow == 1) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << pauseSelection[i][j];
					}
					else if (i == 3 || i == 4 || i == 5) {
						if (pointerArrow == 4) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << pauseSelection[i][j];
					}
					else if (i == 6 || i == 7 || i == 8) {
						if (pointerArrow == 7) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << pauseSelection[i][j];
					}
					else if (i == 9 || i == 10 || i == 11) {
						if (pointerArrow == 10) {
							SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
						}
						else {
							SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						}
						cout << pauseSelection[i][j];
					}
			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		userInput();
		playerMovement();
		clearScreen();
	} while (isEnterPressed == 0);
	
	isEnterPressed = 0;

	system("cls");
	
	if (pointerArrow == 1) {
		Beep(3000, 20);
		prevTime += clock() - prevTime2;
		gameControl = gameControlCopy;
		callGame(0);
		
	}
	else if (pointerArrow == 4) {
		isNewClicked = 1;
		Beep(3000, 20);
		checkScene(1);
	}
	else if (pointerArrow == 7) {
		Beep(3000, 20);
		prevTime2 = 0;
		mainMenuScene();
	}
	else {
		Beep(3000, 20);
		checkScene(1);
	}
}


//game environment
void gameDisplay() {
	if (levelDifficulty == 1) {
		Sleep(100);// slows gameplay (delays 100ms)
	}
	else if (levelDifficulty == 2) {
		Sleep(10);
	}

	if (gameLevel == 1) {
		for (int i = 0; i < 35; i++) {
			for (int j = 0; j < 60; j++) {
				gameMap[i][j] = mapOne[i][j];
			}
		}
	}
	else if (gameLevel == 2) {
		for (int i = 0; i < 35; i++) {
			for (int j = 0; j < 60; j++) {
				gameMap[i][j] = mapTwo[i][j];
			}
		}
	}
	else if (gameLevel == 3) {
		for (int i = 0; i < 35; i++) {
			for (int j = 0; j < 60; j++) {
				gameMap[i][j] = mapThree[i][j];
			}
		}
	}

	cout << "\n\n\n\n\n\n\n\n\n";

	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED);

	//prints heart
	if (healthPacMan == 3) {
		cout << "\t\t\t\t\t\t\t\t\t     " << f << f << f << "\t\t       ";
	}
	else if (healthPacMan == 2) {
		cout << "\t\t\t\t\t\t\t\t\t     " << f << f << "\t\t\t       ";
	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t     " << f << "  \t\t       ";
	}

	//prints score
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " TIME\t\t\t  SCORE\n";
	gameTime = (clock() - prevTime);
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << (gameTime / 1000) / 60 << ":";
	cout << setfill('0') << setw(2);
	cout << (gameTime / 1000) % 60;
	cout << "\t\t\t";
	cout << "   " << gameScore << "\n";

	//prints map
	for (int i = 0; i < 35; i++) {
		cout << "\t\t\t\t\t\t\t\t\t     ";
		for (int j = 0; j < 60; j++) {
			if ((i == iniPacManY) && (j == iniPacManX)) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN);
				cout << c;
			}

			//prints ghosts
			else if ((i == redGhostY) && (j == redGhostX)) {
				if (isPoweredUp == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_INTENSITY);
				}
				cout << b;
			}
			else if ((i == greenGhostY) && (j == greenGhostX)) {
				if (isPoweredUp == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				cout << b;
			}
			else if ((i == blueGhostY) && (j == blueGhostX)) {
				if (isPoweredUp == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				cout << b;
			}
			else if ((i == cyanGhostY) && (j == cyanGhostX)) {
				if (isPoweredUp == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				cout << b;
			}
			else if ((i == extraGhostY) && (j == extraGhostX) && (gameLevel == 3)) {
				if (isPoweredUp == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE);
				}
				cout << b;
			}

			//prints powerups
			else if (((i == powerUpOneY) && (j == powerUpOneX)) || ((i == powerUpTwoY) && (j == powerUpTwoX)) || ((i == powerUpThreeY) && (j == powerUpThreeX)) || ((i == powerUpFourY) && (j == powerUpFourX))) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				cout << d;
			}

			else {
				SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE);

				//prints points
				if (pointsArray[i][j] == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << e;
				}

				//prints remaining
				else {
					cout << gameMap[i][j];
				}
			}
		}
		SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "\n";
	}

	isFromGame = 1;
	userInput();

	//When pacman and ghost are on same location
	if ((iniPacManX == redGhostX && iniPacManY == redGhostY) || (iniPacManX == greenGhostX && iniPacManY == greenGhostY) || (iniPacManX == blueGhostX && iniPacManY == blueGhostY) || (iniPacManX == cyanGhostX && iniPacManY == cyanGhostY) || (iniPacManX == extraGhostX && iniPacManY == extraGhostY && gameLevel == 3)) {
		if (isPoweredUp == 1) {
			gameScore += 100;//increase score
			if ((iniPacManX == redGhostX) && (iniPacManY == redGhostY)) {
				isRed = 1;
			}
			else if ((iniPacManX == greenGhostX) && (iniPacManY == greenGhostY)) {
				isGreen = 1;
			}
			else if ((iniPacManX == blueGhostX) && (iniPacManY == blueGhostY)) {
				isBlue = 1;
			}
			else if ((iniPacManX == extraGhostX) && (iniPacManY == extraGhostY)) {
				isExtra = 1;
			}
			else {
				isCyan = 1;
			}
		}
		else {
			dir = STAY;//stop previous input buffer
			healthPacMan--;
			Beep(250, 500);
			if (healthPacMan == 0) {
				gameOver = true;
				system("cls");
				gameOverScene();
			}

			//reset all positions
			iniPacManX = 29;
			iniPacManY = 30;
			redGhostX = 24;
			redGhostY = 17;
			greenGhostX = 27;
			greenGhostY = 17;
			blueGhostX = 32;
			blueGhostY = 17;
			cyanGhostX = 35;
			cyanGhostY = 17;
			extraGhostX = 29;
			extraGhostY = 1;
			redCoolDown = 0, blueCoolDown = 0, greenCoolDown = 0, cyanCoolDown = 0, extraCoolDown = 0;
			isRed = 0, isBlue = 0, isGreen = 0, isCyan = 0, isExtra = 0;
			healthScene();
		}
	}

	//ghost cooldown
	if (isRed == 1) {

		//cooldown time for red ghost if its eaten (ghost will appear after redCoolDown reaches 20)
		redCoolDown++;
		if (redCoolDown == 20) {
			redGhostX = 24;
			redGhostY = 17;
			redCoolDown = 0;
			isRed = 0;
		}
		else {

			//until coolDown print ghost outter the map
			redGhostX = 100;
			redGhostY = 100;
		}
	}
	if (isGreen == 1) {
		greenCoolDown++;
		if (greenCoolDown == 20) {
			greenGhostX = 27;
			greenGhostY = 17;
			greenCoolDown = 0;
			isGreen = 0;
		}
		else {
			greenGhostX = 100;
			greenGhostY = 100;
		}
	}
	if (isBlue == 1) {
		blueCoolDown++;
		if (blueCoolDown == 20) {
			blueGhostX = 32;
			blueGhostY = 17;
			blueCoolDown = 0;
			isBlue = 0;
		}
		else {
			blueGhostX = 100;
			blueGhostY = 100;
		}
	}

	if (isCyan == 1) {
		cyanCoolDown++;
		if (cyanCoolDown == 20) {
			cyanGhostX = 35;
			cyanGhostY = 17;
			cyanCoolDown = 0;
			isCyan = 0;
		}
		else {
			cyanGhostX = 100;
			cyanGhostY = 100;
		}
	}
	if (isExtra == 1 && gameLevel == 3) {
		extraCoolDown++;
		if (extraCoolDown == 20) {
			extraGhostX = 29;
			extraGhostY = 1;
			extraCoolDown = 0;
			isExtra = 0;
		}
		else {
			extraGhostX = 100;
			extraGhostY = 100;
		}
	}
	playerMovement();

	//movement of ghosts
	if (gameLevel == 3) {
		dirChanger = (rand() % 5 + 1);		// create random no for 5 ghosts
	}
	else {
		dirChanger = (rand() % 4 + 1);		// create random no for 4 ghosts
	}

	//movement of ghost if pacman nears it (only when not powered up)
	if ((((std::abs(iniPacManX - redGhostX) <= 10) && iniPacManY == redGhostY) || ((std::abs(iniPacManY - redGhostY) <= 10) && iniPacManX == redGhostX) ||
	 ((std::abs(iniPacManX - greenGhostX) <= 10) && iniPacManY == greenGhostY) || ((std::abs(iniPacManY - greenGhostY) <= 10) && iniPacManX == greenGhostX) || 
	 ((std::abs(iniPacManX - blueGhostX) <= 10) && iniPacManY == blueGhostY) || ((std::abs(iniPacManY - blueGhostY) <= 10) && iniPacManX == blueGhostX) || 
	 ((std::abs(iniPacManX - cyanGhostX) <= 10) && iniPacManY == cyanGhostY) || ((std::abs(iniPacManY - cyanGhostY) <= 10) && iniPacManX == cyanGhostX) || 
	 ((std::abs(iniPacManX - extraGhostX) <= 10) && iniPacManY == extraGhostY) || ((std::abs(iniPacManY - extraGhostY) <= 10) && iniPacManX == extraGhostX)) && isPoweredUp == 0) {
		//red
		if ((std::abs(iniPacManX - redGhostX) <= 10) && iniPacManY == redGhostY) {
			if (std::abs(iniPacManX - (redGhostX + 1)) == ((iniPacManX - redGhostX) - 1) && gameMap[redGhostY][(redGhostX + 1)] != a) {
				redGhostX++;
			}
			else if (gameMap[redGhostY][(redGhostX - 1)] != a) {
				redGhostX--;
			}
		}
		if ((std::abs(iniPacManY - redGhostY) <= 10) && iniPacManX == redGhostX) {
			if (std::abs(iniPacManY - (redGhostY + 1)) == ((iniPacManY - redGhostY) - 1) && gameMap[redGhostY + 1][(redGhostX)] != a) {
				redGhostY++;
			}
			else if (gameMap[redGhostY - 1][(redGhostX)] != a) {
				redGhostY--;
			}
		}
		//green
		if ((std::abs(iniPacManX - greenGhostX) <= 10) && iniPacManY == greenGhostY) {
			if (std::abs(iniPacManX - (greenGhostX + 1)) == ((iniPacManX - greenGhostX) - 1) && gameMap[greenGhostY][(greenGhostX + 1)] != a) {
				greenGhostX++;
			}
			else if (gameMap[greenGhostY][(greenGhostX - 1)] != a) {
				greenGhostX--;
			}
		}
		if ((std::abs(iniPacManY - greenGhostY) <= 10) && iniPacManX == greenGhostX) {
			if (std::abs(iniPacManY - (greenGhostY + 1)) == ((iniPacManY - greenGhostY) - 1) && gameMap[greenGhostY + 1][(greenGhostX)] != a) {
				greenGhostY++;
			}
			else if (gameMap[redGhostY - 1][(redGhostX)] != a) {
				greenGhostY--;
			}
		}
		//blue
		if ((std::abs(iniPacManX - blueGhostX) <= 10) && iniPacManY == blueGhostY) {
			if (std::abs(iniPacManX - (blueGhostX + 1)) == ((iniPacManX - blueGhostX) - 1) && gameMap[blueGhostY][(blueGhostX + 1)] != a) {
				blueGhostX++;
			}
			else if (gameMap[blueGhostY][(blueGhostX - 1)] != a) {
				blueGhostX--;
			}
		}
		if ((std::abs(iniPacManY - blueGhostY) <= 10) && iniPacManX == blueGhostX) {
			if (std::abs(iniPacManY - (blueGhostY + 1)) == ((iniPacManY - blueGhostY) - 1) && gameMap[blueGhostY + 1][(blueGhostX)] != a) {
				blueGhostY++;
			}
			else if (gameMap[blueGhostY - 1][(blueGhostX)] != a) {
				blueGhostY--;
			}
		}
		//cyan
		if ((std::abs(iniPacManX - cyanGhostX) <= 10) && iniPacManY == cyanGhostY) {
			if (std::abs(iniPacManX - (cyanGhostX + 1)) == ((iniPacManX - cyanGhostX) - 1) && gameMap[cyanGhostY][(cyanGhostX + 1)] != a) {
				cyanGhostX++;
			}
			else if (gameMap[cyanGhostY][(cyanGhostX - 1)] != a) {
				cyanGhostX--;
			}
		}
		if ((std::abs(iniPacManY - cyanGhostY) <= 10) && iniPacManX == cyanGhostX) {
			if (std::abs(iniPacManY - (cyanGhostY + 1)) == ((iniPacManY - cyanGhostY) - 1) && gameMap[cyanGhostY + 1][(cyanGhostX)] != a) {
				cyanGhostY++;
			}
			else if (gameMap[cyanGhostY - 1][(cyanGhostX)] != a) {
				cyanGhostY--;
			}
		}
		//extra
		if ((std::abs(iniPacManX - extraGhostX) <= 10) && iniPacManY == extraGhostY) {
			if (std::abs(iniPacManX - (extraGhostX + 1)) == ((iniPacManX - extraGhostX) - 1) && gameMap[extraGhostY][(extraGhostX + 1)] != a) {
				extraGhostX++;
			}
			else if (gameMap[extraGhostY][(extraGhostX - 1)] != a) {
				extraGhostX--;
			}
		}
		if ((std::abs(iniPacManY - extraGhostY) <= 10) && iniPacManX == extraGhostX) {
			if (std::abs(iniPacManY - (extraGhostY + 1)) == ((iniPacManY - extraGhostY) - 1) && gameMap[extraGhostY + 1][(extraGhostX)] != a) {
				extraGhostY++;
			}
			else if (gameMap[extraGhostY - 1][(redGhostX)] != a) {
				extraGhostY--;
			}
		}
	}
	else {

		//move to appropiate direction if respective conditions were met
		if (dirChanger == 1) {
			if (gameMap[redGhostY][(redGhostX - 1)] != a) {
				redGhostX--;
			}
		}
		else if (dirChanger == 4 && gameLevel == 3) {
			if (gameMap[extraGhostY][(extraGhostX - 1)] != a) {
				extraGhostX--;
			}
		}
		else if (dirChanger == 2) {
			if (gameMap[blueGhostY][(blueGhostX + 1)] != a) {
				blueGhostX++;
			}
		}
		else if (dirChanger == 3) {
			if (gameMap[(greenGhostY - 1)][greenGhostX] != a) {
				greenGhostY--;
			}
			if (((greenGhostX == 28) || (greenGhostX == 29) || (greenGhostX == 30)) && ((greenGhostY + 1) == 0)) {
				greenGhostY = 34;
			}
		}
		else {
			if (gameMap[(cyanGhostY + 1)][cyanGhostX] != a) {
				cyanGhostY++;
			}
			if (((cyanGhostX == 28) || (cyanGhostX == 29) || (cyanGhostX == 30)) && ((cyanGhostY - 1) == 34)) {
				cyanGhostY = 0;
			}
		}

		if (gameLevel == 3) {
			dirChanger = (rand() % 5 + 1);		// create random no for 5 ghosts
		}
		else {
			dirChanger = (rand() % 4 + 1);		// create random no for 4 ghosts
		}

		if (dirChanger == 1) {
			if (gameMap[blueGhostY][(blueGhostX - 1)] != a) {
				blueGhostX--;
			}
		}
		else if (dirChanger == 2) {
			if (gameMap[greenGhostY][(greenGhostX + 1)] != a) {
				greenGhostX++;
			}
		}
		else if (dirChanger == 3) {
			if (gameMap[(cyanGhostY - 1)][cyanGhostX] != a) {
				cyanGhostY--;
			}
			if (((cyanGhostX == 28) || (cyanGhostX == 29) || (cyanGhostX == 30)) && ((cyanGhostY + 1) == 0)) {
				cyanGhostY = 34;
			}
		}
		else if (dirChanger == 4 && gameLevel == 3) {
			if (gameMap[(extraGhostY + 1)][extraGhostX] != a) {
				extraGhostY++;
			}
			if (((extraGhostX == 28) || (extraGhostX == 29) || (extraGhostX == 30)) && ((extraGhostY - 1) == 34)) {
				extraGhostY = 0;
			}
		}
		else {
			if (gameMap[(redGhostY + 1)][redGhostX] != a) {
				redGhostY++;
			}
			if (((redGhostX == 28) || (redGhostX == 29) || (redGhostX == 30)) && ((redGhostY - 1) == 34)) {
				redGhostY = 0;
			}
		}

		if (gameLevel == 3) {
			dirChanger = (rand() % 5 + 1);		// create random no for 5 ghosts
		}
		else {
			dirChanger = (rand() % 4 + 1);		// create random no for 4 ghosts
		}

		if (dirChanger == 1) {
			if (gameMap[greenGhostY][(greenGhostX - 1)] != a) {
				greenGhostX--;
			}
		}
		else if (dirChanger == 2) {
			if (gameMap[cyanGhostY][(cyanGhostX + 1)] != a) {
				cyanGhostX++;
			}
		}
		else if (dirChanger == 3) {
			if (gameMap[(redGhostY - 1)][redGhostX] != a) {
				redGhostY--;
			}
			if (((redGhostX == 28) || (redGhostX == 29) || (redGhostX == 30)) && ((redGhostY + 1) == 0)) {
				redGhostY = 34;
			}
		}
		else if (dirChanger == 4 && gameLevel == 3) {
			if (gameMap[(extraGhostY - 1)][extraGhostX] != a) {
				extraGhostY--;
			}
			if (((extraGhostX == 28) || (extraGhostX == 29) || (extraGhostX == 30)) && ((extraGhostY + 1) == 0)) {
				extraGhostY = 34;
			}
		}
		else {
			if (gameMap[(blueGhostY + 1)][blueGhostX] != a) {
				blueGhostY++;
			}
			if (((blueGhostX == 28) || (blueGhostX == 29) || (blueGhostX == 30)) && ((blueGhostY - 1) == 34)) {
				blueGhostY = 0;
			}
		}

		if (gameLevel == 3) {
			dirChanger = (rand() % 5 + 1);		// create random no for 5 ghosts
		}
		else {
			dirChanger = (rand() % 4 + 1);		// create random no for 4 ghosts
		}

		if (dirChanger == 1) {
			if (gameMap[cyanGhostY][(cyanGhostX - 1)] != a) {
				cyanGhostX--;
			}
		}
		else if (dirChanger == 2) {
			if (gameMap[redGhostY][(redGhostX + 1)] != a) {
				redGhostX++;
			}
		}
		else if (dirChanger == 4 && gameLevel == 3) {
			if (gameMap[extraGhostY][(extraGhostX + 1)] != a) {
				extraGhostX++;
			}
		}
		else if (dirChanger == 3) {
			if (gameMap[(blueGhostY - 1)][blueGhostX] != a) {
				blueGhostY--;
			}
			if (((blueGhostX == 28) || (blueGhostX == 29) || (blueGhostX == 30)) && ((blueGhostY + 1) == 0)) {
				blueGhostY = 34;
			}
		}
		else {
			if (gameMap[(greenGhostY + 1)][greenGhostX] != a) {
				greenGhostY++;
			}
			if (((greenGhostX == 28) || (greenGhostX == 29) || (greenGhostX == 30)) && ((greenGhostY - 1) == 34)) {
				greenGhostY = 0;
			}
		}
	}

	//if powerup gained
	//moving respective powerup out of the map , increase score , turning ghosts to purple color
	if ((iniPacManY == powerUpOneY) && (iniPacManX == powerUpOneX)) {
		powerUpOneX = 100;
		powerUpOneY = 100;
		gameScore += 20;
		isPoweredUp = 1;
		powerTimer = 0;
	}
	if ((iniPacManY == powerUpTwoY) && (iniPacManX == powerUpTwoX)) {
		powerUpTwoX = 100;
		powerUpTwoY = 100;
		gameScore += 20;
		isPoweredUp = 1;
		powerTimer = 0;
	}
	if ((iniPacManY == powerUpThreeY) && (iniPacManX == powerUpThreeX)) {
		powerUpThreeX = 100;
		powerUpThreeY = 100;
		gameScore += 20;
		isPoweredUp = 1;
		powerTimer = 0;
	}
	if ((iniPacManY == powerUpFourY) && (iniPacManX == powerUpFourX)) {
		powerUpFourX = 100;
		powerUpFourY = 100;
		gameScore += 20;
		isPoweredUp = 1;
		powerTimer = 0;
	}

	//updating and reseting powerup time
	powerTimer++;
	if ((powerTimer == 180) && (levelDifficulty == 1)) {
		isPoweredUp = 0;
		powerTimer = 0;
	}
	else if ((powerTimer == 150) && (levelDifficulty == 2)) {
		isPoweredUp = 0;
		powerTimer = 0;
	}
	else if ((powerTimer == 120) && (levelDifficulty == 3)) {
		isPoweredUp = 0;
		powerTimer = 0;
	}
	//gaining points
	if (pointsArray[iniPacManY][iniPacManX] == 1) {
		pointsArray[iniPacManY][iniPacManX] = 0;//indicating point was taken
		gameScore += 10;
		noOfPoints++;//incresing no of points collected
	}

	//Game won
	//only if all points are taken
	if (gameLevel == 1) {
		if (noOfPoints == 102) {
			congratsScene();
		}
	}
	else if (gameLevel == 2) {
		if (noOfPoints == 178) {
			congratsScene();
		}
	}
	else if (gameLevel == 3) {
		if (noOfPoints == 168) {
			congratsScene();
		}
	}

}

// display congratsScene
void congratsScene() {
	system("cls");
	isEnterPressed = 0;
	prevTime2 = clock();
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN);
	if (gameLevel == 1 || gameLevel == 2) {
		
		//congrats scene#1
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 150; j++){
				cout << cong1[i][j];
			}
		}			
	}
	else {
		
		//conrats secene#2
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 150; j++){
				cout << cong2[i][j];
			}
		}
	}
	
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t" << playerName << ",";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tYou have scored : ";
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << gameScore;
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
	if (gameLevel == 3) {
		cout << " in " << (gameTime / 1000) / 60 << " mins " << (gameTime / 1000) % 60 << " secs";
	}
	if (gameLevel == 1 || gameLevel == 2) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t.--.                    .---.     .             .                     .                 \n"
			"\t\t\t\t\t\t\t\t|   )                   |       _ | _         _ | _                 _ | _  o\n"
			"\t\t\t\t\t\t\t\t|--'.--..-.  .--..--.   |--- .--. |  .-. .--.   |  .-.    .-..-. .--. |    .  .--. .  . .-. \n"
			"\t\t\t\t\t\t\t\t|   |  (. -' `--.`--.   |    |  | | (.-' |      | (   )  (  (   )|  | |    |  |  | |  |(. -' \n"
			"\t\t\t\t\t\t\t\t'   '   `- -'`--'`- -'  '---''  `-`-'`--''      `-'`-'    `-'`-' '  `-`-'-' `-'  `-`--`-`--'\n\t\t\t\t\t\t\t\t\t\t\t\t\t";
		do {
			userInput();
		} while (isEnterPressed == 0);

		Beep(3000, 20);
		system("cls");
		gameLevel++;
		isCongrats = 1;
		loadingScene();
	
	}
	else {
		
		//end screen
		for(int i = 0; i < 32; i++){
			for(int j = 0; j < 210; j++){
				cout << final[i][j];
			}
		}

		system("pause");
		isFromFinal = 1;
		Beep(3000, 20);
		creditsScene();
	}
}

//display gameOverScene
void gameOverScene() {
	pointerArrow = 1;
	isEnterPressed = 0;
	isFromGame = 0;
	gameControl = 3;
	do{
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED);
	
		//game-over scene
		for(int i = 0; i < 7; i++){
			for(int j = 0; j < 150; j++){
				cout << gmover[i][j];
			}
		}		

	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t" << playerName << ",";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tYou have scored : ";
	SetConsoleTextAttribute(changeColor, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << gameScore;
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY); 

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 45; j++) {
			if (i == 0 || i == 1 || i == 2) {
				if (pointerArrow == 1) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				cout << menuSelectionII[i][j];
			}
			else if (i == 3 || i == 4 || i == 5) {
				if (pointerArrow == 4) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				cout << menuSelectionII[i][j];
			}
			else if (i == 6 || i == 7 || i == 8) {
				if (pointerArrow == 7) {
					SetConsoleTextAttribute(changeColor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);	
				}
				else {
					SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				cout << menuSelectionII[i][j];
			}
		}
	}
	SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	userInput();
	playerMovement();
	clearScreen();
} while (isEnterPressed == 0);

isEnterPressed = 0;

if (pointerArrow == 1) {
	Beep(3000, 20);
	gameLevel = 1;
	gameScore = 0;
	healthPacMan = 3;
	prevTime2 = 0;
	prevTime = clock();
	gameControl = gameControlCopy;
	system("cls");
	callGame(1);
}
else if (pointerArrow == 4) {
	Beep(3000, 20);
	system("cls");
	mainMenuScene();
}
else {
	Beep(3000, 20);
	system("cls");
	checkScene(2);
}
}

//display remaining health 
void healthScene() {
	system("cls");
	prevTime2 = clock();
	HANDLE changeColor = GetStdHandle(STD_OUTPUT_HANDLE);

	if (healthPacMan == 2) {
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     **    **                      **                                      ****       **  **                                **            ****   **  \n"
			"\t\t\t\t      **  **                       **                                     *    *      **                                    **            **     **  \n"
			"\t\t\t\t       ****    ******  **   **     **        ******  **    **  *****           *      **  **  **    **  *****    ******     **   *****  ****** ******\n"
			"\t\t\t\t        **    **    ** **   **     ******        **  **    ** **   **       ***       **  **  **    ** **   **  **          **  **   **   **     **  \n"
			"\t\t\t\t        **    **    ** **   **     **   **  *******   **  **  *******      *          **  **   **  **  *******   *****      **  *******   **     **  \n"
			"\t\t\t\t        **    **    ** **   **     **   **  **   **    ****   **          *           **  **    ****   **            **     **  **        **     **  \n"
			"\t\t\t\t        **     ******   ******     **   **  *******     **     ******     ******     ***  **     **     ******  ******     ***   ******   **      ** \n";
		cout << "\n\n\n\n";


		SetConsoleTextAttribute(changeColor, FOREGROUND_RED);//red
		
		//heart symbol
		for(int i = 0; i < 14; i++){
			for(int j = 0; j < 100; j++){
				cout << heartSymbolTwo[i][j];
			}
		}

			
			
		SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);// white

	}
	else if (healthPacMan == 1) {

		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t  **    **                     **                                      **       **  **   ****              **            ****   ** \n"
			"\t\t\t\t\t   **  **                      **                                     ***       **       **                **            **     **  \n"
			"\t\t\t\t\t    ****   ******  **   **     **        ******  **    **  *****       **       **  ** ******  *****       **   *****  ****** ******\n"
			"\t\t\t\t\t     **   **    ** **   **     ******        **  **    ** **   **      **       **  **   **   **   **      **  **   **   **     **  \n"
			"\t\t\t\t\t     **   **    ** **   **     **   **  *******   **  **  *******      **       **  **   **   *******      **  *******   **     **  \n"
			"\t\t\t\t\t     **   **    ** **   **     **   **  **   **    ****   **           **       **  **   **   **           **  **        **     **  \n"
			"\t\t\t\t\t     *     ******   ******     **   **  *******     **     ******     ****     ***  **   **    ******     ***   ******   **      **\n";
		cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t               ";
		
		//heart symbol
		for (int i = 0; i < 14;i++) {
			for (int j = 0;j < 33;j++) {
				SetConsoleTextAttribute(changeColor, FOREGROUND_RED);
				cout << heartSymbolOne[i][j];
				SetConsoleTextAttribute(changeColor, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			cout << "\t\t\t\t\t\t\t\t\t\t       ";
		}
	}
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
	system("pause");
	prevTime += clock() - prevTime2;
	system("cls");
}

//start and continue game in loop
void callGame(bool gameNew) {

	dir = STAY; 						//stop previous input buffer
	if (gameNew == 1) {

		//declaring variabls
		isNewClicked = 0;
		isPoweredUp = 0;
		isFromGame = 0;
		isEnterPressed = 0;
		noOfPoints = 0;
		powerTimer = 0;
		iniPacManX = 29;
		iniPacManY = 30;
		redGhostX = 24;
		redGhostY = 17;
		greenGhostX = 27;
		greenGhostY = 17;
		blueGhostX = 32;
		blueGhostY = 17;
		cyanGhostX = 35;
		cyanGhostY = 17;
		extraGhostX = 29;
		extraGhostY = 1;
		powerUpOneX = 7;
		powerUpOneY = 4;
		powerUpTwoX = 52;
		powerUpTwoY = 4;
		powerUpThreeX = 7;
		powerUpThreeY = 30;
		powerUpFourX = 52;
		powerUpFourY = 30;
		redCoolDown = 0, blueCoolDown = 0, greenCoolDown = 0, cyanCoolDown = 0, extraCoolDown = 0;
		isRed = 0, isBlue = 0, isGreen = 0, isCyan = 0, isExtra = 0;



		//declare pointsArray[35][60]
		//point locs marked as true
		for (int i = 0; i < 35; i++) {
			for (int j = 0; j < 60; j++) {
				if (((i >= 3) && (i <= 31)) && (j == 3 || j == 56)) {
					pointsArray[i][j] = 1;
				}
				else if (((j >= 6) && (j <= 17) || (j >= 42) && (j <= 53)) && (i == 1 || i == 33) && (gameLevel == 3)) {
					pointsArray[i][j] = 1;
				}
				else if (((j >= 26) && (j <= 32)) && (i == 2 || i == 32) && (gameLevel == 3)) {
					pointsArray[i][j] = 1;
				}
				else if (((i == 15 && j == 27) || (i == 19 && j == 30) || (i == 17 && j == 30) || (i == 17 && j == 27)) && (gameLevel == 3)) {
					pointsArray[i][j] = 1;
				}
				else if (((i >= 15) && (i <= 19)) && (j == 8 || j == 13 || j == 46 || j == 51) && gameLevel == 2) {
					pointsArray[i][j] = 1;
				}
				else if (((i >= 15) && (i <= 19)) && (j == 8 || j == 51)) {
					pointsArray[i][j] = 1;
				}
				else if (((i >= 16) && (i <= 18)) && (j == 13 || j == 46)) {
					pointsArray[i][j] = 1;
				}
				else if (((i == 7) || (i == 9) || (i == 11) || (i == 27) || (i == 25) || (i == 23)) && ((j >= 24) && (j <= 35)) && gameLevel == 2) {
					pointsArray[i][j] = 1;
				}
				else if ((((i >= 22) && (i <= 28)) || ((i >= 6) && (i <= 12))) && (j == 22 || j == 37)) {
					pointsArray[i][j] = 1;
				}
				else {
					pointsArray[i][j] = 0;
				}
			}
		}

		gameOver = false;
		while (!gameOver) {				//loop until game over
			clearScreen();
			gameDisplay();
		}
	}
	else {
		gameOver = false;
		while (!gameOver) {
			clearScreen();
			gameDisplay();
		}
	}
}

int main() {
	srand((unsigned)time(0));	// generate random numbers 
	
	fullScreen();			// toggle full screen
	printSplashScreen(); 		// start game
	system("pause");
	return 0;
}

