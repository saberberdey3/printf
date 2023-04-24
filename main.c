#include "main.h"
#include <stdio.h>

int main(void)
{
    int count;

    count = _easy("Hello, world!\n");
    _easy("Expected: Hello, world!\n");
    _easy("Actual  : ");
    _easy("Hello, world!\n");
    _easy("Count   : %d\n", count);

    count = _easy("My name is %s\n", "Saber");
    _easy("Expected: My name is Saber\n");
    _easy("Actual  : ");
    _easy("My name is %s\n", "Saber");
    _easy("Count   : %d\n", count);

    count = _easy("%c is a vowel\n", 'A');
    _easy("Expected: A is a vowel\n");
    _easy("Actual  : ");
    _easy("%c is a vowel\n", 'A');
    _easy("Count   : %d\n", count);

    count = _easy("100%% accurate\n");
    _easy("Expected: 100%% accurate\n");
    _easy("Actual  : ");
    _easy("100%% accurate\n");
    _easy("Count   : %d\n", count);

    return (0);
}

