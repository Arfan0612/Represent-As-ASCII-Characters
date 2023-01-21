//check is argv from the main function
//int i is the the current row it is currently printing
//int k represent the current index position of a string to check the position k char
//int n represents the which string in argv it is accessing

//each function is used to check to see which alphabet, number, or punctuation function is
//needed to be called
void check_alphabet(char **check, int i, int k, int n);
void check_number(char **check, int i, int k, int n);
void check_punctuation(char **check, int i, int k, int n);
