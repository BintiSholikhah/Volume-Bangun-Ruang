#include "volume.h"

float Kotak(float a){
	return(a*a*a);
}
float Balok(float a, float b, float c){
	return(a*b*c);
}
float Tabung(float a, float b){
	return(3.14*a*a*b);
}
float Kerucut(float a, float b){
	return(3.14*a*a*b*1/3);
}
float LuasAlas(float a, float b){
	return(a*b*1/2);
}
float PrismaSegitiga(float a, float b, float c){
	return(a*b*1/2*c);
}
float LimasSegitiga(float a, float b, float c){
	return(a*b*1/2*c*1/3);
}
float Bola(float a){
	return(a*a*a*3.14*4/3);
}
