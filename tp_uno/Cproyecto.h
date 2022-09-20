#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include <ctime>
#include<iostream>
#include"EnumEstadoDeProyecto.h"
#include"EnumEtapaDeProyecto.h"
#include"Cjefe.h"
#include"Centrega.h"
using namespace std;

class Cproyecto
{
private:

	string Nombre;
	tm FechaDeInicioDelProyecto;
	tm FechaPropuestaDeFinalDelProyecto;
	string IdDelProyecto;// distingue los proyectos
	EstadoDelProyecto EstadoDeProyecto; // espera=0, desarrollo=1,finalizado=2
	EtapaDelProyecto EtapaDeProyecto; //
	Cjefe* Jefe;
	Centrega** ListaDeEntregasRealizadas;
	int CantidadDeEntregas;
public:
	Cproyecto(string _nombre, string id);
	~Cproyecto();
	string getNombre();
	string getIdeDelProyecto();
	int getEstadoDeProyecto();
	int getEtapaDeProyecto();
	Cjefe* getJefe();
	int getCantidadDeEntregas();
	//------------------------------
	void setNombre(string nombre);
	void setIdeDelProyecto(string id);
	void setEstadoDeProyecto(EstadoDelProyecto estado);
	void setEtapaDeProyecto(EtapaDelProyecto etapa);
	void setJefe(Cjefe* jefe);
	//------------------------------
	void ImprimirListaDeEntregasRealizadas();
	void imprimirEstadoDelProyecto();
	void imprimirEtapaDelProyecto();
	//-------------------------------
	void EstablecerFechaDeInicioDeProyecto(int dia, int mes, int anio);
	void EstablecerFechaDeFinDeProyecto(int dia, int mes, int anio);
	void EstablecerNombreDelProyecto(string nombre);
	//-------------------------------
	void ImprimirFechaDeInicioDeProyecto();
	void ImprimirerFechaDeFinDeProyecto();
	void ImprimirNombreDelProyecto();
	void tostring();// (falta implementar)
	//-------------------------------
	void ReasignarProyecto();// (falta implementar)    // Reapunta el puntero Líder al nuevo jefe del proyecto que recibe por parámetro
	void RecibirEntrega(Centrega* entrega);//agrega la entrega a la lista

};

