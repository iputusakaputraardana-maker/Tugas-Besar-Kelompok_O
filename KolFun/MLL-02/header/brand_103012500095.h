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
    adrBrand last;
}

adrBrand alokasiBrand(Brand data);
adrBrand findBrand(ListBrand L, string idBrand);
void createListBrand(ListBrand &L);
void dealokasiBrand(adrBrand &p);
void insertFirstBrand(listBrand &L, adrBrand p);
void insertLastBrand(ListBrand L, adrBrand);
void insertAfterBrand(ListBrand &L, adrBrand prec, adrBrand p);
void deleteFirstBrand(ListBrand &L, adrBrand &p);
void deleteFirstLast(ListBrand &L, adrBrand &p);
void deleteAfterBrand(ListBrand &L, adrBrand prec, adrBrand &p);
void printInfoBrand(ListBrand L);

#endif