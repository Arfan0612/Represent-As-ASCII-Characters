# Introduction
The objective of the program is to generate large ACII-art text in console as output based on the input strings from the command line.

# Approach
The approach taken to create the pattern for each valid character is treating the 5 by 5 cells as a 2D array. When printing out a 5 by 5 2D array, the program prints the whole input string out row by row NOT just a single character.
To check for valid characters from the string, over 47 if statements are used to check valid characters. In addition to that, functions from ctype.h are also used to check for if the character is an alphabet or a number. 
