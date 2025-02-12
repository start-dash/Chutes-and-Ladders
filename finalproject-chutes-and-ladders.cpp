#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void RecallTable(int player1Move,int player2Move){
   const int NUM_VALS = 41;
   vector<string> tile(NUM_VALS);
   tile.at(0) = "1";
   tile.at(1) = "2";
   tile.at(2) = "3";
   tile.at(3) = "4";
   tile.at(4) = "5";
   tile.at(5) = "6";
   tile.at(6) = "7";
   tile.at(7) = "8";
   tile.at(8) = "9";
   tile.at(9) = "10";
   tile.at(10) = "11";
   tile.at(11) = "12";
   tile.at(12) = "13";
   tile.at(13) = "14";
   tile.at(14) = "15";
   tile.at(15) = "16";
   tile.at(16) = "17";
   tile.at(17) = "18";
   tile.at(18) = "19";
   tile.at(19) = "20";
   tile.at(20) = "21";
   tile.at(21) = "22";
   tile.at(22) = "23";
   tile.at(23) = "24";
   tile.at(24) = "25";
   tile.at(25) = "26";
   tile.at(26) = "27";
   tile.at(27) = "28";
   tile.at(28) = "29";
   tile.at(29) = "30";
   tile.at(30) = "31";
   tile.at(31) = "32";
   tile.at(32) = "33";
   tile.at(33) = "34";
   tile.at(34) = "35";
   tile.at(35) = "36";
   tile.at(36) = "37";
   tile.at(37) = "38";
   tile.at(38) = "39";
   tile.at(39) = "40";
   
   if(player1Move > 0){tile.at(player1Move-1) = "*P1*";}
   if(player2Move > 0){tile.at(player2Move-1) = "*P2*";}
   if ((player1Move > 0) && (player2Move > 0)){
   if (player1Move == player2Move) {tile.at(player2Move -1 ) = "*P1**P2*";}}
    cout <<  "\t" <<tile.at(32)<<"\t " << tile.at(33)<< "C" << "\t " << tile.at(34)<<  "\t " << tile.at(35) << "\t " << tile.at(36) << "\t " << tile.at(37) << "\t " << tile.at(38) << "C" <<  "\t " << tile.at(39) << "\t " << "Finish" << endl; 
    cout <<  "\t" <<tile.at(31)<<"\t " << tile.at(30)<<"\t " << tile.at(29)<<"\t " << tile.at(28) << "L" <<  "\t " << tile.at(27) << "C" <<  "\t " << tile.at(26) << "L" << "\t " << tile.at(25) << "\t " << tile.at(24) << "\t " << endl;   
    cout <<  "\t" <<tile.at(16)<<"\t " << tile.at(17)<<"\t " << tile.at(18)<< "C" << "\t " << tile.at(19) << "\t " << tile.at(20) << "\t " << tile.at(21) << "\t " << tile.at(22) << "L" << "\t "  << tile.at(23)  << "\t " << endl;
    cout <<  "\t" <<tile.at(15)<< "L" << "\t " << tile.at(14)<<"\t " << tile.at(13) << "\t " << tile.at(12) << "\t " << tile.at(11) << "L" << "\t " << tile.at(10)  << "\t " << tile.at(9) << "C" << "\t " << tile.at(8) << "\t " << endl; 
    cout << "Start" << "\t" << tile.at(0)<<"\t " << tile.at(1)<<"\t " << tile.at(2)<<"\t " << tile.at(3) << "L" << "\t " << tile.at(4) << "\t " << tile.at(5) << "\t " << tile.at(6) << "\t " << tile.at(7) << "\t " << endl;
} // board display

int LaddersAndChutesPlayer1 (int player1Move) {
    if (player1Move == 4){cout << "Congratulations, you are moving up from tile 4 to tile 12!" << endl; player1Move = 12;}
    else if (player1Move == 12){cout << "Congratulations, you are moving up from tile 12 to tile 20!" << endl; player1Move = 20;}
    else if (player1Move == 16){cout << "Congratulations, you are moving up from tile 16 to tile 18!" << endl; player1Move = 18;}
    else if (player1Move == 23){cout << "Congratulations, you are moving up from tile 23 to tile 25!" << endl; player1Move = 25;}  //ladders for player 1  
    else if (player1Move == 27){cout << "Congratulations, you are moving up from tile 27 to tile 38!" << endl; player1Move = 38;}
    else if (player1Move == 29){cout << "Congratulations, you are moving up from tile 29 to tile 35!" << endl; player1Move = 35;}
    else if (player1Move == 10){cout << "Sorry, you are moving down from tile 10 to tile 8." << endl; player1Move = 8;}
    else if (player1Move == 19){cout << "Sorry, you are moving down from tile 19 to tile 15." << endl; player1Move = 15;}
    else if (player1Move == 28){cout << "Sorry, you are moving down from tile 28 to tile 11." << endl; player1Move = 11;}  // chutes for player 1
    else if (player1Move == 34){cout << "Sorry, you are moving down from tile 34 to tile 17." << endl; player1Move = 17;}
    else if (player1Move == 39){cout << "Sorry, you are moving down from tile 39 to tile 22." << endl; player1Move = 22;}
    else {cout << "No ladders or chutes were found." << endl << endl; player1Move = player1Move;}
return player1Move;}

int LaddersAndChutesPlayer2(int player2Move){
    if (player2Move == 4){cout << "Congratulations, you are moving up from tile 4 to tile 12!" << endl; player2Move = 12;} 
    else if (player2Move == 12){cout << "Congratulations, you are moving up from tile 12 to tile 20!" << endl; player2Move = 20;}
    else if (player2Move == 16){cout << "Congratulations, you are moving up from tile 16 to tile 18!" << endl; player2Move = 18;} // ladders for player 2 
    else if (player2Move == 23){cout << "Congratulations, you are moving up from tile 23 to tile 25!" << endl; player2Move = 25;}
    else if (player2Move == 27){cout << "Congratulations, you are moving up from tile 27 to tile 38!" << endl; player2Move = 38;}
    else if (player2Move == 29){cout << "Congratulations, you are moving up from tile 29 to tile 35!" << endl; player2Move = 35;}
    else if (player2Move == 10){cout << "Sorry, you are moving down from tile 10 to tile 8." << endl; player2Move = 8;}
    else if (player2Move == 19){cout << "Sorry, you are moving down from tile 19 to tile 15." << endl; player2Move = 15;}
    else if (player2Move == 28){cout << "Sorry, you are moving down from tile 28 to tile 11." << endl; player2Move = 11;}  //chutes for player 2 
    else if (player2Move == 34){cout << "Sorry, you are moving down from tile 34 to tile 17." << endl; player2Move = 17;}
    else if (player2Move == 39){cout << "Sorry, you are moving down from tile 39 to tile 22." << endl; player2Move = 22;}
    else {cout << "No ladders or chutes were found." << endl << endl; player2Move = player2Move;}
return player2Move;}

int hiddenQplayer1(int player1Move){
    int roll, rollDice;
    string answer, cMath, output;
    
    if (player1Move == 7){
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
        cout << "Since you're in this tile, you'll be asked a question and if you answer it correctly, you'll get a chance to roll again!" << endl << endl;
        cout << "The question is: What is used to initialize a decimal?" << endl; 
        cin >> answer;
        if ((answer == "double")||(answer == "Double")||(answer == "DOUBLE")){
            cout << endl << "That is correct!" << endl<< "You get to roll again!" << endl << endl;
            cout << "Enter any number to roll the dice: ";
            cin >> rollDice;
            roll = ((rand() % 6) +1); // roll the dice for player 1
            cout << "You got: " << roll << endl << endl << "You’re moving to: ";   // hidden question for tile 7 player 1
            player1Move = roll + player1Move;
            cout << player1Move << endl << "Checking for ladders and chutes... " << endl;
            player1Move = LaddersAndChutesPlayer1(player1Move);}
        else { cout << endl << "Sorry! Wrong answer!" << endl << endl;
               cout << "The answer is: double" << endl;
        }
    }
    if (player1Move == 24){
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
        cout << "Since you're in this tile, you'll be asked a question and if you answer it correctly, you'll get a chance to roll again!" << endl << endl;
        cout << "The question is: What is the output of this code?" << endl << "x = 3;" << endl;
        cout << "y = 10;" << endl;
        cout << "while (y >= x) {" << endl;  // hidden question for tile 24 player 1
        cout << "\t" << "cout << y <<" << " " ";" << endl;
        cout << "\t" << "y = y - x;" << endl;
        cout << "}" << endl << "Answer: ";
        getline(cin, output);
        getline(cin, output);
        if (output == "10 7 4 "){
            cout << endl << "That is correct!" << endl << "You get to roll again!" << endl << endl;
            cout << "Enter any number to roll the dice: ";
            cin >> rollDice;
            roll = ((rand() % 6) +1); // roll the dice for player 1
            cout << "You got: " << roll << endl << endl << "You’re moving to: ";
            player1Move = roll + player1Move;
            cout << player1Move << endl << "Checking for ladders and chutes... " << endl;
            player1Move = LaddersAndChutesPlayer1(player1Move);}
        else { cout << endl << "Sorry! Wrong answer!" << endl << endl;
               cout << "The answer is: 10 7 4               // with space at the end. " << endl;
        }
    }
    
    if (player1Move == 37){
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
        cout << "Since you're in this tile, you'll be asked a question and if you answered it correctly, you'll get a chance to roll again!" << endl << endl;
        cout << "The question is: What library is needed for math equations? For example: Square roots." << endl;
        cout << "Hint: Write the answer with <>" << endl << "Answer: ";
        cin >> cMath;
        if (cMath == "<cmath>"){
            cout << endl << "That is correct!" << endl<< "You get to roll again!" << endl << endl;
            cout << "Enter any number to roll the dice: ";
            cin >> rollDice;
            roll = ((rand() % 6) +1); // roll the dice for player 1         
            cout << "You got: " << roll << endl << endl << "You’re moving to: ";     // hidden question for tile 37 for player 1
            player1Move = roll + player1Move;
            cout << player1Move << endl << "Checking for ladders and chutes... " << endl;
            player1Move = LaddersAndChutesPlayer1(player1Move);}
        else { cout << endl << "Sorry! Wrong answer!" << endl << endl;
               cout << "The answer is: <cmath>" << endl;
        }
    }
return player1Move;}
int hiddenQplayer2(int player2Move){
    int roll, rollDice;
    string answer, cMath, output;
    
    if (player2Move == 7){
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
        cout << "Since you're in this tile, you'll be asked a question and if you answered it correctly, you'll get a chance to roll again!" << endl << endl;
        cout << "The question is: What is used to initialize a decimal?" << endl; 
        cin >>  answer;
        if ((answer == "double")||(answer == "Double")||(answer == "DOUBLE")){
            cout << endl << "That is correct!" << endl<< "You get to roll again!" << endl << endl;
            cout << "Enter any number to roll the dice: ";
            cin >> rollDice;
            roll = ((rand() % 6) +1); // roll the dice for player 1
            cout << "You got: " << roll << endl << endl << "You’re moving to: ";   // hidden question for tile 7 player 2 
            player2Move = roll + player2Move;
            cout << player2Move << endl << "Checking for ladders and chutes... " << endl;
            player2Move = LaddersAndChutesPlayer2(player2Move);}
        else { cout << endl << "Sorry! Wrong answer!" << endl << endl;
               cout << "The answer is: double" << endl;
        }
    }
    if (player2Move == 24){
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
        cout << "Since you're in this tile, you'll be asked a question and if you answered it correctly, you'll get a chance to roll again!" << endl << endl;
        cout << "The question is: What is the output of this code?" << endl << "x = 3;" << endl;
        cout << "y = 10;" << endl;
        cout << "while (y >= x) {" << endl;
        cout << "\t" << "cout << y <<" << " " ";" << endl;
        cout << "\t" << "y = y - x;" << endl;
        cout << "}" << endl << "Answer: ";
        getline(cin, output);
        getline(cin, output);
        if (output == "10 7 4 "){
            cout << endl << "That is correct!" << endl<< "You get to roll again!" << endl << endl; // hidden question for tile 24 player 2 
            cout << "Enter any number to roll the dice: ";
            cin >> rollDice;
            roll = ((rand() % 6) +1); // roll the dice for player 1
            cout << "You got: " << roll << endl << endl << "You’re moving to: ";
            player2Move = roll + player2Move;
            cout << player2Move << endl << endl << "Checking for ladders and chutes... " << endl;
            player2Move = LaddersAndChutesPlayer2(player2Move);}
        else { cout << endl << "Sorry! Wrong answer!" << endl << endl;
               cout << "The answer is: 10 7 4               // with space at the end. " << endl;
        }
    }
    
    if (player2Move == 37){
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
        cout << "Since you're in this tile, you'll be asked a question and if you answered it correct, you'll get a chance to roll again!" << endl << endl;
        cout << "The question is: What library is needed for math equations? For example: Square roots." << endl;
        cout << "Hint: Write the answer with <>" << endl << "Answer: ";
        cin >> cMath;
        if (cMath == "<cmath>"){
            cout << endl << "That is correct!" << endl<< "You get to roll again!" << endl << endl;
            cout << "Enter any number to roll the dice: ";
            cin >> rollDice;
            roll = ((rand() % 6) +1); // roll the dice for player 1
            cout << "You got: " << roll << endl << endl << "You’re moving to: ";
            player2Move = roll + player2Move;
            cout << player2Move << endl << endl << "Checking for ladders and chutes... " << endl;  // hidden question for tile 37 player 2 
            player2Move = LaddersAndChutesPlayer2(player2Move);}
        else { cout << endl << "Sorry! Wrong answer!" << endl << endl;
               cout << "The answer is: <cmath>" << endl;
        }
    }
return player2Move;} // IF THEY DON’T GET EXACT AMOUNT OF TILES THEN DON’T ASK THE QUESTION AGAIN*


int main() {
    int roll, player1Move, player2Move, rollDice = 0;
    string playerName1;
    string playerName2;  
    
    cout << "Game Started!" << endl << "Player 1: Please enter your name: ";
    cin >> playerName1;
    cout << "Player 2: Please enter your name: ";
    cin >> playerName2;
    cout << endl << "Welcome " << playerName1 << " and " << playerName2 << "." << endl;
    
    srand(time(0));
    
    while ((player1Move != 40) && (player2Move != 40)){
        cout << endl << endl << endl;
        cout << "______________________________________________________________________________________" << endl;
        RecallTable(player1Move,player2Move);
        cout << "______________________________________________________________________________________" << endl << endl << playerName1 <<": It's your turn!" << endl << "Enter any number to roll the dice: ";
        cin >> rollDice;
        roll = ((rand() % 6) +1); // roll the dice for player 1
        cout << "You got: " << roll << endl << endl << "You’re moving to: ";
        player1Move = roll + player1Move;
        cout << player1Move << endl;
        if (player1Move > 40){player1Move = 40 - roll;
        cout << " Keep rolling until you get 40!" << endl << endl;}
        cout << "Checking for ladders and chutes... ";
        player1Move = LaddersAndChutesPlayer1(player1Move);
        player1Move = hiddenQplayer1(player1Move);
        if (player1Move > 40){player1Move = 40 - roll;
        cout << " Keep rolling until you get 40!" << endl << endl;}
        cout << endl << "You're now in: " << player1Move << endl;
        if (player1Move == 40){cout << endl << playerName1 << " won the game!" << endl; break;}
        cout << endl << endl << endl;
        cout << "______________________________________________________________________________________" << endl;
        RecallTable(player1Move,player2Move);
        cout << "______________________________________________________________________________________" << endl << endl << playerName2 << ": It's your turn!" << endl << "Enter any number to roll the dice: ";
        cin >> rollDice;
        roll = ((rand() % 6) +1); // roll the dice for player 2
        cout << "You got: " << roll << endl << endl << "You’re moving to: ";
        player2Move = roll + player2Move;
        cout << player2Move << endl;
        if (player2Move > 40){player2Move = 40 - roll;
        cout << " Keep rolling until you get 40!" << endl << endl;}
        cout << "Checking for ladders and chutes... ";
        player2Move = LaddersAndChutesPlayer2(player2Move);
        player2Move = hiddenQplayer2(player2Move);
        if (player2Move > 40){player2Move = 40 - roll;
        cout << " Keep rolling until you get 40!" << endl << endl;}
        cout << endl << "You're now in: " << player2Move << endl;
        if (player2Move == 40){cout << endl << playerName2 << " won the game!" << endl; break;}
        }
return 0;
}
