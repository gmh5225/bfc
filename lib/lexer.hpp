#ifndef LEXER_HPP
#define LEXER_HPP

#include "tokens.hpp"

#include <string>
#include <vector>

class Lexer {
    private:
        int current_line;
        int current_column;
        char current_char;
        std::string source;

    public:
        Lexer(std::string source);
        void advance();
        std::vector<Token> lex();
};

#endif // LEXER_HPP