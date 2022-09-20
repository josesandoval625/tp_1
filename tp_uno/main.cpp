#include<iostream>

using namespace std;

int main()
{
	//---- probando la clase proyecto
	Cjefe* jefe_1 = nullptr;
	Cproyecto* proyecto_1 = new Cproyecto("instalacion de software para tomografo.", "xxxaaa");
	cout << proyecto_1->getNombre() << endl;
	cout << proyecto_1->getIdeDelProyecto() << endl;
	cout << proyecto_1->getEstadoDeProyecto() << endl;
	cout << proyecto_1->getEtapaDeProyecto() << endl;
	cout << proyecto_1->getJefe() << endl;
	cout << proyecto_1->getCantidadDeEntregas() << endl;
	proyecto_1->imprimirEstadoDelProyecto();
	proyecto_1->imprimirEtapaDelProyecto();
	proyecto_1->EstablecerFechaDeInicioDeProyecto(1, 2, 3);
	proyecto_1->EstablecerFechaDeFinDeProyecto(4, 5, 6);
	proyecto_1->ImprimirFechaDeInicioDeProyecto();
	proyecto_1->ImprimirerFechaDeFinDeProyecto();
	proyecto_1->EstablecerNombreDelProyecto("hola mundo.");
	proyecto_1->ImprimirNombreDelProyecto();
	//------------- probando la clase Cjefe
	return 0;
}