grafica.pdf:datos.txt
	python grafica.py
	rm datos.txt
datos.txt:adv.x
	./adv.x > datos.txt
	rm adv.x
adv.x:
	c++ adv.cpp -o adv.x
clean:
	rm grafica.pdf
