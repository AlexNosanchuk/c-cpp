#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class DinArr_Simple {
    string* arr;
    int size;
    char separator;
public:
    void CopyDinArr_Simple(DinArr_Simple& l);
    DinArr_Simple(const DinArr_Simple& l);
    DinArr_Simple();
    DinArr_Simple(char separator);
    DinArr_Simple(string  value);
    void print();
    void input();
    string& operator[](int pos);
    string& operator[](string val);
    void set_size(int n);
    bool add(string value);
    bool del(int pos); 
    int get_size();
    bool insert(string value, int pos);
    bool parse_from_string(string s);
    string ToString();
    ~DinArr_Simple();
};
class CSV {
    DinArr_Simple* Line;
    int size;

public:
    void BuildTitleArray();
    CSV();
    bool add(string value);
    bool insert(string value, int pos);
    bool del(int pos);               
    DinArr_Simple& operator[](int pos);
    string GetValueByTitleName(string title, int pos);    
    void LoadFromFile(string filename);    
    void SaveToFile(string filename);      
    void print();                 

    ~CSV();
};


