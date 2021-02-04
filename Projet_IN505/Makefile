all: executable


# Création de l'executable

executable: main.o fenetre.o
	g++ main.o fenetre.o -o executable `pkg-config gtkmm-3.0 --cflags --libs` -Wall


# Compilation

main.o: Main.cc VarGlobal.hh
	g++ Main.cc -o main.o `pkg-config gtkmm-3.0 --cflags --libs` -c -Wall

fenetre.o: Fenetre.cc Fenetre.hh
	g++ Fenetre.cc -o fenetre.o `pkg-config gtkmm-3.0 --cflags --libs` -c -Wall


# Cleaner

clean:
	rm executable *.o


# Editer

edit:
	subl Makefile *.cc *.hh