#ifndef BOT_H
#define BOT_H
#include <string>
using namespace std;
class Bot {
protected:
    string name;
public:
    Bot(string n) : name(n) {}
    virtual string respond(string input) = 0;
    virtual ~Bot() {}
};
#endif