#include <iostream>
using namespace std;

#include "Alphabets.h"

const int height = 5; //the number of rows is 5
const int width = 4; //the width is 5 but the way this program is printing width is 5-1

void alphabet_A(int i)
{
    //this is for first colomn of row int i
    if(i==3 || i==4 || i==2){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==0 && j==1){
            cout <<"*";
        }

        else if (i==1 && (j==0 || j==2)){
            cout <<"*";
        }
        else if(i==2 || ((i==3 || i==4) && j==3)){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_B(int i)
{
    //this is for first colomn of row int i
    cout <<"*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        //this is for where 0, 2 and 4
        if ((i == 0 || i == height-1 || i == 2) && j!=3){
            cout <<"*";
        }
        //the opposite of the above if statement and when it is the last width
        else if (j == 3 && !(i == 0 || i == height-1 || i == 2)){
            cout <<"*";
        }

        else{
            cout <<" ";
        }
    }
}

void alphabet_C(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==4){
        cout <<" ";
    }
    else{
        cout << "*";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i == 0 || i == width) && j!=3)
            cout << "*";
        else if(j == 3 && !(i == 0 || i == width || i == 2)){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
}

void alphabet_D(int i)
{
    //this is for first colomn of row int i
    cout << "*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i == 0 || i == width) && j < width-1){
            cout << "*";
        }

        else if (j == width - 1 && (i != 0 && i != width)){
            cout <<"*";
        }

        else{
            cout <<" ";
        }
    }
}

void alphabet_E(int i)
{
    //this is for first colomn of row int i
    cout <<"*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i == 0 || i == height - 1) || (i == 2 && j <= 2)){
            cout <<"*";
        }

        else{
            cout << " ";
        }
    }
}

void alphabet_F(int i)
{
    //this is for first colomn of row int i
    cout << "*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i == 0) || (i == 2 && j <= 2)){
            cout << "*";
        }

        else{
            cout << " ";
        }
    }
}

void alphabet_G(int i)
{
    //this is for first colomn of row int i
    if(i==4 || i==0){
        cout << " ";
    }
    else{
        cout << "*";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 && j!=3) || i==4){
            cout <<"*";
        }
        else if (i==2 && j!=0){
            cout <<"*";
        }
        else if(i==3 && (j==2 || j==3)){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_H(int i)
{
    //this is for first colomn of row int i
    cout <<"*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((j == 3) || (i == 2)){
            cout <<"*";
        }

        else{
            cout <<" ";
        }
    }
}

void alphabet_I(int i)
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
        if (i==0 || i==4){
            cout <<"*";
        }
        else if(j==1){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_J(int i)
{
    //this is for first colomn of row int i
    if(i==0){
        cout <<"*";
    }
    else{
        cout <<" ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==0){
            cout <<"*";
        }
        else if(i!=4 && j==2){
            cout <<"*";
        }
        else if((i==3 && j==0) || (i==4 && j==1)){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_K(int i)
{
    //this is for first colomn of row int i
    cout << "*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 || i==4) && (j==2 || j==3)){
            cout <<"*";
        }
        else if ((i==1 || i==3) && j==1){
            cout <<"*";
        }
        else if(i==2 && j==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_L(int i)
{
    //this is for first colomn of row int i
    cout <<"*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i == height - 1){
            cout <<"*";
        }

        else{
            cout <<" ";
        }
    }
}

void alphabet_M(int i)
{
    //this is for first colomn of row int i
    cout << "*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==1 && (j==0||j==2)){
            cout <<"*";
        }

        else if (i==2 && j==1){
            cout <<"*";
        }
        else if(j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_N(int i)
{
    //this is for first colomn of row int i
    cout <<"*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (j == width-1){
            cout <<"*";
        }

        else if ((i==1 && j==0) || (i==2 && j==1) || (i==3 && j==2)){
            cout <<"*";
        }

        else{
            cout <<" ";
        }
    }
}

void alphabet_O(int i)
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
        if ((i == 0 && j!=width-1) || (i == height-1 && j!=width-1)){
            cout <<"*";
        }

        else if((i>0 && i<height-1) && j==width-1){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_P(int i)
{
    //this is for first colomn of row int i
    cout << "*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ( (i==0 || i == 2) && j!=width-1 )
            cout <<"*";
        else if(i==1 && j==width-1){
            cout <<"*";
        }
        else
            cout <<" ";
    }
}

void alphabet_Q(int i)
{
    //this is for first colomn of row int i
    if(i == 0 || i==4){
        cout << " ";
    }
    else{
        cout << "*";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 && j<2) || (i==4 && j!=2) || (i==2 && j!=0 && j!=3)){
            cout <<"*";
        }

        else if((i==1 && j==2) || (i==3 && j==2)){
            cout <<"*";
        }
        else{
            cout <<" ";
        }

    }
}

void alphabet_R(int i)
{
    //this is for first colomn of row int i
    cout << "*";

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 || i==2) && j!=3){
            cout <<"*";
        }
        else if ((i==1 || i==4) && j==3){
            cout <<"*";
        }
        else if(i==3 && j==2){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_S(int i)
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
        if (i==0 || ((i==4 || i==2) && j!=3)){
            cout <<"*";
        }

        else if(i==3 && j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
}

void alphabet_T(int i)
{
    //this is for first colomn of row int i
    if(i==0){
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

        else if(i!=0 && j==1){
            cout <<"*";
        }
        else{
            cout <<" ";
        }

    }
}

void alphabet_U(int i)
{
    //this is for first colomn of row int i
    if(i!=4){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i==4 && j!=3){
            cout <<"*";
        }

        else if(i!=4 && j==3){
            cout <<"*";
        }
        else{
            cout <<" ";
        }

    }
}

void alphabet_V(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==1 || i==2){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 || i==1 || i==2) && j==3){
            cout <<"*";
        }

        else if(i==3 && (j==0 || j==2)){
            cout <<"*";
        }
        else if(i==4 && j==1){
            cout <<"*";
        }
        else{
            cout << " ";
        }

    }
}

void alphabet_W(int i)
{
    //this is for first colomn of row int i
    if(i!=4){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if (i!=4 && (j==1 || j==3)){
            cout <<"*";
        }

        else if(i==4 && (j==0 || j==2)){
            cout <<"*";
        }
        else{
            cout << " ";
        }
    }
}

void alphabet_X(int i)
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
        if ((i==0 || i==4) && j==3){
            cout <<"*";
        }

        else if((i==1 || i==3) && (j==0 || j==2)){
            cout <<"*";
        }
        else if(i==2 && j==1){
            cout << "*";
        }
        else{
            cout<< " ";
        }

    }
}

void alphabet_Y(int i)
{
    //this is for first colomn of row int i
    if(i==0 || i==1){
        cout << "*";
    }
    else{
        cout << " ";
    }

    //this for loop will print the remaining 4 colomn (2nd, 3rd, 4th, 5th colomn)
    for (int j = 0; j < width; j++) {
        if ((i==0 || i==1) && j==3){
            cout <<"*";
        }
        else if(i==2 && (j==0 || j==2)){
            cout <<"*";
        }
        else if((i==3 && j==1) || (i==4 && j==0)){
            cout << "*";
        }
        else{
            cout<< " ";
        }

    }
}

void alphabet_Z(int i)
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
        if (i==0 || i==4){
            cout <<"*";
        }
        else if((i==1 && j==2) || (i==2 && j==1) || (i==3 && j==0)){
            cout <<"*";
        }
        else{
            cout<< " ";
        }
    }
}

