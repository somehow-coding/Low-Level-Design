#include <bits/stdc++.h>
using namespace std;

class Text {
public:
    virtual void get_text_content() = 0;
};

class PlainText : public Text {
public:
    void get_text_content() {}
};

class BoldText : public Text {
public:
    void get_text_content() {}
};

class TextDecorator : public Text {
public:
    virtual void get_text_content() = 0;
    virtual void text_settings() = 0;
};

class ItalicTextDecorator : public TextDecorator {
    Text *text;

public:
    ItalicTextDecorator(Text *text) : text(text) {}

    void text_settings() {}

    void get_text_content() {
        text_settings();
        cout << "Italic Text" << endl;
    }
};

class UnderlineTextDecorator : public TextDecorator {
    Text *text;

public:
    UnderlineTextDecorator(Text *text) : text(text) {}

    void text_settings() {}

    void get_text_content() {
        text_settings();
        cout << "Underline Text" << endl;
    }
};

int main() {
    TextDecorator *text = new ItalicTextDecorator(new BoldText);
    text->get_text_content();
}