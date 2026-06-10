#ifndef FALLBACKBOT_H
#define FALLBACKBOT_H
#include "Bot.h"
class FallbackBot : public Bot {
public:
    FallbackBot() : Bot("FallbackBot") {}
    string respond(string input) override {
        return "Sorry, I don't understand. Type 'help' for topics.";
    }
};
#endif