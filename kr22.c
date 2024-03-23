//12 вариант
//m = sqrt(abs(-3*tg(x)*lg(x^4+y)/e^-x+1))
//#include <math.h>
//#define e 2.718281
//
//int main(void) {
//	float x, y, z, p;
//	scanf_s("%f%f%f", &x, &y, &z);
//	if (fabs((x + y) / z) <= 1) {
//		p = asin((x + y) / z);
//	}
//	else {
//		p = 2 * pow(x, 2) + y + tan(z);
//
//	}
//	printf("%f\n", p);
//	return 0;
//}

//
//int main(void) {
//	float x, y;
//	for (x = -1; x < 1; x += 0.2) {
//		if (x >= 0) {
//			y = 2 * exp(1 / x);
//			printf("%.15f | %.15f\n", x, y);
//		}
//		else {
//			y = 2 * pow(x, 3) * cos(pow(x, 2) + 1);
//			printf("%.15f | %.15f\n", x, y);
//		}
//	}
//}
//int main(void) {
//	float u1 = 2, u2 = 2.5, u3 = 0.15, ui, s = u1+u2+u3;
//	int i;
//	for (i = 4; i <= 100; i++) {
//		ui = cos((int)u3) + fabs(0.7 * sin(u1));
//		s += ui;
//		u1 = u2;
//		u2 = u3;
//		u3 = ui;			
//	}
//	printf("%f", s);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int r[30] = { 41, 32, 39, 34, 17, 8, 35, 45, 1, 26, 13, 4, 6, 9, 18, 42, 28, 10, 31, 44, 11, 23, 7, 15, 36, 3, 2, 19, 20, 22 };
	int i, m = 29, n, l; //n = хранит номер максимального числа, l = переменная для временного хранения m-го элемента массива
						// для наглядности m-ый элемент будет последним в массиве 
	int max_num = 0;


	//srand(time(null));
	//scanf_s("%d", &m); 
	//printf("%d", m);

	for (i = 0; i <= 29; i++) {
		//r[i] = rand() % 50 + 1;
		if (r[i] > max_num) {
			max_num = r[i];
			n = i;
		}
		printf("%d) %d\n", i + 1, r[i]);
	}
	printf("Maximum element  = %d\n", max_num);
	printf("Element number %d = %d\n", m, r[m]);

	l = r[m]; // в переменную l временно помещаем m-й элемент массива r[m]
	r[m] = r[n]; //на место m-го r[m] элемента ставим максимальный элемент массива r[n]
	r[n] = l; //на место максимального элемента r[n] массива  ставим m-й элемент r[m] массива, который сохранился во временной переменной
	printf("New massive: \n");

	for (int i = 0; i < 30; ++i) {

		printf("%d) %d\n", i + 1, r[i]);
	}


	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//    srand(time(NULL));
//    for (int i = 1; i <= 30; i++) {
//        printf("%15d", rand() % 50);
//        if (i % 5 == 0)
//            printf("\n");
//    }
//}

//	// Устанавливаем текущее время как семя
//
//
//	srand(time(NULL));
//
//
//	// Генерируем случайное число в диапазоне от 1 до 10
//
//
//	int random_number = rand() % 10 + 1;
//
//
//	printf("Random number: %d", random_number);
//
