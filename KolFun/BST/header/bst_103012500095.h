#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

#include "kampanye_103012500063.h"

typedef struct elmBST *adrBST;

struct elmBST {
    Kampanye info;
    adrBST left;
    adrBST right;

}

struct BST{
    adrBST root;
}

void createBST(BST &T);
adrBST createElmBST(Kampanye K);
void insertBST(BST &T, int idKampanye);
adrBST searchBST(BST T, int idKampanye);
void deleteBST(BST &T, int idKampanye);
void inorder(BST T);
void preorder(BST T);
void postorder(BST T);
adrBST kampanyeTerbaik(BST T);
void tampilKampanyeTerbaik(BST T);
#endif