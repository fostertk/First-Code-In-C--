/* Name: Foster Thompson Kearfott
Date: 06/15/2020
Section: Section 4
Assignment: Homework 3: Letters
Due Date: 06/17/2020
About this project: Program 2 - Letters.
Printing ASCII art - Printing 'SUZ'

All work below was performed by Foster Thompson Kearfott*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    /* Printing z
     * Deriving a formula
     *          // row 0: *******
     *           // row 1: 5 spaces * 1 space
     *          // row 2: 4 spaces * 2 space
     *         // row 3: 3 spaces * 3 spaces
     *         // row 4: 2 spaces * 4 spaces
     *         // row 5: 1 spaces * 5 spaces
     *           // row 6: *******
     *
     * 1.
     * 2.
     *  2.b
     *      2.b.1
     *
     * * Deriving a formula
     *           // row 0: *******
     *           // row 1: 5 spaces * 1 space
     *              // row 2: 4 spaces * 2 space
     *          // row 3: 3 spaces * 3 spaces
     *           // row 4: 2 spaces * 4 spaces
     *            // row 5: 1 spaces * 5 spaces
     *           // row 6: *******
     *
     * 1.
     * 2.
     *  2.b
     *      2.b.1
     *
     *  * Deriving a formula
     *       *******    // row 0: *******
     *            *     // row 1: 5 spaces * 1 space
     *           *      // row 2: 4 spaces * 2 space
     *          *       // row 3: 3 spaces * 3 spaces
     *         *        // row 4: 2 spaces * 4 spaces
     *        *         // row 5: 1 spaces * 5 spaces
     *       *******    // row 6: *******
     *
     * 1. The first and last rows have 7 *
     * 2. if it's first or last row, print 7 *
     *  2.b otherwise, each row needs spaces and a *
     *      2.b.1 the * need to be descending order left to right
     *
     */

    int size;
    char letter;

    // Accepting the size of the letter from the user, error if the number is less than 5 or is even.
    // if it is less than 5 or is odd, it will ask user to input size again in the while loop.
    cout << "Enter the size of the letter, the size should be an odd number greater than 4: " << endl;
    cin >> size;

    while(true)
    {
        if ((size < 5) && (size % 2 == 0))
        {
            cout << "Error: This number should be an odd number greater than or equal to 5. "
                    "Please enter an odd number over 5: " << endl;
            cin >> size;

        }
        if (size < 5)
        {
            cout << "Error: This number should be an number greater than or equal to 5. "
                    "Please enter an number over 5: " << endl;
            cin >> size;

        }
        if (size % 2 == 0)
        {
            cout << "Error: this number is an even number. "
                    "Please enter an odd number: " << endl;
            cin >> size;

        }
        else break;
    }

    // Accepting the letter to be printed from the user.
    cout << "Enter the letter, it has to be capital." << endl;
    cin >> letter;

    while(true)
    {
        if (islower(letter))
        {
            cout << "Error: You entered a lower case letter. "
                    "Please enter the valid letter with the correct capitalization:" << endl;
            cin >> letter;


        }
        if ((letter == 's') || (letter == 'u') || (letter == 'z'))
        {
            cout << "Error: You entered a valid letter, but it is not capital please enter S or U or Z in the correct capitalization. "
                    "Please enter a capital valid letter: " << endl;
            cin >> letter;

        }
        if ((letter == 'S') || (letter == 'U') || (letter == 'Z'))
        {
            break;
        }
        else
        cout << "Letter is not S or U or Z, please enter S or U or Z. "
                "Please enter a valid Letter:" << endl;
        cin >> letter;
    }


    // Selecting which letter to show in ASCII art
    switch(letter)
    {
        case 'S':
            cout << "it worked" << endl;
            break;

        case 'U':

            cout << "it worked" << endl;
            break;

        case 'Z':
            for (int r = 0; r < size; r++) {
                if (r == 0 || r == size - 1) {
                    for (int c = 0; c < size; c++) // first and last row
                    {
                        cout << "*";
                    }
                } else                               // All the other rows
                {
                    cout << " ";
                    for (int c = size; c < r - 1; c--) {
                        cout << " ";
                    }

                    cout << "*";
                    for (int i = size - 2; i < size - 1 - r; i++) {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;


    }


    return 0;
}
