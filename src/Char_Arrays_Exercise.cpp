//============================================================================
// Name        : Char_Arrays_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/****************************************************************
 * 	1-create a char string and output it.			*
 * 	2-output all the chars with a for loop			*
 * 	3-output all the chars with a 'while(true)' loop	*
 * 								*
 * **************************************************************/

int main()
    {
    char test[] = "Make It Now!";  		// 1

    cout << test << endl;

    cout << "" << endl;
    cout << "1--------------------------------------------1" << endl;
    cout << "" << endl;

    for (int k = 0; k < sizeof(test); k++) 	// 2
	{
	if (k < 10)
	    {
	    cout << "0" << flush;
	    }
	cout << k << ": " << test[k] << endl;
	}

    cout << "" << endl;
    cout << "2--------------------------------------------2" << endl;
    cout << "" << endl;

    int y = 0;

    while (true)				// 3
	{
	if (test[y] == 0)
	    {
	    break;
	    }

	cout << test[y] << flush;
	y++;

	}

    return 0;
    }
