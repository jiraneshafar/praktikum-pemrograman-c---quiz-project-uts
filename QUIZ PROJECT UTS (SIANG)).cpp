#include <stdio.h>

int main() {
	int kekeruhan[9] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
	int i;
	int total = 0;
	float rata;
	int rpm = 1000;
	int waktu_cuci = 60;
	
	// 1. start dan isi air 
	printf("sTART ditekan\n");
	printf("Motor klep pengisian air aktif selama 2 menit\n\n");
	
	// 2. Sensor membaca kekeruhan (1 kali)
	for (i = 0; i < 9; i++) {
		total = total + kekeruhan[i];
	}
	
	rata = total / 9.0;
	printf("Sensor membaca kekeruhan air\n");
	printf("Nilai rata-rata kekeruhan air = %.2f NTU\n\n", rata);
	
	 // 3. Proses mencuci awal
    printf("Motor utama berputar %d rpm\n", rpm);
    printf("Waktu mencuci total %d menit\n\n", waktu_cuci);

    // 4. Jeda pertengahan waktu
    printf("Motor utama berhenti (pertengahan waktu mencuci)\n");

    // 5. Pembuangan air kotor
    printf("Motor klep pembuangan air aktif selama 2 menit\n\n");

    // 6. Pengeringan pertama
    printf("Motor utama berputar 2000 rpm selama 3 menit (pengeringan)\n\n");

    // 7. Pengisian air ulang
    printf("Motor klep pengisian air aktif selama 2 menit\n\n");

    // 8. Lanjutan mencuci
    printf("Motor utama melanjutkan pencucian\n\n");

    // 9. Pembuangan air akhir
    printf("Motor klep pembuangan air aktif selama 2 menit\n\n");

    // 10. Pengeringan akhir
    printf("Motor utama berputar 2000 rpm selama 3 menit (pengeringan akhir)\n\n");

    printf("Proses pencucian selesai\n");

    return 0;
}

