#include "Nodo.h"
using namespace std;
OperandNodo::OperandNodo(int val) : value(val) {}
int OperandNodo::evaluate() {
    return value;
}
// Implementación de OperatorNodo
OperatorNodo::OperatorNodo(char oper, unique_ptr<Nodo> leftNodo,
    unique_ptr<Nodo> rightNodo)
    : op(oper), left(move(leftNodo)), right(move(rightNodo)) {}
int OperatorNodo::evaluate() {
    int leftVal = left->evaluate();
    int rightVal = right->evaluate();
    if (op == '+') {
        return leftVal + rightVal;
    } else if (op == '*') {
        return leftVal * rightVal;
    }
    return 0; 
}