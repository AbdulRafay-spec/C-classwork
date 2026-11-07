// getchar() and putchar() explained
//
// getchar()  -> READS one character from the keyboard
// putchar(x) -> PRINTS one character on the screen
//
// They work with ONE character at a time, not whole words or numbers.
// (printf/scanf can handle words and numbers; getchar/putchar are the
//  simplest tools for single characters.)

#include <stdio.h>

int main() {

    // ===================== EXAMPLE 1: getchar() =====================
    // Ask the user to type a character, then print it back.

    char c;                       // a box that can hold ONE character

    printf("Enter a character: ");
    c = getchar();                // program WAITS here until you type
                                  // something and press Enter.
                                  // It keeps only the FIRST character.
                                  // e.g. you type "hello" -> c = 'h'

    printf("You entered: ");
    putchar(c);                   // print the character stored in c
    putchar('\n');                // move to the next line

    // ===================== EXAMPLE 2: putchar() =====================
    // Print characters without asking the user for anything.

    char letter = 'C';            // store the character C (single quotes!)
    putchar(letter);              // prints: C
    putchar('\n');                // '\n' is the "new line" character

    // Every character has a number code behind it (ASCII code).
    // If you give putchar a number, it prints the matching character.
    //   'A' = 65, 'B' = 66 ... 'H' = 72 ... 'a' = 97 ... 'i' = 105
    putchar(72);                  // 72  is 'H'  -> prints: H
    putchar(105);                 // 105 is 'i'  -> prints: i
    putchar('\n');                // so this line shows: Hi

    return 0;                     // program finished successfully
}

// ------------------------- SAMPLE RUN -------------------------
// Enter a character: hello      <- you type this and press Enter
// You entered: h                <- only the first character is read
// C
// Hi
//
// ----------------------- KEY POINTS ---------------------------
// 1. getchar() takes no arguments and returns the character typed.
// 2. putchar() takes one character (or its ASCII number) and prints it.
// 3. Characters use SINGLE quotes: 'C'.  Text (strings) uses DOUBLE
//    quotes: "Hello". putchar("C") is WRONG; putchar('C') is right.
// 4. putchar does NOT add a new line by itself; use putchar('\n').
