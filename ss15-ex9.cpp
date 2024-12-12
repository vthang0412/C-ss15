#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	char kytu; 
	printf("Nhap mot chuoi ky tu: ");
	fgets(a,sizeof(a),stdin);
	printf("Nhap ky tu can xoa: ");
	scanf("%c", &kytu); 
	int n = strlen(a);
	int i=0; 
    while (i < n) {
        if (a[i] == kytu) {
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;  
        } else {
           i++;
        }
    }
    printf("Chuoi sau khi xoa ky tu '%c' la: %s\n", kytu, a);
    return 0;
}
