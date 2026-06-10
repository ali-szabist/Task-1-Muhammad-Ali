#include <iostream>
#include "ChatEngine.h"
#include "GreetBot.h"
#include "FAQBot.h"
#include "FallbackBot.h"
using namespace std;
int main() {
    ChatEngine engine;
    engine.addBot(new GreetBot());
    engine.addBot(new FAQBot("responses.txt"));
    engine.addBot(new FallbackBot());
    string input;
    cout << "=======================\n";
    cout << "   Mini AI Chatbot\n";
    cout << "=======================\n";
    while (true) {
        cout << "\nYou: ";
        getline(cin, input);
        string reply = engine.getResponse(input);
        if (reply == "##EXIT##") { cout << "Bot: Goodbye!\n"; break; }
        cout << "Bot: " << reply << "\n";
    }
    return 0;
}