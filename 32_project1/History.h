#ifndef History_h
#define History_h

#include <stdio.h>
#include "globals.h"

class History
{
  public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
    private:
    char h_mesa[MAXROWS][MAXCOLS];
    int m_Rows;
    int m_Cols;
   
};


#endif /* History_h */
