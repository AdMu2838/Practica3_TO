#ifndef TIME_H
#define TIME_H
#include <memory> 
using namespace std;
class Time
{
private:
    unique_ptr<int> hour;
    unique_ptr<int> minute;
    unique_ptr<int> second;
public:
    Time(const int h = 0, const int m = 0, const int s = 0);
    void setTime(const int h, const int m, const int s);
    void print() const;
    bool equals(const Time&) const;
};
#endif 
