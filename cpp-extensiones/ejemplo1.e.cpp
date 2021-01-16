/*
    ejemplo1.e.cpp
    Octulio Biletán - Enero de 2021.
    
    Ejemplo sobre 'access': se cuenta con un vector numérico de 10 elementos y se recorre el mismo desde la posición 0
    hasta la posición 9. Cada elemento del vector es visualizado en pantalla separado por un espacio en blanco.
    La dirección del recorrido es indicada con la palabra reservada 'forward'. El acceso a cada miembro del vector es
    indicado por el operador indirección '*', también llamado operador de desreferencia.
    Se puede observar la ausencia de una variable índice para poder acceder a un elemento del vector.
*/
    
    #include <iostream>
    using namespace std;
    
    main()
    {
	int vector[] = { 4, 33, 23, 1, 0, 7, 99, -6, -62, 19 };

	access(vector; forward)
	{
	    // Muestra el contenido del vector, posición vigente
	    cout << *vector << " " << endl;
	}
    }
