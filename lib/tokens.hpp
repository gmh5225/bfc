#ifndef TOKENS_HPP
#define TOKENS_HPP

enum TokenKind {
    TOKEN_INCREMENT_POINTER, // >
    TOKEN_DECREMENT_POINTER, // <
    TOKEN_INCREMENT_VALUE, // +
    TOKEN_DECREMENT_VALUE, // -
    TOKEN_OUTPUT_VALUE, // .
    TOKEN_INPUT_VALUE, // ,
    TOKEN_LOOP_START, // [
    TOKEN_LOOP_END, // ]
    TOKEN_EOF, // \0
};

struct Token {
    TokenKind kind;
    int line;
    int column;
};

typedef struct Token Token;

#endif // TOKENS_HPP