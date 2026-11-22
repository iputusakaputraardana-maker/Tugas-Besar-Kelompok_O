#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

#include <kampanye.h>
#include <iostream>
using namespace std;

typedef struct elmTree *addressTree;

struct elmTree {
    infotypeKampanye info;
    addressTree left;
    addressTree right;
};

struct BST {
    addressTree root;
};
#endif // BST_H_INCLUDED
