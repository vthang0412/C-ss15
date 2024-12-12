#include<stdio.h>
#include<string.h>
int chucai(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
int chuso(char c) {
    return c >= '0' && c <= '9';
}
int kytudacbiet(char c) {
    return !chucai(c) && !chuso(c);
}

int main() {
    char chuoi[100];
    int demChuCai = 0, demChuSo = 0, demKyTuDacBiet = 0;
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, 100, stdin);
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chucai(chuoi[i])) {
            demChuCai++;
        } else if (chuso(chuoi[i])) {
            demChuSo++;
        } else if (kytudacbiet(chuoi[i])) {
            demKyTuDacBiet++;
        }
    }
    printf("So ky tu la chu cai: %d\n", demChuCai);
    printf("So ky tu la chu so: %d\n", demChuSo);
    printf("So ky tu dac biet: %d\n", demKyTuDacBiet-1);

    return 0;
}
