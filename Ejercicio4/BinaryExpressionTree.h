#ifndef BINARYEXPRESSIONTREE_H
#define BINARYEXPRESSIONTREE_H
#include "Nodo.h"
using namespace std;
#include <memory>
class BinaryExpressionTree {
    private:
        std::unique_ptr<Nodo> root; 
    public:
        BinaryExpressionTree(std::unique_ptr<Nodo> rootNode);
        int evaluate(); 
};
#endif
