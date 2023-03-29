#pragma once
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>


using namespace std;


class Time
{
public:
    Time();
    Time(int t);

    void set(int time);
    int get();

    Time operator+(Time &rhs);
    Time operator-(Time &rhs);
    Time operator*(Time &rhs);

    friend std::ostream &operator<<(std::ostream &str, Time &t);
    friend std::istream &operator>>(std::ostream &str, Time &t);

    operator int();


private:
    int time_;

};


