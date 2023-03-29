#include "time.hpp"


Time::Time()
{
    time_ = 0;
}

Time::Time(int t) : time_(t){} // constructor

void Time::set(int time){ // setter
    time_ = time;
}

int Time::get(){ // getter
    return time_;
}

Time Time::operator+(Time &rhs){
    return Time(time_ + rhs.time_);
}

Time Time::operator-(Time &rhs){
    return Time(time_ - rhs.time_);
}

Time Time::operator*(Time &rhs){
    return Time(time_ * rhs.time_);
}

std::ostream &operator<<(std::ostream &str, Time &t){
    int s = 0, m = 0, h = 0;
    h = t.time_ / 3600;
    m = (t.time_ - (h * 3600)) / 60;
    s = (t.time_ - (h * 3600) - (m * 60));
    str << h << "h:" << m << "m:" << s << "s";
    return str;
}

std::istream &operator>>(std::istream &str, Time &t){
    cout << "Enter time:" << endl;
    string data;
    str >> data;

    int s = 0, m = 0, h = 0;
    char s1;
    istringstream iss(data);
    iss >> h >> s1 >> s1 >> m >> s1 >> s1 >> s;
    t.set(s+m*60+h*3600);
    return str;
}

Time::operator int(){
    return int(time_);
}
