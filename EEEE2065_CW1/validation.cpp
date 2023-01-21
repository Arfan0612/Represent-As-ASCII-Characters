#include <iostream>
using namespace std;

#include "validation.h" //this header files contains what each input means for each function in 'validation'
#include "Alphabets.h" //this is for printing alphabet
#include "Numbers.h" //this is for printing number
#include "Punctuations.h" //this is for printing special numbers

void check_alphabet(char **check, int i, int k, int n){
    //if statements checks for the current char of the string
    //if the current char is a uppercase alphabet, then it passes one of the if or else if statement
    //then it calls the respective alphabet function and passes the current row to the alphabet function
    //if no conditions are met, whitespace function is executed
    // cout<< " "; is that so that there are a bit of spaces between each char when printing as an asterisk

    if(check[n][k] == 'A'){
        cout<< " ";
        alphabet_A(i);
    }
    else if(check[n][k] == 'B'){
        cout<< " ";
        alphabet_B(i);
    }
    else if(check[n][k] == 'C'){
        cout<< " ";
        alphabet_C(i);
    }
    else if(check[n][k] == 'D'){
        cout<< " ";
        alphabet_D(i);
    }
    else if(check[n][k] == 'E'){
        cout<< " ";
        alphabet_E(i);
    }
    else if(check[n][k] == 'F'){
        cout<< " ";
        alphabet_F(i);
    }
    else if(check[n][k] == 'G'){
        cout<< " ";
        alphabet_G(i);
    }
    else if(check[n][k] == 'H'){
        cout<< " ";
        alphabet_H(i);
    }
    else if(check[n][k] == 'I'){
        cout<< " ";
        alphabet_I(i);
    }
    else if(check[n][k] == 'J'){
        cout<< " ";
        alphabet_J(i);
    }
    else if(check[n][k] == 'K'){
        cout<< " ";
        alphabet_K(i);
    }
    else if(check[n][k] == 'L'){
        cout<< " ";
        alphabet_L(i);
    }
    else if(check[n][k] == 'M'){
        cout<< " ";
        alphabet_M(i);
    }
    else if(check[n][k] == 'N'){
        cout<< " ";
        alphabet_N(i);
    }
    else if(check[n][k] == 'O'){
        cout<< " ";
        alphabet_O(i);
    }
    else if(check[n][k] == 'P'){
        cout<< " ";
        alphabet_P(i);
    }
    else if(check[n][k] == 'Q'){
        cout<< " ";
        alphabet_Q(i);
    }
    else if(check[n][k] == 'R'){
        cout<< " ";
        alphabet_R(i);
    }
    else if(check[n][k] == 'S'){
        cout<< " ";
        alphabet_S(i);
    }
    else if(check[n][k] == 'T'){
        cout<< " ";
        alphabet_T(i);
    }
    else if(check[n][k] == 'U'){
        cout<< " ";
        alphabet_U(i);
    }
    else if(check[n][k] == 'V'){
        cout<< " ";
        alphabet_V(i);
    }
    else if(check[n][k] == 'W'){
        cout<< " ";
        alphabet_W(i);
    }
    else if(check[n][k] == 'X'){
        cout<< " ";
        alphabet_X(i);
    }
    else if(check[n][k] == 'Y'){
        cout<< " ";
        alphabet_Y(i);
    }
    else if(check[n][k] == 'Z'){
        cout<< " ";
        alphabet_Z(i);
    }
    else{
        cout<< " ";
        whitespace();
    }
}

void check_number(char **check, int i, int k, int n){
    //if statement checks for the matching number with the current char in the string
    //when the current char passes an if statement that means it matches a number of an if statement
    //then the current row int i will be passes to the respective number function to print out the number
    //otherwise, whitespace function is executed
    // cout<< " "; is that so that there are a bit of spaces between each char when printing as an asterisk

    if(check[n][k] == '0'){
        cout<< " ";
        number_zero(i);
    }
    else if(check[n][k] == '1'){
        cout<< " ";
        number_one(i);
    }
    else if(check[n][k] == '2'){
        cout<< " ";
        number_two(i);
    }
    else if(check[n][k] == '3'){
        cout<< " ";
        number_three(i);
    }
    else if(check[n][k] == '4'){
        cout<< " ";
        number_four(i);
    }
    else if(check[n][k] == '5'){
        cout<< " ";
        number_five(i);
    }
    else if(check[n][k] == '6'){
        cout<< " ";
        number_six(i);
    }
    else if(check[n][k] == '7'){
        cout<< " ";
        number_seven(i);
    }
    else if(check[n][k] == '8'){
        cout<< " ";
        number_eight(i);
    }
    else if(check[n][k] == '9'){
        cout<< " ";
        number_nine(i);
    }
    else{
        cout<< " ";
        whitespace();
    }
}

void check_punctuation(char **check, int i, int k, int n){
    //this if statement checks for some special characters
    //if a special character matches the one in the current char of the string, it will pass the if statement
    //then the it call the respective punctuation function and passes the row int i
    //otherwise, when none if statement passes, whitespace function will be executed
    // cout<< " "; is that so that there are a bit of spaces between each char when printing as an asterisk

    if(check[n][k] == '!'){
        cout<< " ";
        punctuation_exclamationMark(i);
    }
    else if(check[n][k] == '?'){
        cout<< " ";
        punctuation_questionMark(i);
    }
    else if(check[n][k] == '#'){
        cout<< " ";
        punctuation_hashtag(i);
    }
    else if(check[n][k] == '*'){
        cout<< " ";
        punctuation_asterisk(i);
    }
    else if(check[n][k] == '('){
        cout<< " ";
        punctuation_openroundbracket(i);
    }
    else if(check[n][k] == ')'){
        cout<< " ";
        punctuation_closeroundbracket(i);
    }
    else if(check[n][k] == '['){
        cout<< " ";
        punctuation_opensquarebracket(i);
    }
    else if(check[n][k] == ']'){
        cout<< " ";
        punctuation_closesquarebracket(i);
    }
    else if(check[n][k] == ','){
        cout<< " ";
        punctuation_comma(i);
    }
    else if(check[n][k] == '.'){
        cout<< " ";
        punctuation_period(i);
    }
    else{
        cout<< " ";
        whitespace();
    }
}
