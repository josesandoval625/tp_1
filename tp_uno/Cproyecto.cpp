#include "Cproyecto.h"

Cproyecto::Cproyecto(string nombre, string id)
	:Nombre(nombre), IdDelProyecto(id)
{
	this->IdDelProyecto = " ";
	this->EstadoDeProyecto = EstadoDelProyecto::ESPERA;
	this->EtapaDeProyecto = EtapaDelProyecto::ETAPA_CERO;
	Jefe = nullptr;
	ListaDeEntregasRealizadas = new Centrega * [CantidadDeEntregas];
	for (int i = 0; i < CantidadDeEntregas; i++)
	{
		ListaDeEntregasRealizadas[CantidadDeEntregas] = nullptr;
	}
}
Cproyecto::~Cproyecto()
{
}

string Cproyecto::getNombre()
{
	return this->Nombre;
}

string Cproyecto::getIdeDelProyecto()
{
	return this->IdDelProyecto;
}

int Cproyecto::getEstadoDeProyecto()
{
	return this->EstadoDeProyecto;
}

int Cproyecto::getEtapaDeProyecto()
{
	return this->EtapaDeProyecto;
}

Cjefe* Cproyecto::getJefe()
{
	return this->Jefe;
}

int Cproyecto::getCantidadDeEntregas()
{
	return this->CantidadDeEntregas;
}

void Cproyecto::setNombre(string nombre)
{
	this->Nombre = nombre;
}

void Cproyecto::setIdeDelProyecto(string id)
{
	this->IdDelProyecto = id;
}

void Cproyecto::setEstadoDeProyecto(EstadoDelProyecto estado)
{
	this->EstadoDeProyecto = estado;
}

void Cproyecto::setEtapaDeProyecto(EtapaDelProyecto etapa)
{
	this->EtapaDeProyecto = etapa;
}

void Cproyecto::setJefe(Cjefe* jefe)
{
	this->Jefe = jefe;
}

void Cproyecto::ImprimirListaDeEntregasRealizadas()
{
	if (ListaDeEntregasRealizadas[CantidadDeEntregas] == nullptr)
	{
		cout << "todabia no tiene ninguna entrega" << endl;
	}
	else
	{
		for (int i = 0; i < CantidadDeEntregas; i++)
		{
			cout << ListaDeEntregasRealizadas[i] << endl;
		}
	}
}

void Cproyecto::imprimirEstadoDelProyecto()
{
	switch (EstadoDeProyecto)
	{
	case ESPERA:
		cout << "el proyecto se encuentra en estado de espera. " << endl;
		break;
	case DESARROLLO:
		cout << "el proyecto se encuentra en etado de desarrollo. " << endl;
		break;
	case FINALIZADO:
		cout << "el proyecto se encuentra finalizada. " << endl;
		break;
	default:
		break;
	}
}

void Cproyecto::imprimirEtapaDelProyecto()
{
	switch (EtapaDeProyecto)
	{
	case ETAPA_CERO:
		cout << "el proyecto se encuentra en etapa cero. " << endl;
		break;
	case PRIMERA_ETAPA:
		cout << "el proyecto se encuentra en primera etapa. " << endl;
		break;
	case SEGUNDA_ETAPA:
		cout << "el proyecto se encuentra en segunda etapa. " << endl;
		break;
	default:
		break;
	}
}

void Cproyecto::EstablecerFechaDeInicioDeProyecto(int dia, int mes, int anio)
{
	FechaDeInicioDelProyecto.tm_mday = dia;
	FechaDeInicioDelProyecto.tm_mon = mes;
	FechaDeInicioDelProyecto.tm_year = anio;
}

void Cproyecto::EstablecerFechaDeFinDeProyecto(int dia, int mes, int anio)
{
	FechaPropuestaDeFinalDelProyecto.tm_mday = dia;
	FechaPropuestaDeFinalDelProyecto.tm_mon = mes;
	FechaPropuestaDeFinalDelProyecto.tm_year = anio;
}

void Cproyecto::EstablecerNombreDelProyecto(string nombre)
{
	this->Nombre = nombre;
}

void Cproyecto::ImprimirFechaDeInicioDeProyecto()
{
	cout << "fecha de inicio del proyecto: "
		<< FechaDeInicioDelProyecto.tm_mday << " - "
		<< FechaDeInicioDelProyecto.tm_mon << " - "
		<< FechaDeInicioDelProyecto.tm_year << endl;
}

void Cproyecto::ImprimirerFechaDeFinDeProyecto()
{
	cout << "fecha final del proyecto: "
		<< FechaPropuestaDeFinalDelProyecto.tm_mday << " - "
		<< FechaPropuestaDeFinalDelProyecto.tm_mon << " - "
		<< FechaPropuestaDeFinalDelProyecto.tm_year << endl;
}

void Cproyecto::ImprimirNombreDelProyecto()
{
	cout << "el nombre del proyecto es: " << Nombre << endl;
}

void Cproyecto::tostring()
{
}

void Cproyecto::ReasignarProyecto()
{
}

void Cproyecto::RecibirEntrega(Centrega* entrega)
{
	ListaDeEntregasRealizadas[CantidadDeEntregas] = entrega;
}