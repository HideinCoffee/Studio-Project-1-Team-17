#ifndef _GAME_H
#define _GAME_H

#include "Framework\timer.h"
#include <string>
#include "Map.h"
#include "Global.h"
#include "Map.h"
#include "Rendermap.h"
#include "Rendercharacter.h"
#include "Rendertrap.h"
#include "Renderenemy.h"
#include "RenderUI.h"
#include "Mobs.h"
#include "player.h"
#include "misc.h"
#include "trap.h"

extern CStopWatch g_swTimer;
extern bool g_bQuitGame;

// struct to store keyboard events
// a small subset of KEY_EVENT_RECORD
struct SKeyEvent
{
    bool keyDown;
    bool keyReleased;
};

// struct to store mouse events
// a small subset of MOUSE_EVENT_RECORD
struct SMouseEvent
{
    COORD mousePosition;
    DWORD buttonState;
    DWORD eventFlags;
};

// Enumeration to store the control keys that your game will have
enum EKEYS
{
    K_UP,
    K_DOWN,
    K_LEFT,
    K_RIGHT,
    K_ESCAPE,
    K_SPACE,
    A_RIGHT,
    A_LEFT,
    A_UP,
    A_DOWN,
    K_TOTALCOUNT = 10,
    K_COUNT = 10
};

// Enumeration for the different screen states
enum class EGAMESTATES{
    S_SPLASHSCREEN,
    S_GAME,
    S_MAINMENU,
    S_YOUDIED,
    S_OPTIONS,
    S_QUIT,
    S_LEVEL1,
    S_TUTORIAL,
    S_RESTART,
    S_COUNT
   
};



enum class COLOR {
    BLACK = 0x00,
    LIGHTWHITE = 0xff,
    BLUE = 0x11,
    GREEN = 0x22,
    AQUA = 0x33,
    RED = 0x44,
    PURPLE = 0x55,
    YELLOW = 0x66,
    WHITE = 0x77,
    GRAY = 0x88,
    LIGHTBLUE = 0x99,
    LIGHTGREEN = 0xAA,
    LIGHTAQUA = 0xBB,
    LIGHTRED = 0xCC,
    LIGHTPURPLE = 0xDD,
    LIGHTYELLOW = 0XEE
};




void init        ( void );      // initialize your variables, allocate memory, etc
void getInput    ( void );      // get input from player
void update      ( double dt ); // update the game and the state of the game
void render      ( void );      // renders the current state of the game to the console
void shutdown    ( void );      // do clean up, free memory

void splashScreenWait();    // waits for time to pass in splash screen
void updateGame();          // gameplay logic

void processUserInput();    // checks if you should change states or do something else with the game, e.g. pause, exit
void clearScreen();         // clears the current screen and draw from scratch 
void renderSplashScreen();  // renders the splash screen
void renderGame();          // renders the game stuff
//void renderMap();           // renders the map to the buffer first

void renderFramerate();     // renders debug information, frame rate, elapsed time, etc
void renderToScreen();      // dump the contents of the buffer to the screen, one frame worth of game
void renderInputEvents();   // renders the status of input events

// keyboard and mouse input event managers
void keyboardHandler(const KEY_EVENT_RECORD& keyboardEvent);  // define this function for the console to call when there are keyboard events
void mouseHandler(const MOUSE_EVENT_RECORD& mouseEvent);      // define this function for the console to call when there are mouse events

void gameplayKBHandler(const KEY_EVENT_RECORD& keyboardEvent);   // handles keyboard events for gameplay 
void gameplayMouseHandler(const MOUSE_EVENT_RECORD& mouseEvent); // handles mouse events for gameplay 

void moveEnemy();   //either create a file for this or just somehow put it in enemy 


// player related
void moveCharacter();       // moves the character, collision detection, physics, etc
void shootcharacter();

// enemies related x

//map related
void trapshoot();

// bullet related
void renderbullet();

void checkcollision();
void checkstate();
void quitgame();



#endif // _GAME_H