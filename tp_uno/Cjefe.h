#pragma once
#include<string>
#include"Cproyecto.h"
#include"Cprogramador.h"
using namespace std;
class Cjefe
{
private:
	string Nombre;
	string Apellido;
	string DNI;
	string Telefono;
	bool Disponibilidad;// false= si ya esta asignado a un proyecto
	Cproyecto** ListaDeProyectosAsuCargo;
	int NumeroMaximoDeProyectos;
	Cprogramador** ListaDeprogramadoresQueJefeTieneAcargo;
	int NumeroDeProgramadoresAsuCargo;
	int NumeroActualDeProgramadores;
	int NumeroActualDeProyectos;
public:
	Cjefe(string,string,string,string);
	~Cjefe();
	string getNombre();
	string getApellido();
	bool getDisponibilidad();
	bool VerificarDisponibilidad();
	void AsignarNumeroMaximoDeProyectos(int numeroMaximoDeProyectos);
	void AsignarNumeroMaximoDeProgramadores(int numeroMaximoDeProgramadores);
	void asignarProyecto(Cproyecto* proyecto);

};

