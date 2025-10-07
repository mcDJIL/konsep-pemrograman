#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int isBorrowed;
};

struct Member {
    int id;
    char name[100];
};  

struct Member *members = NULL;
int memberCount = 0;
struct Book books[MAX_BOOKS];
int bookCount = 0;

void addBook();
void viewBooks();
void updateBook();
void deleteBook();
void searchBook();
void borrowBook();
void returnBook();
void registerMember();
void viewMembers();

int main() {
    int choice;
    
    do {
        printf("\n=== Library Management System ===\n");
        printf("1. Tambah Buku\n");
        printf("2. Lihat Daftar Buku\n");
        printf("3. Edit Buku\n");
        printf("4. Hapus Buku\n");
        printf("5. Cari Buku\n");
        printf("6. Pinjam Buku\n");
        printf("7. Kembalikkan Buku\n");
        printf("8. Daftar Member\n");
        printf("9. Lihat Daftar Member\n");
        printf("0. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
        case 1:
            addBook();
            break;
        
        case 2:
            viewBooks();
            break;
        
        case 3:
            updateBook();
            break;
        
        case 4:
            deleteBook();
            break;

        case 5:
            searchBook();
            break;

        case 6:
            borrowBook();
            break;

        case 7:
            returnBook();
            break;
            
        case 8:
            registerMember();
            break;

        case 9:
            viewMembers();
            break;

        default:
            exit(1);
            break;
        }
    } while (choice != 0);

    system("pause");

    return 0;
}

void addBook() {
    if (bookCount > MAX_BOOKS) {
        printf("Kapasitas buku sudah penuh!\n");
        return;
    }

    struct Book book;
    book.id = bookCount + 1;

    printf("Masukkan judul: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0;

    printf("Masukkan author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0;

    book.isBorrowed = 0;
    books[bookCount++] = book;

    printf("Buku berhasil ditambahkan!\n", bookCount);
}

void viewBooks() {
    if (bookCount == 0) {
        printf("Belum ada buku");
        return;
    }

    printf("\n=== Daftar Buku ===\n");
    printf("ID Judul Author Status \n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d. %s %s [%s]\n", 
            books[i].id, 
            books[i].title, 
            books[i].author, 
            books[i].isBorrowed ? "Dipinjam" : "Tersedia"
        );
    }
}

void updateBook() {
    if (bookCount == 0) {
        printf("Belum ada buku!\n");
        return;
    }

    int bookId;

    printf("\n===Daftar Buku===\n");
    printf("ID Title Author Status\n");

    for (int i = 0; i < bookCount; i++) {
        printf("%d %s %s [%s]\n",
            books[i].id,
            books[i].title,
            books[i].author,
            books[i].isBorrowed ? "Dipinjam" : "Tersedia"
        );
    }
    
    printf("\nPilih buku berdasarkan ID: ");
    scanf(" %d", &bookId);
    getchar();

    if (books[bookId - 1].id != bookId) {
        printf("\nBuku tidak ditemukkan!\n");
        return;
    }

    printf("\nMasukkan judul: ");
    fgets(books[bookId - 1].title, sizeof(books[bookId - 1].title), stdin);
    books[bookId - 1].title[strcspn(books[bookId - 1].title, "\n")] = 0;

    printf("\nMasukkan author: ");
    fgets(books[bookId - 1].author, sizeof(books[bookId - 1].author), stdin);
    books[bookId - 1].author[strcspn(books[bookId - 1].author, "\n")] = 0;

    printf("\nBuku berhasil diubah!");
}

void deleteBook() {
    if (bookCount == 0) {
        printf("Belum ada buku \n");
        return;
    }

    int bookId;
    int index;

    printf("\n===Daftar Buku===\n");
    printf("ID Title Author Status\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d %s %s [%s]\n",
            books[i].id,
            books[i].title,
            books[i].author,
            books[i].isBorrowed ? "Dipinjam" : "Tersedia"    
        );    
    }
    
    printf("Pilih buku berdasarkan ID: ");
    scanf(" %d", &bookId);

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == bookId) {
            index = i;
            break;
        }
    }

    for (int i = index; i < bookCount - 1; i++) {
        books[i] = books[i + 1];
    }
    
    bookCount--;
    printf("\nBuku dengan ID %d berhasil dihapus!", bookId);
}

void searchBook() {
    if (bookCount == 0) {
        printf("Belum ada buku \n");
        return;
    }

    int bookId;

    printf("Cari buku berdasarkan ID: ");
    scanf(" %d", &bookId);

    printf("\nID Judul Author Status\n");
    printf("%d %s %s [%s]\n", 
        books[bookId - 1].id,
        books[bookId - 1].title,
        books[bookId - 1].author,
        books[bookId - 1].isBorrowed ? "Dipinjam" : "Tersedia" 
    );
}

void borrowBook() {
    if (bookCount == 0) {
        printf("Belum ada buku\n");
        return;
    }

    int bookId;
    int found = 0;

    printf("\n===Daftar Buku===\n");
    printf("ID Title Author Status\n");

    for (int i = 0; i < bookCount; i++) {
        printf("%d %s %s [%s]\n",
            books[i].id,
            books[i].title,
            books[i].author,
            books[i].isBorrowed ? "Dipinjam" : "Tersedia"
        );
    }
    
    printf("\nPilih buku berdasarkan ID: ");
    scanf(" %d", &bookId);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == bookId) {
            found = 1;

            if (books[i].isBorrowed == 1) {
                printf("Buku sedang dipinjam\n");
                return;
            } else {
                books[i].isBorrowed = 1;
    
                printf("Buku berhasil dipinjam\n");
            }

            break;
        }
    }

    if (!found) {
        printf("Buku tidak tersedia\n");
        return;
    }
}

void returnBook() {
    if (bookCount == 0) {
        printf("Belum ada buku\n");
        return;
    }

    int bookId;
    int found = 0;

    printf("\n===Daftar Buku===\n");
    printf("ID Title Author Status\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d %s %s [%s]\n",
            books[i].id,
            books[i].title,
            books[i].author,
            books[i].isBorrowed ? "Dipinjam" : "Tersedia"
        );
    }

    printf("\nMasukkan ID buku yang ingin dikembalikkan: ");
    scanf(" %d", &bookId);
    
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == bookId) {
            found = 1;

            if (books[i].isBorrowed == 0) {
                printf("\nBuku tidak bisa dikembalikkan!\n");
            } else {
                books[i].isBorrowed = 0;

                printf("\nBuku berhasil dikembalikkan\n");
            }

            break;
        }
    }
    
    if (!found) {
        printf("\nBuku tidak ditemukkan\n");
        return;
    }
}

void registerMember() {
    struct Member member;
    member.id = memberCount + 1;

    printf("Masukkan nama anda: ");
    fgets(member.name, sizeof(member.name), stdin);
    member.name[strcspn(member.name, "\n")] = 0;

    for (int i = 0; i < memberCount; i++) {
        if (members[i].name == member.name) {
            printf("Nama sudah digunakan\n");
            return;
        }
    }
    
    members = realloc(members, (memberCount + 1) * sizeof(struct Member));
    members[memberCount++] = member;

    printf("Pendaftaran member berhasil");
}

void viewMembers() {
    if (memberCount == 0) {
        printf("Tidak ada member terdaftar\n");
        return;
    }

    printf("ID Name\n");
    for (int i = 0; i < memberCount; i++) {
        printf("%d %s\n", 
            members[i].id, 
            members[i].name
        );
    }
}