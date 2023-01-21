#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

#include "validation.h" //this is for checking for printing

//main takes two inputs from the command
int main(int argc, char**argv)
{
    //this is how many rows there are
    const int height = 5;

    //first for loop for accessing each string stored in char**argv
    for(int n=1; n<argc; n++){
        cout << "string = " <<argv[n]<< endl;

        //second for loop is for printing each row
        for(int i=0; i<height; i++){

            //third loop for printing each row of each char from a string
            for (int k = 0; k < strlen(argv[n]); k++) {

                //if statement checks if the current char is an alphabet
                if(isalpha(argv[n][k])){
                    check_alphabet(argv,i,k,n);
                }

                //else if statement checks if the current char is a number
                else if(isdigit(argv[n][k])){
                    check_number(argv,i,k,n);
                }

                //if above if and else if statement condition not met
                //then current char in the string is a special character or a white space
                else{
                    check_punctuation(argv,i,k,n);
                }
            }

            //makes sure that the next row is printed below the previous row
            cout << "\n";
        }

        //this is so that the next string in a char**argv in printed in a new line
        cout << "\n";
    }

    return 0;
}
