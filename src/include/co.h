typedef struct{
	int x;
	int y;
}point;
typedef struct{
	point l;
	point r;
}segment;
void setpoint(point*, int, int);
//Задать точку в ручную
void scanpoint(point*);
//Задать точку из консоли
void printpoint(point);
//Печать точки
void setsegint(segment*, int, int, int, int);
//Задать отрезок через 4 координаты в ручную
void setsegpoi(segment*, point, point);
//Задать отрезок через 2 конца в ручную
void scansegint(segment*);
//Задать отрезок через 4 координаты из консоли
void scansegpoi(segment*);
//Задать отрезок через 2 конца из консоли
void printsegment(segment);
//Печать отрезка
void movetodistx(segment*, int);
//Сдвинуть отрезок на какое-то расстояние по x
void movetodisty(segment*, int);
////Сдвинуть отрезок на какое-то расстояние по y