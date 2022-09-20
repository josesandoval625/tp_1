#include "Cjefe.h"

Cjefe::Cjefe(string nombre,string apellido,string dni,string telefono)
	:Nombre(nombre),Apellido(apellido),DNI(dni),Telefono(telefono)
{
	Disponibilidad = false;
	NumeroMaximoDeProyectos = 0;
	NumeroDeProgramadoresAsuCargo=3;
	NumeroActualDeProgramadores=0;
	NumeroActualDeProyectos=0;
	ListaDeProyectosAsuCargo = new Cproyecto * [NumeroMaximoDeProyectos];
	ListaDeprogramadoresQueJefeTieneAcargo = new Cprogramador * [NumeroDeProgramadoresAsuCargo];
	for (int i = 0; i < NumeroMaximoDeProyectos; i++)
	{
		ListaDeProyectosAsuCargo[i] = nullptr;
	}
	for (int i = 0; i < NumeroDeProgramadoresAsuCargo; i++)
	{
		ListaDeprogramadoresQueJefeTieneAcargo[i] = nullptr;
	}
}

Cjefe::~Cjefe()
{
}

string Cjefe::getNombre()
{
	return this->Nombre;
}

string Cjefe::getApellido()
{
	return this->Apellido;
}

bool Cjefe::getDisponibilidad()
{
	return this->Disponibilidad;
}

bool Cjefe::VerificarDisponibilidad()
{
	if (NumeroActualDeProyectos < NumeroMaximoDeProyectos)
	{
		Disponibilidad = true;
	}
	else
	{
		Disponibilidad = false;
	}
	return Disponibilidad;
}

void Cjefe::AsignarNumeroMaximoDeProyectos(int numeroMaximoDeProyectos)
{
	this->NumeroMaximoDeProyectos = numeroMaximoDeProyectos;
}

void Cjefe::AsignarNumeroMaximoDeProgramadores(int numeroMaximoDeProgramadores)
{
	this->NumeroDeProgramadoresAsuCargo = numeroMaximoDeProgramadores;
}

void Cjefe::asignarProyecto(Cproyecto* proyecto)// disponibilidad del jefe si bool disponible=1 de lo contrario =0=false
{
	if (VerificarDisponibilidad() == true)
	{
		ListaDeProyectosAsuCargo[NumeroActualDeProyectos] = proyecto;
		NumeroActualDeProyectos++;
	}
	else
	{
		cout << "el jefe: " << getNombre() << " " << getApellido() << " no esta disponible. " << endl;
	}
	

}
