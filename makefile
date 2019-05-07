imagen.png: onda.dat plot.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: DanielaBarrios_Ejercicio29.cpp
	g++ DanielaBarrios_Ejercicio29.cpp

clean:
	rm -rf a.out onda.dat imagen.png *~
