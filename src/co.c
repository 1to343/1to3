#include<stdio.h>
#include<math.h>
#include "co.h"

void setpoint(point *a, int x, int y){
	a->x = x;
	a->y = y;
}
//Задать точку в ручную
void scanpoint(point *a){
	scanf("%d%d", &(a->x), &(a->y));
}
//Задать точку из консоли
void printpoint(point a){
	printf("(%d; %d)\n", a.x, a.y);
}
//Печать точки
void setsegint(segment *a, int x1, int y1, int x2, int y2){
	a->l.x = x1;
	a->l.y = y1;
	a->r.x = x2;
	a->r.y = y2;
}
//Задать отрезок через 4 координаты в ручную
void setsegpoi(segment *a, point f, point s){
	a->l = f;
	a->r = s;
}
//Задать отрезок через 2 конца в ручную
void scansegint(segment *a){
	scanf("%d%d%d%d", &(a->l.x), &(a->l.y), &(a->r.x), &(a->r.y));
}
//Задать отрезок через 4 координаты из консоли
void scansegpoi(segment *a){
	point b;
	scanpoint(&b);
	a->l = b;
	scanpoint(&b);
	a->r = b;
}
//Задать отрезок через 2 конца из консоли
void printsegment(segment a){
	printf("[(%d; %d); (%d; %d)]\n", a.l.x, a.l.y, a.r.x, a.r.y);
}
//Печать отрезка
void movetodistx(segment *a, int x){
	int b, c;
	b = a->l.x;
	c = a->r.x;
	a->l.x = b + x;
	a->r.x = c + x;
}
//Сдвинуть отрезок на какое-то расстояние по x
void movetodisty(segment *a, int y){
	int b, c;
	b = a->l.y;
	c = a->r.y;
	a->l.y = b + y;
	a->r.y = c + y;
}
//Сдвинуть отрезок на какое-то расстояние по y
