#ifndef FAQBOT_H
#define FAQBOT_H
#include "Bot.h"
#include <map>
#include <fstream>
class FAQBot : public Bot {
private:
    map<string, string> responses;
    void loadFromFile(string filename) {
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            int sep = line.find('=');
            if (sep == string::npos) continue;
            string key = line.substr(0, sep - 1);
            string val = line.substr(sep + 2);
            responses[key] = val;
        }
    }
public:
    FAQBot(string filename) : Bot("FAQBot") {
        loadFromFile(filename);
    }
    string respond(string input) override {
        for (auto& pair : responses)
            if (input.find(pair.first) != string::npos)
                return pair.second;
        return "";
    }
};
#endif