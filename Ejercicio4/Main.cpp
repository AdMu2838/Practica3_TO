#include <iostream>
#include "BinaryExpressionTree.h"
#include "Nodo.h"
using namespace std;
int main()
{
    
    auto leftSubTree = make_unique<OperatorNodo>('+',
    make_unique<OperandNodo>(54),
    make_unique<OperatorNodo>('*',
    make_unique<OperandNodo>(5),
    make_unique<OperandNodo>(34)));
    auto rightSubTree = make_unique<OperatorNodo>('*',
    make_unique<OperandNodo>(1),
    make_unique<OperandNodo>(2));
    // Crear el árbol completo
    BinaryExpressionTree tree(make_unique<OperatorNodo>('+',
    move(leftSubTree), move(rightSubTree)));

    cout << "Resultado : \n"
    << "54 + 5 * 34 + 1 * 2 = "
    << tree.evaluate() << endl;
    return 0;
}
