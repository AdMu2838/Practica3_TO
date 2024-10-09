#ifndef NODO_H
#define NODO_H
#include <memory>
class Nodo {
public:
    virtual int evaluate() = 0;
    virtual ~Nodo() = default; 
};
class OperandNodo : public Nodo {
    private:
    int value; 
    public:
    OperandNodo(int val); 
    int evaluate() override; 
};
class OperatorNodo : public Nodo {
    private:
    char op; 
    std::unique_ptr<Nodo> left, right;
    public:
    OperatorNodo(char oper, std::unique_ptr<Nodo> leftNodo,
    std::unique_ptr<Nodo> rightNodo);
    int evaluate() override; 
};
#endif