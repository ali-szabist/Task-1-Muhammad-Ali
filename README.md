# Rule-Based AI Chatbot
### DecodeLabs Internship - Project 1

## What This Project Does
A console-based rule-based AI chatbot built in C++ using 
Object-Oriented Programming principles. The chatbot responds 
to user inputs using predefined rules and a file-based 
knowledge system.

## Features
- Handles greetings and exit commands
- FAQ-based responses loaded from responses.txt
- Fallback response for unrecognized inputs
- Runs in a continuous loop until user exits

## Project Structure
- bot.h — Base Bot class (abstract)
- ChatEngine.h — Core engine managing conversation flow
- GreetBot.h — Handles greeting inputs
- FAQBot.h — Handles FAQ-based responses
- FallbackBot.h — Handles unrecognized inputs
- responses.txt — Knowledge base (SZABIST dataset)
- main.cpp — Entry point

## How It Works
1. User types a message
2. ChatEngine routes it to the correct Bot
3. Bot matches input against rules/responses
4. Response is printed to console

## Technologies Used
- C++ (OOP)
- File Handling (responses.txt)
- Polymorphism & Virtual Functions
- Inheritance (Multi-bot architecture)

## How To Run
- Compile with any C++ compiler (g++/MinGW)
- Run the executable: chatbot.exe

## Author
Muhammad Ali
BS Artificial Intelligence - SZABIST Islamabad
DecodeLabs Internship 2026
