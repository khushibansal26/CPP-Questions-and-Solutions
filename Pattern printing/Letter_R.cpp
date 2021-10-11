       // A program to print letter R exactly as shown below -


/*
##@@@     
##   @@@
##     @@@
##   @@@
##@@@
##  @@
##   @@
##    @@
##     @@

*/

#include <iostream>
using namespace std;
int main()
{
    int i, j;  //i denotes  no. of rows 
               //j denotes  no. of columns
    for (i = 0; i < 9; i++)  // here total no. of rows are 9
    {
        for (j = 0; j < 10; j++) //here total no. of columns are 10
        {
            if (j < 2)
                cout << "#";   // prints '#' when row = 0 to row= 9 and columns are 0 and 1
            else if ((i == 0 || i == 4) && (j == 2 || j == 3 || j == 4))
                cout << "@";          //prints '@' when either row is 0 or 4 and column are 2 or 3 or 4
            else if ((i == 1 || i == 3) && (j == 5 || j == 6 || j == 7))
                cout << "@";         //prints '@' when either row is 1 or 3 and column are 5 or 6 or 7
            else if (i == 2 && (j == 7 || j == 8 || j == 9))
                cout << "@";        //prints '@' when row is 2 and column is 7 or 8 or 9
            else if (i == 5 && (j == 4 || j == 5))
                cout << "@";       //prints '@' when row is 5 and column is 4 or 5
            else if (i == 6 && (j == 5 || j == 6))
                cout << "@";    //prints '@' when row is 6 and column is 5 or 6
            else if (i == 7 && (j == 6 || j == 7))
                cout << "@";//prints '@' when row is 7 and column is 6 or 7
            else if (i == 8 && (j == 7 || j == 8))
                cout << "@";//prints '@' when row is 8 and column is 7 or 8
            else if (i == 9 && (j == 8 || j == 9))
                cout << "@";//prints '@' when row is 9 and column is 8 or 9
            else
                cout << " ";    // prints a whitespace at places where characters are not printed.
        }
        cout << endl;           //prints newline at the end of each row
    }

    return 0;
}
