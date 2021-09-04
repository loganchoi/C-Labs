//Programmer: Logan Choi
//MST Username: lcmdk
//Instructor Name: Azhar
//Section: 304
//Date: 2/19/2020
//File: lab5.cpp
//Purpose: Guessing game for user.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{ srand(time(NULL));
  
  //Variables
  int menu_input;   //user inputs menu option.
  int comp_num;     // Computer random number
  int guess_num;    // user guesses number
  int numOfGuesses = 1;   // How many times the user has guessed
  bool win = false;       // Checks if the user has won or not

  //Constants
  const int MAX_GUESSES = 4; //Max amount of guesses the user can have
  const int OUTPUT_RULES = 1; // option 1 in menu
  const int PLAY = 2;         // Play game option
  const int QUIT = 3;        // quit option
  const int LOWER_LIMIT = 11; // lower limit range 
  const int UPPER_LIMIT = 20; //upper limit range

 //Welcome message
  cout << "WELCOME TO GUESSING GAME" << endl;

  //Switch case within do while loop until user inputs 3 to quit
  do
  {
    //resets the game with win as false and numOfGuesses = 1
    win = false;
    numOfGuesses = 1;

    //Prompt Menu
    cout << "Menu" << endl
         << "1. See Game Rules" << endl
         << "2. Play game" << endl
         << "3. Quit" << endl;
    cin >> menu_input;
    
    switch (menu_input)
    {  
       //Output rules if user inputs number 1
       case OUTPUT_RULES:
         cout << "You have to guess a number between 11 to 20 incluseive."
              << endl << "You have got 4 chances to guess it right to win."
              << endl;
         break;
       
       //This is the actual game
       case PLAY:
         comp_num = 10 + rand() % 10;           // limits the comp_num between 11 to 20 inclusive
         while (win == false && numOfGuesses <= MAX_GUESSES)
         {
            cout << "Guess a number between 11 to 20 inclusive" << endl;   //Asks for guessing a num
            cin >> guess_num;
            cout << "Attempt No " << numOfGuesses << ": " << guess_num << endl;
            if (guess_num < LOWER_LIMIT || guess_num > UPPER_LIMIT)    //if user inputs out of range
            {                                                          //the attempt is still taken however
               cout << "Please guess within range" << endl;            //program will output helpful hint
            }

            if (guess_num == comp_num)
            {
	       win = true;
               cout << "Congratulatiosn! You won the game!" << endl;   //You get win message when you guess right num
            }
            numOfGuesses += 1;  
         }
         if (win == false)                                              //Lost message
         {
            cout << "You lost...Better luck next time" << endl;
         }
         break;
       
       //Goodbye statement 
       case QUIT:
         cout << "Thanks for playing the game! Have a good day!" << endl;
         break;
       
       // If user does not pick a valid option aka (1,2,3) then it displays error message
       default:
        cout << "Invalid Option: Pick valid option number." << endl;
    }
  }while (menu_input != 3);

  return 0;
}


