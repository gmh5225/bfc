#ifndef AST_HPP
#define AST_HPP

#include <vector>

class ExprAST {
public:
    virtual ~ExprAST() {}
};

// loop
class LoopExprAST : public ExprAST {
public:
    LoopExprAST(ExprAST *body) : body(body) {}
    ~LoopExprAST() { delete body; }
private:
    ExprAST *body;
};

// other characters
class ScopeExprAST : public ExprAST {
public:
    ScopeExprAST(std::vector<ExprAST> *body) : body(body) {}
    ~ScopeExprAST() { delete body; }
private:
    std::vector<ExprAST> *body;
};

class IncrementPointerExprAST : public ExprAST {
public:
    IncrementPointerExprAST() {}
};

class DecrementPointerExprAST : public ExprAST {
public:
    DecrementPointerExprAST() {}
};

class IncrementValueExprAST : public ExprAST {
public:
    IncrementValueExprAST() {}
};

class DecrementValueExprAST : public ExprAST {
public:
    DecrementValueExprAST() {}
};

class OutputValueExprAST : public ExprAST {
public:
    OutputValueExprAST() {}
};

class InputValueExprAST : public ExprAST {
public:
    InputValueExprAST() {}
};

/**
 * [->+<] is represented as:
 * LoopExprAST {
 *   body: ScopeExprAST {
*      body: [
 *        DecrementValueExprAST {},
 *        IncrementPointerExprAST {},
 *        IncrementValueExprAST {},
 *        DecrementPointerExprAST {}
 *     ]
 *  }
 * }
*/

#endif // AST_HPP