#include "main.hpp"
#include "lexer.hpp"

#include <fstream>

int main(int argc, char** argv)
{

        if (argc < 2) {
                printf("Error: no input file\n");
                return 1;
        }

        // open file at argv[1] (file path) as a std::string
        std::ifstream file(argv[1]);
        if (!file.is_open()) {
                printf("Error: could not open file %s\n", argv[1]);
                return 1;
        }

        std::string source;
        std::string line;

        while (getline(file, line)) {
                source += line + '\n';
        }

        file.close();

        std::vector<Token> tokens;

        // for each character in source, print it
        for (char c : source) {
                TokenKind current = lex(c);
                if (current == TOKEN_CHAR_AS_COMMENT) {
                        continue;
                }
                tokens.push_back(
                        Token {
                                current,
                                c
                        }
                );
        }

        for (Token t : tokens) {
                printf("Token: %d <%c>\n", t.kind, t.value);
        }

        return 0;
}
