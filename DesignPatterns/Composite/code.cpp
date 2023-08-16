#include <bits/stdc++.h>
using namespace std;

class FileSystem {
public:
    virtual void ls() = 0;
    virtual void add(FileSystem *f) = 0;
};

class File : public FileSystem {
    string name;

public:
    File(string name) : name(name) {}

    void ls() {
        cout << "File: " << name << endl;
    }

    void add(FileSystem *f) {
        throw "In file you can't create another file";
    }
};

class Directory : public FileSystem {
    vector<FileSystem *> fs;
    string name;

public:
    Directory(string name) : name(name) {}

    void add(FileSystem *f) {
        fs.push_back(f);
    }

    void ls() {
        cout << "Directory : " << name << endl;
        for (auto &f : fs) {
            f->ls();
        }
    }
};

int main() {
    FileSystem *d2 = new Directory("Design Patterns");
    FileSystem *d1 = new Directory("LLD");
    FileSystem *d3 = new Directory("Examples");
    FileSystem *f1 = new File("Observer Design Pattern");
    FileSystem *f2 = new File("Strategy Design Pattern");

    d1->add(d2);
    d1->add(d3);
    d2->add(f1);
    d2->add(f2);

    d1->ls();
}