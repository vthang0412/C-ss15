#include<stdio.h>
#include<string.h>
char vietHoa(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}
int main() {
    char chuoi[100];
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, 100, stdin);
    int vietHoaTiep = 1; 
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ') {
            vietHoaTiep = 1;
        } else if (vietHoaTiep && ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z'))) {
            chuoi[i] = vietHoa(chuoi[i]); 
            vietHoaTiep = 0; 
        }
    }
    printf("Chuoi sau khi viet hoa: %s\n", chuoi);
    return 0;
}
