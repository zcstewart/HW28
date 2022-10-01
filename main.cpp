//Homework 28

/* 
 * Filename:        main.cpp
 * Purpose:         The purpose of this program is to define and implement the 
 *                  recursive function power.
 * Author:          Zachary Charles Stewart
 * Student ID:      105903414
 * Created on       March 20, 2017, 11:50 AM
 */

//Preprocessor Directives
#include <iostream>
#include <cstdlib>

//Namespace
using namespace std;

//--------------------------------------------------------------------------//

//Recursive function to determine the product of x raised to the power of y.
double power(int x, int y);

//--------------------------------------------------------------------------//
//Main Function
//
//Inputs:       int argc, char** argv
//Outputs:      int
//
//Purpose:      Main program file. Implements power(int, int) function
//              previously defined.

int main(int argc, char** argv) 
{
    //Declare variables for use in function
    int x, y;
    double answer;
    
    //Prompt user for input
    cout << "Enter the base number: " << endl;
    cout << "(Base number cannot be zero)" << endl;
    cin >> x;
    cout << "Enter the exponent: " << endl;
    cin >> y;
    
    //If x is invalid condition (0)
    if(x==0)
    {
        cout << "Come on man! Base number no zero cause math!";
        cout << endl;
        cout << "Terminating Program!" << endl;
        //Terminate program upon invalid input.
        exit(EXIT_FAILURE);
    }
    
    //Call power function using user input
    answer = power(x, y);
    
    //Display result in output terminal
    cout << "The result is: " << answer << endl;


    //Terminate program upon successful execution
    exit(EXIT_SUCCESS);
}

//--------------------------------------------------------------------------//

//Function      double power(int, int)
//
//Inputs:       int x, int y
//Outputs:      Return type double.
//Purpose:      The purpose of this function is to take two values passed in 
//              the formal parameter of the function. The first argument 
//              represents the base of the number. The second argument 
//              represents the exponent of the number. The base number cannot
//              be zero. This will be checked in the implementation in the 
//              main file. If the exponent is negative, the function will 
//              recursively determine the answer as if it was a positive 
//              exponent, and will return the inverse (one divided by the 
//              answer) of the answer.

double power(int x, int y)
{
    //Base Case     y == 0
    if(y == 0)
    {
        return 1;
    }
    //Base Case     y == 1
    else if(y==1)
    {
        return x;
    }
    //If y is a negative exponent, call power function with negative y.
    else if(y < 0)
    {
        return (1 / power(x, -y));
    }
    //If y is a positive exponent, call power function with decremented y.
    else
    {
        return x * power(x, y - 1);
    }
}
