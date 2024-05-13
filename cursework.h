#ifndef CURSEWORK
#define CURSEWORK


#include "List.h"
#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <map>
#include "Student.h"
#include <ctime>


class cursework {
private:
    List <Student> database;
public:
    cursework () {}
    cursework (const cursework& unit);
    cursework (const std::string filename);
    cursework& operator= (const cursework& unit);
    friend std::ostream& operator<< (std::ostream& os, cursework& unit);
    ~cursework () {}
    void toFile (const std::string filename);
    void append (const Student unit);
    void remove (const unsigned int index);
    unsigned int find (const Student unit);
    Student get (const unsigned int index);
    bool isExists (const Student unit);
    std::pair <List <Student>, List <Student>> split (std::string group);
    void sort (List <Student>& unit) const;
    static void encrypt (const std::string filenameIn, const std::string filenameOut);
    static void decrypt (const std::string filenameIn, const std::string filenameOut);
};

#endif