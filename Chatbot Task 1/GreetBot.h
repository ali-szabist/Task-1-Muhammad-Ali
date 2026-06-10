#ifndef GREETBOT_H
#define GREETBOT_H
#include "Bot.h"
class GreetBot : public Bot {
public:
    GreetBot() : Bot("GreetBot") {}
    string respond(string input) override {
        if (input.find("hello") != string::npos || input.find("hi") != string::npos)
            return "Hey! How can I help you?";
        if (input.find("bye") != string::npos || input.find("exit") != string::npos)
            return "##EXIT##";
        return "";
    }
};
#endif