Algoritmo nomina_salarial
	Escribir 'proceso para calcular a nomina salarial neta de obreros en el que se les paga por horas'
	Escribir 'introduce la tarifa fija';
	Leer tf
	Escribir 'introduce las horas extras';
	leer he
	
	st<- tf +he+1.5
	Mientras sueldo>20000 Hacer
		Escribir 'ingresa la tarifa mayor a 20000';
		Leer tf
	Fin Mientras
	tf<-st-(0.2)
	
	Escribir 'el salario total es:',tf;
	
FinAlgoritmo
