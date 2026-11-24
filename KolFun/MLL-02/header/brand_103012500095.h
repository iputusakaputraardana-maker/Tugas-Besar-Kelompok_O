#ifndef BRAND_H_INCLUDED
#define BRAND_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Brand {
    int idBrand;
    string namaBrand;
    string kategoriProduk;
}

typedef struct elmBrand *adrBrand;

struct elmBrand {
    Brand info;
    Kerjasama relasi;
    adrBrand next;
}

struct ListBrand{
    adrBrand first;
}

void createListBrand(ListBrand &L);
adrBrand createElmBrand(Brand info, Kerjasama relasi);
void insertLastBrand(ListBrand L, adrBrand);
adrBrand searchBrand(ListBrand L, int idBrand);
void deletBrand(ListBrand &L, int idBrand);
#endif