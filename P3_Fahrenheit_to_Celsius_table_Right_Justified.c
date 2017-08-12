//This program prints a table with temperatures in Fahrenheit on the left ,
//and in Celsius on the right. 
//It is right justified unlike the previous one.

#include <stdio.h>

//Print Fahrenehit-celsius table for fahr = 0, 20, ..., 300.

int main()
{
    //DECLERATION:
    int Fahrenheit;
    int Celsius;
    int lower;
    int upper;
    int step;

    //ASIGNMENT:
    lower      = 0;
    upper      = 300;
    step       = 20;
    
    //DEPENDANT ASSIGMENT:
    Fahrenheit = lower;

//MAIN LOOP CALC & EXEC:
    while (Fahrenheit <= upper) {                     //A loop calculating Celsius from Fahrenheit then printing the result as a row of a table.
           Celsius = 5 * (Fahrenheit - 32) / 9;       //Calculate the Celsius depending on Fahrenheit.
	   printf("%3d\t%6d\n", Fahrenheit, Celsius); //Print a row of the table. %d stands for intersperse an int. %3d And %6d make the cell 3 and 6 cells wide respect.
	   Fahrenheit = Fahrenheit + step;            //Increment Fahrenheit with step. For the next row.
           }                                          //Loop back.
}

//END OF PROGRAM:
