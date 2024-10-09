#include "BinaryExpressionTree.h"
using namespace std;
BinaryExpressionTree::BinaryExpressionTree(unique_ptr<Nodo> rootNode)
    : root(move(rootNode)) {}
    
int BinaryExpressionTree::evaluate() {
    return root->evaluate();
}
