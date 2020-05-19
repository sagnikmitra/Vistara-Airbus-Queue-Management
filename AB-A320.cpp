//VISTARA BOARDING QUEUE Q-CODE FOR ECONOMY CLASS AIRBUS A320
//A C++ IMPLEMENTATION BY SAGNIK MITRA
#include <iostream>
using namespace std;
#define start_row_for_A320 7
int main(void)
{
    int s_row, i, j;
    char s_position;
    cout << "--------------------------------------------------------------------------------------------------------" << endl
         << "VISTARA AIRBUS A320 BOARDING Q-CODE GENERATION:" << endl
         << "--------------------------------------------------------------------------------------------------------" << endl;
    //TAKING SEAT NUMBER INPUT FROM USER OF ECONOMY CLASS
    cout << "Instructions for giving an input:" << endl
         << "--------------------------------------------------------------------------------------------------------" << endl
         << "For example, if your Seat Number is 23F, then" << endl
         << "On first query (i.e. Enter your Seat Row: ), you will give input 23 as per the demo seat number and" << endl
         << "On the second query (i.e. Enter your Seat Position: ), you will give input F as per the demo seat number" << endl
         << "Otherwise, you will get an Invalid Input Prompt." << endl
         << "The Seat Position Input is not case sensitive." << endl
         << "--------------------------------------------------------------------------------------------------------" << endl
         << "Enter your Seat Row [The Numeric Digit(s) on the left of your seat no.]: ";
    cin >> s_row;

    //INVALID SEAT ROW DETECTION
    if (s_row >= 1 && s_row <= 6)
    {
        cout << "\nYou're a Non-Economy Class Passenger, Q-Code Generation Process is for Economy Class Only." << endl
             << "Economy Class Seats at VISTARA AIRBUS A320 are ranged from 7A to 12F & 14A to 29F. Thank You.\n";
        exit(1);
    }

    else if (s_row < 1 || s_row > 29 || s_row == 13)
    {
        cout << "Invalid Seat Row. Economy Class Seats at VISTARA AIRBUS A320 range from 7A to 12F & 14A to 29F. Thank You.\n";
        exit(1);
    }
    cout << "Enter your Seat Position [The Alpha Character(s) on the right of your seat no.]: ";
    cin >> s_position;

    //INVALID SEAT POSITION DETERMINATION
    if (s_position != 'a' && s_position != 'b' && s_position != 'c' && s_position != 'd' && s_position != 'e' && s_position != 'f' && s_position != 'A' && s_position != 'B' && s_position != 'C' && s_position != 'D' && s_position != 'E' && s_position != 'F')
    {
        cout << "Invalid Seat Position. Economy Class Seats at VISTARA AIRBUS A320 range from 7A to 12F & 14A to 29F. Thank You.\n"
             << endl;
        exit(1);
    }
    //UPPERCASE UPDATION
    if (s_position == 'a')
        s_position = 'A';
    if (s_position == 'b')
        s_position = 'B';
    if (s_position == 'c')
        s_position = 'C';
    if (s_position == 'd')
        s_position = 'D';
    if (s_position == 'e')
        s_position = 'E';
    if (s_position == 'e')
        s_position = 'E';
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "Your Q-Code is: Q/" << s_row << s_position << "/";

    //GATE DETERMINATION
    if (s_row >= start_row_for_A320 && s_row <= 14)
    {
        cout << "G1";
    }
    if (s_row >= 15 && s_row <= 29)
    {
        cout << "G2";
    }
    cout << "/";

    //QCODE NUMERIC CHARACTER DETERMINATION
    if (s_row >= start_row_for_A320)
    {
        if (s_row <= 14)
        {
            if (s_row < 14)
            {
                if (s_position == 'A' || s_position == 'B' || s_position == 'C')
                {
                    int temp1 = (27 - (2 * s_row));
                    cout << temp1;
                }
                if (s_position == 'D' || s_position == 'E' || s_position == 'F')
                {
                    int temp2 = (28 - (2 * s_row));
                    cout << temp2;
                }
            }
            else if (s_row = 14) //WORKING FINE
            {
                if (s_position == 'A' || s_position == 'B' || s_position == 'C')
                {
                    int temp3 = (28 - (2 * s_row) + 1);
                    cout << temp3;
                }
                if (s_position == 'D' || s_position == 'E' || s_position == 'F')
                {
                    int temp4 = (28 - (2 * s_row) + 2);
                    cout << temp4;
                }
            }
        }
        else if (s_row >= 15 && s_row <= 29)
        {
            if (s_position == 'A' || s_position == 'B' || s_position == 'C')
            {
                int temp5 = ((2 * s_row) - 29);
                cout << temp5;
            }
            if (s_position == 'D' || s_position == 'E' || s_position == 'F')
            {
                int temp6 = ((2 * s_row) - 28);
                cout << temp6;
            }
        }
    }

    //Q-CODE ALPHA CHARACTER DETERMINATION
    if (s_position == 'A' || s_position == 'a' || s_position == 'F' || s_position == 'f')
        cout << "W";
    if (s_position == 'B' || s_position == 'b' || s_position == 'E' || s_position == 'e')
        cout << "M";
    if (s_position == 'C' || s_position == 'c' || s_position == 'D' || s_position == 'd')
        cout << "S";
    cout << endl
         << "--------------------------------------------------------------------------------------------------------" << endl
         << "Please maintain the queue to the Boarding Gate as per your generated Q-Code." << endl
         << "Thank You. Have a safe journey." << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl
         << "A C++ IMPLEMENTATION BY SAGNIK MITRA, B.TECH, CSBS, SNU." << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
}
