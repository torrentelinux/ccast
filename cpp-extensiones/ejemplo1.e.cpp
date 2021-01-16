/*
    ejemplo1.e.cpp
    Octulio Bilet�n - Enero de 2021.
    
    Ejemplo sobre 'access': se cuenta con un vector num�rico de 10 elementos y se recorre el mismo desde la posici�n 0
    hasta la posici�n 9. Cada elemento del vector es visualizado en pantalla separado por un espacio en blanco.
    La direcci�n del recorrido es indicada con la palabra reservada 'forward'. El acceso a cada miembro del vector es
    indicado por el operador indirecci�n '*', tambi�n llamado operador de desreferencia.
    Se puede observar la ausencia de una variable �ndice para poder acceder a un elemento del vector.
*/
    
    #include <iostream>
    using namespace std;
    
    main()
    {
	int vector[] = { 4, 33, 23, 1, 0, 7, 99, -6, -62, 19 };

	access(vector; forward)
	{
	    // Muestra el contenido del vector, posici�n vigente
	    cout << *vector << " " << endl;
	}
    }
