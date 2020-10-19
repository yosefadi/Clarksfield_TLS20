#include <stdio.h>

struct Box{
	double length;
	double width;
	double height;
};

int main(){
	unsigned int i, boxcount;
	double volume;

	inputcount:
	printf("Masukkan kotak yang akan kamu bawa: ");
	scanf("%d", &boxcount);

	if(boxcount < 1 || boxcount > 100) {
		printf("Jumlah kotak yang boleh dibawa minimal 1 dan maksimal 100! Mohon ulangi kembali\n");
		goto inputcount;
	}

	struct Box box[boxcount];
	for(i = 0; i < boxcount; i++){
		printf("Masukkan panjang, lebar, dan tinggi kotak (dipisahkan dengan spasi): ");
		scanf("%lf %lf %lf", &box[i].length, &box[i].width, &box[i].height);
		if(box[i].length < 1 || box[i].length > 100 || box[i].width < 1 || box[i].width > 100 || box[i].height < 1 || box[i].height > 100) {
			printf("Nilai tidak diperbolehkan. Panjang, lebar, atau tinggi harus memenuhi minimal 1 dan maksimal 100. Mohon ulangi kembali\n\n");
			i--;
		}
	}
	for(i = 0; i < boxcount; i++){
		if(box[i].height < 41) {
			volume = box[i].length * box[i].width * box[i].height;
			printf("\nVolume kotak ke-%d adalah %lf", i+1, volume);
		}
	}
	printf("\n");
}
