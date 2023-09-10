#ifndef TOKENS_HPP
#define TOKENS_HPP

enum TokenKind {
    TOKEN_INCREMENT_POINTER, // > : 0
    TOKEN_DECREMENT_POINTER, // < : 1
    TOKEN_INCREMENT_VALUE, // + : 2
    TOKEN_DECREMENT_VALUE, // - : 3
    TOKEN_OUTPUT_VALUE, // . : 4
    TOKEN_INPUT_VALUE, // , : 5 
    TOKEN_LOOP_START, // [ : 6 
    TOKEN_LOOP_END, // ] : 7 
    TOKEN_CHAR_AS_COMMENT, // other characters : 8
    TOKEN_EOF, // \0 : 9
};

struct Token {
    TokenKind kind;
    char value;
};

typedef struct Token Token;

#endif // TOKENS_HPP