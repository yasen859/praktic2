#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_CTYPE, "");
	// Шаг 1: Задание конкретных значений переменных
	int A = 8; // Ширина стены
	int B = 3; // Длина стены
	int K = 50; // Цена одного рулона
	
	// Шаг2: Расчет площади стены
	int S_stena = A * B;
	
	// Шаг3: Расчет площади одного рулона 
	int S_rulon = 12 * 1;
	
	// Шаг4: Расчет цены итоговой цены обоев 
	int price = S_stena / S_rulon * K;
	
	// Форматированный вывод результатов
	printf("РАСЧЕТ СТОИМОСТИ ЦЕНЫ ОБОЕВ\n");
	printf("================================\n\n");
	printf("УСЛОВИЯ:\n");
	printf("- Цена 1 рулона: %d руб.\n", K);
	printf("- Площать одного рулона: %d м2\n", S_rulon);
	printf("- Длина, ширина и площадь стены: %d м %d м %d м2.\n", A, B, S_stena);
	printf("- Колличество рулонов: %d \n", S_stena / S_rulon);
	
	printf("РАСЧЕТ:\n");
	printf("- Цена поклейки: %d / %d * %d = %d.\n", S_stena, S_rulon, K, price);




	
	
	
}