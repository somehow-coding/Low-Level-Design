#include <bits/stdc++.h>
using namespace std;

class Letter {
public:
    virtual void display(int row, int col) = 0;
};

class Character : public Letter {
    char character;
    string fontType;
    int fontSize;

public:
    Character(char ch, string type, int size) {
        character = ch;
        type = fontType;
        size = fontSize;
    }

    void display(int row, int col) {}
};

class LetterFactory : public Letter {
    unordered_map<char, Letter *> mp;

public:
    Letter* createLetter() {
        //pass some parameters in this method which will check for some details.
        // if contains letter with the details it will return it.
        return nullptr;
    }
};
