#ifndef KERJASAMA_H_INCLUDED
#define KERJASAMA_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct kerjaSama {
    string tanggalMulai;
    string tanggalSelesai;
    string jenisKerjasama;
};

typedef struct elmKerjaSama *adrKerjasama;         // variabel alias untuk infor
typedef  struct ------------ *------------;   // variabel alias untuk pointer

// kerangka dari elemen list
struct elmKerjaSama {
    KerjaSama info;
    adrKreator valParent;
    adrBrand valChild;
    adrKerjaSama next;
};

// kerangka dari list
struct listKerjaSama {
    adrKerjaSama first;
};

// pengecekan apakah list kosong
void createListKerjaSama(listKerjaSama &L);
/* I.S. list LM terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

void dealokasiKerjaSama(adrKerjaSama &p);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
void insertFirstKerjaSama(listKerjaSama &L, adrKerjaSama p);
/* I.S. info mahasiswa x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan prev/next NULL
        dan daftar KRS dalam keadaan kosong */

void insertLastKerjaSama(listKerjaSama &L, adrKerjaSama p);
/* I.S. pointer P terdefinisi
   F.S. elemen mahasiswa dan seluruh elemen KRS relasinya di-dealokasi;
        elemen mata kuliah yang dirujuk tidak ikut dihapus */

// pencarian sebuah elemen list
void insertAfterKerjaSama(listKerjaSama &L, adrKerjaSama prec, adrKerjaSama p);
/* I.S. list LM dan NIM terdefinisi
   F.S. mengembalikan alamat elemen mahasiswa yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void deleteFirstKerjaSama(listKerjaSama &L, adrKerjaSama &p);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void deleteLastKerjaSama(listKerjaSama &L, adrKerjaSama &p);
/* I.S. terdefinisi list LM yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void deleteAfterKerjaSama(listKerjaSama &L, adrKerjaSama prec, adrKerjaSama &p);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void printInfoKerjaSama(listKerjaSama L);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/



#endif 
