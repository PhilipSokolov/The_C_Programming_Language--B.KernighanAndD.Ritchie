//This program prints a table with temperatures in Fahrenheit on the left ,
//and in Celsius on the right. 

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
    while (Fahrenheit <= upper) {                   //A loop calculating Celsius from Fahrenheit then printing the result as a row of a table.
           Celsius = 5 * (Fahrenheit - 32) / 9;     //Calculate the Celsius depending on Fahrenheit.
	   printf("%d\t%d\n", Fahrenheit, Celsius); //Print a row of the table. %d stands for intersperse an int.
	   Fahrenheit = Fahrenheit + step;          //Increment Fahrenheit with step. For the next row.
           }                                        //Loop back.
}

//END OF PROGRAM
