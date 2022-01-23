#pragma once

//define constant variables
#define MAPHEIGHT 35
#define MAPWIDTH 60


/*initialize global variables*/

//condition checkers
bool gameOver;
int exitCondition;
int gameControl, gameControlCopy;
bool isNewClicked, isPoweredUp, isCredits, isHorizontal, isFromCheck, isFromFinal, isFromGame, isFromPause, isEnterPressed, isCongrats;

//game variables
int healthPacMan;
int gameScore;
int powerTimer;
int noOfPoints;
int levelDifficulty;
int dirChanger;
int gameLevel;
char playerName[100];

//obj variables
char a = char(178);					// Wall 
char b = char(127);					// Ghosts 
char c;								// PacMan
char d = 6;							// PowerUp
char e = char(248);					// Points
char f = 3;							// life

//obj coordinates
int iniPacManX, iniPacManY;
int redGhostX, redGhostY;
int greenGhostX, greenGhostY;
int blueGhostX, blueGhostY;
int cyanGhostX, cyanGhostY;
int powerUpOneX, powerUpOneY;
int powerUpTwoX, powerUpTwoY;
int powerUpThreeX, powerUpThreeY;
int powerUpFourX, powerUpFourY;
int extraGhostX, extraGhostY;
int pointerArrow;

//ghost cooldown
int redCoolDown, blueCoolDown, greenCoolDown, cyanCoolDown, extraCoolDown;
int isRed, isBlue, isGreen, isCyan, isExtra;

unsigned int prevTime, gameTime, prevTime2 = 0;		//time variables

bool pointsArray[35][60];
char gameMap[MAPHEIGHT][MAPWIDTH];

//declare enum
enum eDirection { STAY = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

/*initialize functions*/

//cmd functions
void fullScreen();
void clearScreen();

//game logic 
void userInput();
void playerMovement();
void callGame(bool gameNew);
void gameDisplay();
void printLoading(int b, char a);

//scenes
void printSplashScreen();
void loadingScene();
void creditsScene();
void healthScene();
void gameOverScene();
void instructionsScene();
void gameMenuScene();
void checkScene(int exitCondition);
void mainMenuScene();
void pauseScene();
void congratsScene();



