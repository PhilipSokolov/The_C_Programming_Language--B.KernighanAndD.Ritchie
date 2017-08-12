//This program prints a table with temperatures in Fahrenheit on the left ,
//and in Celsius on the right. 
//Using Floats

#include <stdio.h>

//Print Fahrenehit-celsius table for fahr = 0, 20, ..., 300.

int main()
{
    //DECLERATION:
    float Fahrenheit;                                      //Fahrenheit
    float Celsius;                                         //Celsius
    float lower_bound;                                     //The lower bound of our range
    float upper_bound;                                     //The upper bound of our range
    float step;                                            //The step we will increment with, at the end of the loop.

    //ASIGNMENT:
    lower_bound      = 0.0;                                //Asign lower_bound the value of 0.0, which means the loop will run from 0.0 to upper_bound.
    upper_bound      = 300.0;                              //Asign upper_bound the value of 300.0, which means the loop will run from lower_bound to 300.
    step             = 20.0;                               //Asign step the value of 20.0. which means the loop will increment with 20. every time.
    
    //DEPENDANT ASSIGMENT:
    Fahrenheit = lower_bound;                              //Asign lower_bound to Fahrenheit so we can use it both as counter and its intended use.

//MAIN LOOP CALC & EXEC:
    while (Fahrenheit <= upper_bound) {                    //A loop calculating Celsius from Fahrenheit then printing the result as a row of a table.
           Celsius = (5.0/9.0)  * (Fahrenheit - 32.0);     //Calculate the Celsius depending on Fahrenheit.
	   printf("%3.0f\t%6.3f\n", Fahrenheit, Celsius);  //Print a row of the table. %f stands for intersperse an float.
	   Fahrenheit = Fahrenheit + step;                 //Increment Fahrenheit with step. For the next row.
           }                                               //Loop back.
    
    return 0;                                              //Exit program.
}

//END OF PROGRAM:
