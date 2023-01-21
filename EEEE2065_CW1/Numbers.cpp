#include <iostream>
using namespace std;

#include "Numbers.h"

const int height = 5; //the number of rows is 5
const int width = 4; //the width is 5 but the way this program is printing width is 5-1

void number_zero(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==4){
        cout << " ";
    }
    else{
        cout << "*";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 || i==4) && j!=3){
            cout <<"*";
        }
        else if (!(i==0 || i==4) && j==3){
            cout <<"*";
        }
        else if(i==2 && j==1){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_one(int i)
{
    //this is for first colomn of row int i
    if(i==4){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i!=4 && j==1){
            cout <<"*";
        }
        else if (i==4){
            cout <<"*";
        }
        else if(i==1 && j==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_two(int i)
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
        if (i==4){
            cout <<"*";
        }
        else if (i==0 && (j==0 || j==1)){
            cout <<"*";
        }
        else if((i==1 && j==2) || (i==2 && j==1) || (i==3 && j==0)){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_three(int i)
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
        if ((i==0 || i==4) && j!=3){
            cout <<"*";
        }
        else if (i==2 && (j==1 || j==2)){
            cout <<"*";
        }
        else if((i==1 || i==3) && j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_four(int i)
{
    //this is for first colomn of row int i
    if(i==3 || i==4){
        cout << " ";
    }
    else{
        cout << "*";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==2){
            cout <<"*";
        }
        else if ((i==0 || i==1 || i==3 || i==4) && j==2){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_five(int i)
{
    //this is for first colomn of row int i
    if(i!=3){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==0){
            cout <<"*";
        }
        else if ((i==2 || i==4) && j!=3){
            cout <<"*";
        }
        else if (i==3 && j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_six(int i)
{
    //this is for first colomn of row int i
    if(i==2 || i==3){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==2 || i==4) && j!=3){
            cout <<"*";
        }
        else if (i==0 && (j==1 || j==2)){
            cout <<"*";
        }
        else if ((i==1 && j==0) || (i==3 && j==3)){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_seven(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==4){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==0){
            cout <<"*";
        }
        else if ((i==1 && j==2) || (i==2 && j==1)){
            cout <<"*";
        }
        else if (i==3 && j==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_eight(int i)
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
        if ((i==0 || i==2 || i==4) && j!=3){
            cout <<"*";
        }
        else if ((i==1 || i==3) && j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void number_nine(int i)
{
    //this is for first colomn of row int i
    if(i==1){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i!=0 && j==3){
            cout <<"*";
        }
        else if ((i==0 || i==2) && j!=3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}


