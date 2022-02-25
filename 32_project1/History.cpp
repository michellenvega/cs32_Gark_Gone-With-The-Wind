#include "History.h"
#include <iostream>
using namespace std;


History::History(int nRows, int nCols)
{
    //obtain how many slots for our array
    m_Rows = nRows;
    m_Cols = nCols;
    
    //all slots start at 0, with the '.'
    for (int r = 0; r < m_Rows; r++)
        for (int c = 0; c < m_Cols; c++)
            h_mesa[r][c] = '.';
}

//notifies the History object that the player was at row r, column c when the player attacked a neighboring gark
bool History::record(int r, int c){
    //go back to previous slot to record
    r--;c--;
    //The function returns false if row r, column c is not within the Mesa
    if(r > m_Rows || c > m_Cols)
        return false;
    

    //if it has not reached the max yet, move to next letter
    if (h_mesa[r][c] == '.')
        h_mesa[r][c] = 'A';
    else if (h_mesa[r][c] != 'Z')
        h_mesa[r][c]++;

    //it returns true after recording what it needs to
    return true;
}

void History::display() const{
    //clear the screen
    clearScreen();
    
    //display the history grid
    //and write an empty line after the history grid
    for (int r = 0; r < m_Rows; r++){
        for (int c = 0; c < m_Cols; c++)
            cout << h_mesa[r][c];
        cout << '\n';
    }
    
    cout << endl;
}
