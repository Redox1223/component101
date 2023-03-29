#include <keypad.h> // include the keypad library

// define the number of rows and columns in the keypad
const int ROW_NUM = 4;    // four rows
const int COLUMN_NUM = 3; // three columns

// define the keys in the keypad as a two-dimensional array
char keys[ROW_NUM][COLUMN_NUM] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}, {'*', '0', '#'}};

// define the keys in the keypad as a two-dimensional array
byte pin_rows[ROW_NUM] = {9, 8, 7, 6};   // connect to the row pinout of the keypad
byte pin_column[COLUMN_NUM] = {5, 4, 3}; // connect to the column pinout of the keypad

// create a keypad object with the specific keymap,row and column pinout and number of rows and columns
Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

void setup()
{
    // initialize serial communication
    Serial.begin(9600);
}
void loop()
{
    // get the key was pressed on the keypad
    char key = keypad.getkey();
    // if a key was pressed,print the key to the serial monitor
    if (key)
    {
        Serial.println(key);
    }
}