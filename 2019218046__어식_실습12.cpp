#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	srand((unsigned int)time(NULL));

	int first, second;
	int a, b;
	int score = 0;
	char x;


	while (score < 20) {
		first = rand() % 10;
		second = rand() % 10;
		x = (rand() % 3) + 1;

		switch (x) {

		case 1:
			printf("%d+%d=?\n", first, second);
			scanf("%d", &a);
			if (a == (first + second))
				score = score + 10;
			else score = score - 10;
			printf("현재 점수:%d\n", score);
			break;

		case 2:
			printf("%d*%d=?\n", first, second);
			scanf("%d", &a);
			if (a == (first * second))
				score = score + 10;
			else score = score - 10;
			printf("현재 점수:%d\n", score);

			break;
		case 3:
			printf("%d-%d=?\n", first, second);
			scanf("%d", &a);
			if (a == (first - second))
				score = score + 10;
			else score = score - 10;
			printf("현재 점수:%d\n", score);
			break;
		}if (score == 0) {
			printf("탈락하셨습니다.\n");
			break;
		}
		while (score < 70&&score >= 20) {
			first = rand() % 100;
			second = rand() % 100;
			x = (rand() % 3) + 1;
			switch (x) {

			case 1:
				printf("%d+%d=?\n", first, second);
				scanf("%d", &a);
				if (a == (first + second))
					score = score + 10;
				else score = score - 10;
				printf("현재 점수:%d\n", score);
				break;

			case 2:
				printf("%d*%d=?\n", first, second);
				scanf("%d", &a);
				if (a == (first * second))
					score = score + 10;
				else score = score - 10;
				printf("현재 점수:%d\n", score);
				break;
			case 3:
				printf("%d-%d=?\n", first, second);
				scanf("%d", &a);
				if (a == (first - second))
					score = score + 10;
				else score = score - 10;
				printf("현재 점수:%d\n", score);
				break;
			}
			while (score < 100 &&score >= 70) {
				first = rand() % 1000;
				second = rand() % 1000;
				x = (rand() % 3) + 1;
				switch (x) {

				case 1:
					printf("%d+%d=?\n", first, second);
					scanf("%d", &a);
					if (a == (first + second))
						score = score + 10;
					else score = score - 10;
					printf("현재 점수:%d\n", score);
					break;

				case 2:
					printf("%d*%d=?\n", first, second);
					scanf("%d", &a);
					if (a == (first * second))
						score = score + 10;
					else score = score - 10;
					printf("현재 점수:%d\n", score);
					break;
				case 3:
					printf("%d-%d=?\n", first, second);
					scanf("%d", &a);
					if (a == (first - second))
						score = score + 10;
					else score = score - 10;
					printf("현재 점수:%d\n", score);
					break;
				}
			}
		}
	}
	if (score == 100)
		printf("수고하셨습니다.");



	return 0;
}
