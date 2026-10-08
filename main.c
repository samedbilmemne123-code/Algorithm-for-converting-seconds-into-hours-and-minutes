#include <stdio.h>

int main() {
    int toplam_saniye, saat, dakika, saniye;

    printf("Lütfen saniye miktarını girin: ");
    scanf("%d", &toplam_saniye);

    if (toplam_saniye < 0) {
        printf("Geçersiz değer!\n");
        return 1;
    }

    saat = toplam_saniye / 3600;
    dakika = (toplam_saniye % 3600) / 60;
    saniye = toplam_saniye % 60;

    printf("Sonuç: ");
    if (saat > 0) {
        printf("%d saat ", saat);
    }
    if (dakika > 0) {
        printf("%d dakika ", dakika);
    }
    if (saniye > 0 || (saat == 0 && dakika == 0)) {
        printf("%d saniye", saniye);
    }
    printf("\n");

    return 0;
}