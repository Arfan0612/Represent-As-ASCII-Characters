#include <iostream>
using namespace std;

#include "Punctuations.h"

const int height = 5; //the number of rows is 5
const int width = 4; //the width is 5 but the way this program is printing width is 5-1

void punctuation_exclamationMark(int i)
{
    //this is for first colomn of row int i
    cout << " ";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i!=3 && j==1){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_questionMark(int i)
{
    //this is for first colomn of row int i
    cout << " ";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 && j!=3) || (i==2 && (j==1 || j==2))){
            cout <<"*";
        }
        else if((i==1 && j==3) || (i==4 && j==1)){
            cout << "*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_hashtag(int i)
{
    //this is for first colomn of row int i
    if(i==1 || i==3){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==1 || i==3){
            cout <<"*";
        }
        else if((i==0 || i==2 || i==4) && (j==0 || j==2)){
            cout << "*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_asterisk(int i)
{
    //this is for first colomn of row int i
    if(i==1 || i==4){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==2 && j!=3){
            cout <<"*";
        }
        else if((i==1 || i==4) && j==3){
            cout << "*";
        }
        else if(i==3 && (j==0 || j==2)){
            cout << "*";
        }
        else if((i==0 || i==1) && j==1){
            cout << "*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_openroundbracket(int i)
{
    //this is for first colomn of row int i
    cout << " ";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==1 || i==2 || i==3) && j==2){
            cout <<"*";
        }
        else if((i==0 || i==4) && j==3){
            cout << "*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_closeroundbracket(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==4){
        cout <<"*";
    }
    else{
        cout <<" ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==1 || i==2 || i==3) && j==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_opensquarebracket(int i)
{
    //this is for first colomn of row int i
    cout << " ";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (j==2){
            cout <<"*";
        }
        else if((i==0 || i==4) && j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_closesquarebracket(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==4){
        cout <<"*";
    }
    else{
        cout <<" ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (j==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_comma(int i)
{
    //this is for first colomn of row int i
    if(i==3){
        cout <<"*";
    }
    else{
        cout <<" ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==3||i==4) && j==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void punctuation_period(int i)
{
    //this is for first colomn of row int i
    if(i==4){
        cout <<"*";
    }
    else{
        cout <<" ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        cout <<" ";
    }
}

void whitespace()
{
    //this is for first colomn of row int i
    cout << " ";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        cout << " ";
    }
}





