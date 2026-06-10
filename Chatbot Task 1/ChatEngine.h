#ifndef CHATENGINE_H
#define CHATENGINE_H
#include "Bot.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class ChatEngine {
private:
    vector<Bot*> bots;
    string toLower(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
public:
    void addBot(Bot* b) { bots.push_back(b); }
    string getResponse(string input) {
        input = toLower(input);
        for (Bot* b : bots) {
            string reply = b->respond(input);
            if (!reply.empty()) return reply;
        }
        return "";
    }
    ~ChatEngine() { for (Bot* b : bots) delete b; }
};
#endif