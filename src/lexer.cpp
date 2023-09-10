#include "lexer.hpp"

#include <cstring>
#include <stdio.h>

Lexer::Lexer(std::string source) {
    this->source = source;
    this->current_line = 1;
    this->current_column = 1;
    this->current_char = source[0];
}

void Lexer::advance() {
    if (this->current_char == '\n') {
        this->current_line++;
        this->current_column = 1;
    } else {
        this->current_column++;
    }

    this->current_char = this->source[this->current_column - 1];
}

std::vector<Token> Lexer::lex() {

    std::vector<Token> tokens;

    // for each character in source
    for (int i = 0; i < this->source.length(); i++) {
        // catch segfaults
        printf("%c", this->source[i]);
    }
}