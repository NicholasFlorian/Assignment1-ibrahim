#include <string.h>
#include "board_generator.h"
#include <stdlib.h>

/**Verifies a word is on the game board
 *@pre      The gameBoard must be accurate and the word needs to be 4 letters long.
 *@return   1 or 0, 1 indicates the word was on the board, 0 indicates it wasnt.
 *@param    The gameboard, and the word the user wants to verify
 **/
int wordChecker(struct rolledDice **gameBoard, char *word);

/**Verifies a word is on the game board
 *@pre      The gameBoard must be accurate and the word needs to be 4 letters long.
 *@return   1 or 0, 1 indicates the word was on the board, 0 indicates it wasnt.
 *@param    The gameboard, and the word the user wants to verify
 **/
int abidesRules(int i, int j, char *word, struct rolledDice** gameBoard, int subLen, int **visited);

/**Function to get a letter on the boggle board
 *@pre      The coorinate of i and j must be a real value that exsists on the board.
 *@return   A char value, representing a letter on the boggle board
 *@param    i is an x cooridinate, j is the y coordinate, **char reps the boggle
 **/
char getLetter(int i, int j, struct rolledDice **gameBoard);

int testWordChecker(char **boggle, char *word);
int testAbidesRules(int i, int j, char *word, char **gameBoard, int subLen, int **visited);

/**Function to get a letter on the boggle board
 *@pre      The coorinate of i and j must be a real value that exsists on the board.
 *@return   A char value, representing a letter on the boggle board
 *@param    i is an x cooridinate, j is the y coordinate, **boggle reps the letter on the board
 **/
char testGetLetter(int i, int j, char **boggle);

int hcWordChecker(char boggle[][4], char *word);


int hcAbidesRules(int i, int j, char *word, char boggle[][4], int subLen, int **visited);

/**Function to get a letter on the boggle board
 *@pre      the coorinate of i and j must be a real value that exsists on the board. This function does not work.
 *@return   A char value, representing a letter on the boggle board
 *@param    i is an x cooridinate, j is the y coordinate, incorrect boogle coord.
 **/
char hcGetLetter(int i, int j, char boggle[][4]);


