#include "lexer.hpp"

#include <cstring>
#include <stdio.h>

TokenKind lex(char src) {
    switch (src)
    {
        // Brainfuck syntax
        case '>':
            return TokenKind::TOKEN_INCREMENT_POINTER;
            break;
        case '<':
            return TokenKind::TOKEN_DECREMENT_POINTER;
            break;
        case '+':
            return TokenKind::TOKEN_INCREMENT_VALUE;
            break;
        case '-':
            return TokenKind::TOKEN_DECREMENT_VALUE;
            break;
        case '.':
            return TokenKind::TOKEN_OUTPUT_VALUE;
            break;
        case ',':
            return TokenKind::TOKEN_INPUT_VALUE;
            break;
        case '[':
            return TokenKind::TOKEN_LOOP_START;
            break;
        case ']':
            return TokenKind::TOKEN_LOOP_END;
            break;
        case '\0':
            return TokenKind::TOKEN_EOF;
            break;
        default:
            return TokenKind::TOKEN_CHAR_AS_COMMENT;
            break;
    }
}