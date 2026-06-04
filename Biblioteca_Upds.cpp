#include <iostream>
#include <vector>
#include <string>
#include <fstream>   

#define RESET   "\033[0m"
#define ROJO    "\033[31m"
#define VERDE   "\033[32m"
#define AMARILLO "\033[33m"
#define AZUL    "\033[34m"
#define CYAN    "\033[36m"
#define CELESTE    "\033[94m"


    using namespace std;
    
    	struct Estudiante{
		int CI;
		string nombre;  
		string carrera;
	    };
	    
	    struct Libro {
            string titulo;
  	        string codigo; 
            string autor;
            int cantidad;
            bool prestado;
	   };
	   
	    struct Prestamo{
		Libro prestado;
		Estudiante deudor;
		//Fecha fecha_de_prestamo;
		//prestado prest;
	    };
	    
	    
void Los_Libros_Prestados(vector<string> &title_prog,vector<string> &autor_prog,vector<string> &codigo_prog,vector<int> &cantidad_prog,vector <bool> &presti_IS,
                          vector<string> &title_de,  vector<string> &autor_de,  vector<string> &codigo_de,  vector<int> &cantidad_de,vector  <bool> &presti_DE,
                          vector<string> &title_me,  vector<string> &autor_me,  vector<string> &codigo_me,  vector<int> &cantidad_me,vector  <bool> &presti_ME,int pos){

    cout <<CYAN<< "     ╔═════════════════════════════════════╗" << endl;
    cout <<CYAN<< "     ║              CATEGORIAS             ║" << endl;
    cout <<CYAN<< "     ╠═════════════════════════════════════╣" << endl;
    cout <<CYAN<< "     ║           1) Programacion           ║" << endl;
    cout <<CYAN<< "     ║           2) Derecho                ║" << endl;
    cout <<CYAN<< "     ║           3) Medicina               ║" << endl;
    cout <<CYAN<< "     ║          *4) Salir                  ║" << endl;
    cout <<CYAN<< "     ╚═════════════════════════════════════╝" << endl;
        cout <<AMARILLO<< " Elija Categoria que desea elegir......."<<endl;
        cout << "   Opcion: ";
	    int libroElegido;
	    int opcion;
	   cin>>opcion; 
	        switch (opcion){
	            
	            case 1:
	          cout<<VERDE<<"       <><><><><> Eligio la categoria de Programacion <><><><>"<<endl;
	            cout<<endl;
                                                          
            cout << AZUL;
            cout << "                             ::                                         " << endl;
            cout << "                          .-======-.                                    " << endl;
            cout << "                        :==============:                                " << endl;
            cout << "                    .======================.                            " << endl;
            cout << "                 :=========-:.    .:-=========:                         " << endl;
            cout << "                -========              ======+*+                        " << endl;
            cout << "                -======.                .=+####+                        " << endl;
            cout << "                -=====      :======:  :+#######+                        " << endl;
            cout << "                -====:     -=======+####**##**#+                        " << endl;
            cout << "                -====:     ====+*######   =-   +                        " << endl;
            cout << "                -====:     -+###########**##**#+                        " << endl;
            cout << "                -=====      -######-  :+#######+                        " << endl;
            cout << "                -====+#.                .######+                        " << endl;
            cout << "                -=+######.            .########+                        " << endl;
            cout << "                 -#########*-.    .-*#########-                         " << endl;
            cout << "                    .*####################*.                            " << endl;
            cout << "                        =##############=                                " << endl;
            cout << "                            :*######*:                                  " << endl;
            cout << "                                --                                      " << endl;                                        

	            cout<<AMARILLO<<"Que libro de sea pedir prestado????"<<endl;
                  cout << endl;
                  
					system("chcp 65001 > nul");
	          	for (size_t i = 0; i<title_prog.size();i++){


    cout <<CYAN<< "╔═══════════════════════════════════════════════════════════════════╗" << endl;
    cout <<CYAN<< "║                      LIBROS DE PROGRAMACION                       ║" << endl;
    cout <<CYAN<< "╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    cout <<CYAN<< "║ N°"<<i<<" ║    Titulo: "<<title_prog [i] <<"           " << endl;
    cout <<CYAN<< "║═════╝    Autor: "<<autor_prog [i]<<"             " << endl;
    cout <<CYAN<< "║          Codigo: "<<codigo_prog [i]<<"                                       ║" << endl;
    cout <<CYAN<< "║          Cantidad de ejemplares Disponibles: "<<cantidad_prog [i]<<"                    ║" << endl;
    cout <<CYAN<< "╚═══════════════════════════════════════════════════════════════════╝" << endl;
			cout<<""<<endl;
		    cout<<""<<endl;
	          	}
	          	
    cout <<VERDE<< "   ############################################################################"<<endl;
    cout <<VERDE<< "   ## Seleccione por favor el numero (N°) del libro que desea pedir prestado: ";
    cin >> libroElegido;
    cout <<VERDE<< "   ############################################################################"<<endl;
    // Control de ejemplares
    if (cantidad_prog[libroElegido] > 0) {
        
        // Solicitud de un nuevo libro
        cantidad_prog[libroElegido]--; 
        presti_IS [pos] =true;    
      
        cout<<"████  ████  █████  ████ █████  ███  █   █  ███     █████ █   █ ███ █████  ███   ████  ███  "<<endl;
        cout<<"█   █ █   █ █     █       █   █   █ ██ ██ █   █    █      █ █   █    █   █   █ █     █   █ "<<endl;
        cout<<"████  ████  ████   ███    █   █████ █ █ █ █   █    ████    █    █    █   █   █  ███  █   █"<<endl;
        cout<<"█     █  █  █         █   █   █   █ █   █ █   █    █      █ █   █    █   █   █     █ █   █ "<<endl; 
        cout<<"█     █   █ █████ ████    █   █   █ █   █  ███     █████ █   █ ███   █    ███  ████   ███"<<endl;
        cout<<""<<endl;
        cout<<""<<endl;

        //Aqui se va atrabajar en la generacion del archivo
        ofstream archivo; // Objeto para escribir
    
    archivo.open("DatosPrestamo.txt", ios::out); // Crear/abrir archivo en modo escritura
    
    if (archivo.fail()) {
        cout << "Error al abrir el archivo" << endl;
        //return 0;
    }
    
    archivo << "                        --------------------------------------------" << endl;
    archivo << "                       |    BIBLIOTECA UNIVERSIDAD DOMINGO SAVIO    |" << endl;
    archivo << "                        --------------------------------------------" << endl;
    archivo << "*****************************  Boleta de registro del Prestamo  **********************" << endl;
    archivo << "    ╔═══════════════════════════════════════════════════════════════════╗" << endl;
    archivo << "    ║                            DATOS DEl LIBRO                        ║" << endl;
    archivo << "    ╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    archivo << "    ║ N°"<<libroElegido<<" ║    Titulo: "<<title_prog [libroElegido] <<"           " << endl;
    archivo << "    ║═════╝    Autor: "<<autor_prog [libroElegido]<<"             " << endl;
    archivo << "    ║          Codigo: "<<codigo_prog [libroElegido]<<"                                       ║" << endl;
    archivo << "    ╚═══════════════════════════════════════════════════════════════════╝" << endl;
    archivo << "    Nota: Recuerde que para su devolucion debe tener su boleta de registro del pretamo"<<endl;
    archivo << "          para su devolucion ya que se le pedira el codigo del libro."<<endl;
    archivo.close(); 
    
    cout << "Datos escritos correctamente." << endl;

             cout <<VERDE<< "╔══════════════════════════════════════════════════════════╗" << endl;
             cout <<VERDE<< "║ "<<AMARILLO<<"  Copias restantes de este libro: " <<CYAN<< cantidad_prog[libroElegido]<<VERDE<<"            ║" << endl;
             cout <<VERDE<< "╚══════════════════════════════════════════════════════════╝" << endl;
      
        
    } else {
             cout <<CYAN<< "╔════════════════════════════════════════════════════════════════════╗" << endl;
             cout <<CYAN<< "║ "<<ROJO<<" Lo sentimos, este libro se encuentra AGOTADO por el momento :( "<<CYAN<<"                  ║" << endl;
             cout <<CYAN<< "╚════════════════════════════════════════════════════════════════════╝" << endl;
    }  	
	            break;
	            
	            case 2:
	                cout<<VERDE<<"&&&&&&&&&&&&& "<<AMARILLO<<"Eligio la categoria de Derecho "<<VERDE<<"&&&&&&&&&&&&&"<<endl;
                  cout<<endl;
            cout << AMARILLO;
            cout << "                            :==-+**=#@%+.                        " << endl;
            cout << "                        .+##@@@%@%%*%%%%=                        " << endl;
            cout << "        .:.            -*@@%%@@#@*%%#@@@* .:.         " << endl;
            cout << "      .*@@@#.        :+%%#@@#@@#@%##%%%@%=-        +@@@#:        " << endl;
            cout << "      =@@%#@:     .=#%+#%####%%##%%%#%@@@=#%+:     @%#@@* " << endl;
            cout << "      .%@@#=.:-=+#%*-  %@@@@@@%%@@@@@#@@@: :+%%*=-:.-*%@@-        " << endl;
            cout << "       .+#####*+=:     *@@@@@%*@@@@@@@#@=     :-+**####+:        " << endl;
            cout << "         =:            -@@@@@##@@@@@@@#.              .=.         " << endl;
            cout << "        ::..            #%@@@%##%@@@@=                :::         " << endl;
            cout << "       ..: :            =@@@%%%###%%-                : : :        " << endl;
            cout << "       : :  :           .%%%%%@%%%%+                .. : ..       " << endl;
            cout << "      :  :  ..           %@@@@@@@@@-                :  :  :       " << endl;
            cout << "     ..  :   :           #@@@@@@@@@-               :   :   :      " << endl;
            cout << "     :   :    :          #@@@@@@@@@=              ..   :   ..     " << endl;
            cout << "    :   :    ..          #@@@@@@@@@#              :   :   :      " << endl;
            cout << " .  #****#*****+         %@@@@@@@@@@         -*****#*****-    " << endl;
            cout << " -  +@@@@@@@@@@:         %@@@@@@@@@@-        .#@@@@@@@@@#     " << endl;
            cout << " -   =%@@@@@@#:          @@@@@@@@@@@* .*@@@@@@@+.     " << endl;
            cout << " -      :=+=-.           @@@@@@@@@@@@.             .-=+=-.        " << endl;
            cout << " :                      .@@@@@@@@@@@@=                            " << endl;
            cout << " -                      .@@@@@@@@@@@@#                            " << endl;
            cout << " :                      .@@@@@@@@@@@@@:                           " << endl;
            cout << " -                       :::::--------.                           " << endl;
            cout << endl;
                  
	          	for (size_t i=0; i<title_de.size();i++){
		       
    cout <<CYAN<< "╔═══════════════════════════════════════════════════════════════════╗" << endl;
    cout <<CYAN<< "║                      LIBROS DE DERECHO                          ║" << endl;
    cout <<CYAN<< "╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    cout <<CYAN<< "║ N°"<<i<<" ║    Titulo: "<<title_de [i] <<"           " << endl;
    cout <<CYAN<< "║═════╝    Autor: "<<autor_de [i]<<"             " << endl;
    cout <<CYAN<< "║          Codigo: "<<codigo_de [i]<<"                                       ║" << endl;
    cout <<CYAN<< "║          Cantidad de ejemplares Disponibles: "<<cantidad_de [i]<<"                    ║" << endl;
    cout <<CYAN<< "╚═══════════════════════════════════════════════════════════════════╝" << endl;
	
	          	}
	        
    cout <<VERDE<< "   ############################################################################"<<endl;
    cout <<VERDE<< "   ## Seleccione por favor el numero (N°) del libro que desea pedir prestado: ";
    cin >> libroElegido;
    cout <<VERDE<< "   ############################################################################"<<endl; 
    // Control de ejemplares
    if (cantidad_de[libroElegido] > 0) {
        
        // Solicitud del libro
        cantidad_de[libroElegido]--; 
          presti_DE [pos] =true;    
        cout<<AMARILLO<<"████  ████  █████  ████ █████  ███  █   █  ███     █████ █   █ ███ █████  ███   ████  ███  "<<endl;
        cout<<"█   █ █   █ █     █       █   █   █ ██ ██ █   █    █      █ █   █    █   █   █ █     █   █ "<<endl;
        cout<<"████  ████  ████   ███    █   █████ █ █ █ █   █    ████    █    █    █   █   █  ███  █   █"<<endl;
        cout<<"█     █  █  █         █   █   █   █ █   █ █   █    █      █ █   █    █   █   █     █ █   █ "<<endl; 
        cout<<"█     █   █ █████ ████    █   █   █ █   █  ███     █████ █   █ ███   █    ███  ████   ███"<<endl;
        cout<<""<<endl;
        cout<<""<<endl;

        //Aqui se va atrabajar en la generacion del archivo
        ofstream archivo; // Objeto para escribir
    
    archivo.open("DatosPrestamoD.txt", ios::out); // Crear/abrir archivo en modo escritura
    
    if (archivo.fail()) {
        cout << "Error al abrir el archivo" << endl;
        //return 0;
    }
    
    archivo <<VERDE <<"                        --------------------------------------------" << endl;
    archivo << "                           |    BIBLIOTECA UNIVERSIDAD DOMINGO SAVIO    |" << endl;
    archivo << "                        --------------------------------------------" << endl;
    archivo << "    *****************************  Boleta de registro del Prestamo  **********************" << endl;
    archivo << "         ╔═══════════════════════════════════════════════════════════════════╗" << endl;
    archivo << "         ║                      LIBROS DE PROGRAMACION                       ║" << endl;
    archivo << "         ╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    archivo << "         ║ N°"<<libroElegido<<" ║    Titulo: "<<title_de [libroElegido] <<"           " << endl;
    archivo << "         ║═════╝    Autor: "<<autor_de [libroElegido]<<"             " << endl;
    archivo << "         ║          Codigo: "<<codigo_de [libroElegido]<<"                                       ║" << endl;
    archivo << "         ╚═══════════════════════════════════════════════════════════════════╝" << endl;
    archivo << "    Nota: Recuerde que para su devolucion debe tener su boleta de registro del pretamo"<<endl;
    archivo << "          para su devolucion ya que se le pedira el codigo del libro."<<endl;

    archivo.close(); 
    cout << AMARILLO<<"       ::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout << "     Datos escritos correctamente." << endl;
    cout << "       ::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;

             cout <<VERDE<< "╔════════════════════════════════════════════════════════════════════╗" << endl;
             cout <<VERDE<< "║ "<<AMARILLO<<"  Copias restantes de este libro: " <<CYAN<< cantidad_de[libroElegido]<<AMARILLO<<"                    ║" << endl;
             cout <<VERDE<< "╚════════════════════════════════════════════════════════════════════╝" << endl;
    } else {
             cout <<CYAN<< "╔════════════════════════════════════════════════════════════════════╗" << endl;
             cout <<CYAN<< "║ "<<ROJO<<" Lo sentimos, este libro se encuentra AGOTADO por el momento :( "<<CYAN<<"                  ║" << endl;
             cout <<CYAN<< "╚════════════════════════════════════════════════════════════════════╝" << endl;
    }

	            break;
	            
	            case 3:
	                cout<<AMARILLO<<" &&&&&&&&&&&&&&&&&&&&&&&&&&&&&& Eligio la categoria de Medicina &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
            cout << VERDE;
            cout << "                         =@@@@=                        " << endl;
            cout << "                         #@@@@#                        " << endl;
            cout << "                 .=*%@* =@@=  *%*=.                   " << endl;
            cout << "   .%%%@@@@@@@@@@@@@@@@@+.@@.+@@@@@@@@@@@@@@@@%%%%.    " << endl;
            cout << "     =**%@@@@@@@@@@@@@@@@.@@.@@@@@@@@@@@@@@@@@**=      " << endl;
            cout << "         .:*@@@@@@@@@@@@@.@@.@@@@@@@@@@@@@*:.          " << endl;
            cout << "             .=#-.*@@@@@@@.@@.@@@@@@@*.-#=.            " << endl;
            cout << "                    .::.   @@   .::.                   " << endl;
            cout << "                .*@@@@@@@: @@ :@@@@@@@*.               " << endl;
            cout << "                #@@*.*%@%= @@ =%@%*.*@@#               " << endl;
            cout << "                +@@@%-..   %%   ..-%@@@+               " << endl;
            cout << "                 *@@@*.%%%@@@@@@@@@@+                  " << endl;
            cout << "                     *@@@@@@@@@%=::                    " << endl;
            cout << "                    =@@@%: ## :%@@@=                   " << endl;
            cout << "                    =@@@%: @@ :%@@@=                   " << endl;
            cout << "                     *%@#+:-%@@@@%* " << endl;
            cout << "                       *@@@@@%#..                      " << endl;
            cout << "                      @@@@%:=-:%@@@                    " << endl;
            cout << "                      :@@@+ ## +@@@:                   " << endl;
            cout << "                       :%==*%@@@@%:                    " << endl;
            cout << "                        =@@@#*=-+=                     " << endl;
            cout << "                        *@@:++:@@* " << endl;
            cout << "                         ::#@@@@@                      " << endl;
            cout << "                        -@@@:.#%@-                     " << endl;
            cout << "                         :##:+@#:                      " << endl;
            cout << "                         -*#+.-*-                      " << endl;
            cout << "                            ==                         " << endl;
            cout << "                            --                         " << endl;
                    cout << endl;
		            cout<<"Que libro de sea pedir prestado?"<<endl;       
                	cout << endl;            
          for (size_t i=0; i<title_me.size();i++){

    cout <<CYAN<< "╔═══════════════════════════════════════════════════════════════════╗" << endl;
    cout <<CYAN<< "║                      LIBROS DE MEDICINA                         ║" << endl;
    cout <<CYAN<< "╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    cout <<CYAN<< "║ N°"<<i<<" ║    Titulo: "<<title_me [i] <<"           " << endl;
    cout <<CYAN<< "║═════╝    Autor: "<<autor_me [i]<<"             " << endl;
    cout <<CYAN<< "║          Codigo: "<<codigo_me [i]<<"                                       ║" << endl;
    cout <<CYAN<< "║          Cantidad de ejemplares Disponibles: "<<cantidad_me [i]<<"                    ║" << endl;
    cout <<CYAN<< "╚═══════════════════════════════════════════════════════════════════╝" << endl;
	
	          	}
    cout <<VERDE <<"Ingrese el numero de indice del libro que desea prestar: ";
    cin >> libroElegido;
    
    // Control de ejemplares
    if (cantidad_me[libroElegido] > 0) {
        
        // Solicitud de un nuevo libro
        cantidad_me[libroElegido]--; 
        
           cout<<AMARILLO<<"████  ████  █████  ████ █████  ███  █   █  ███     █████ █   █ ███ █████  ███   ████  ███  "<<endl;
        cout<<"█   █ █   █ █     █       █   █   █ ██ ██ █   █    █      █ █   █    █   █   █ █     █   █ "<<endl;
        cout<<"████  ████  ████   ███    █   █████ █ █ █ █   █    ████    █    █    █   █   █  ███  █   █"<<endl;
        cout<<"█     █  █  █         █   █   █   █ █   █ █   █    █      █ █   █    █   █   █     █ █   █ "<<endl; 
        cout<<"█     █   █ █████ ████    █   █   █ █   █  ███     █████ █   █ ███   █    ███  ████   ███"<<endl;
        cout<<""<<endl;
        cout<<""<<endl;

        //Aqui se va atrabajar en la generacion del archivo
        ofstream archivo; // Objeto para escribir
    
    archivo.open("DatosPrestamo.txt", ios::out); // Crear/abrir archivo en modo escritura
    
    if (archivo.fail()) {
        cout << "Error al abrir el archivo" << endl;
        //return 0;
    }
    
    archivo << "                        --------------------------------------------" << endl;
    archivo << "                       |    BIBLIOTECA UNIVERSIDAD DOMINGO SAVIO    |" << endl;
    archivo << "                        --------------------------------------------" << endl;
    archivo << "*****************************  Boleta de registro del Prestamo  **********************" << endl;
    archivo << "    ╔═══════════════════════════════════════════════════════════════════╗" << endl;
    archivo << "    ║                      LIBROS DE MEDICINA                           ║" << endl;
    archivo << "    ╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    archivo << "    ║ N°"<<libroElegido<<" ║    Titulo: "<<title_me [libroElegido] <<"           " << endl;
    archivo << "    ║═════╝    Autor: "<<autor_me [libroElegido]<<"             " << endl;
    archivo << "    ║          Codigo: "<<codigo_me [libroElegido]<<"                                       ║" << endl;
    archivo << "    ╚═══════════════════════════════════════════════════════════════════╝" << endl;
    archivo << "    Nota: Recuerde que para su devolucion debe tener su boleta de registro del pretamo"<<endl;
    archivo << "          para su devolucion ya que se le pedira el codigo del libro."<<endl;

    archivo.close(); 
    
    cout << AMARILLO<<"       ::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout << "     Datos escritos correctamente." << endl;
    cout << "       ::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout << endl;
    cout << VERDE<<"      ++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout << "    Copias restantes de este libro: " << cantidad_me[libroElegido] << endl;
    cout << "      ++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
         presti_ME [pos]=true;
    } else {
        cout << ROJO<<"Lo sentimos, este libro se encuentra AGOTADO por el momento." << endl;
    }
	            break;
	            
	            case 4:
	            cout <<endl;
	            cout << AMARILLO<< "SALIENDO DE LA SECCION DE PRESTAMOS....."<<endl;
	            
	            break;
	        }
	    }

void Los_Libros_Devolver(vector<string> &title_prog,vector<string> &autor_prog,vector<string> &codigo_prog,vector<int> &cantidad_prog,vector <bool> &ver_IS,
                         vector<string> &title_de,  vector<string> &autor_de,  vector<string> &codigo_de,  vector<int> &cantidad_de  ,vector  <bool> &ver_DE,
                         vector<string> &title_me,  vector<string> &autor_me,  vector<string> &codigo_me,  vector<int> &cantidad_me  ,vector <bool> &ver_ME, int posi){

    cout <<CYAN<< "     ╔═════════════════════════════════════╗" << endl;
    cout <<CYAN<< "     ║              CATEGORIAS             ║" << endl;
    cout <<CYAN<< "     ╠═════════════════════════════════════╣" << endl;
    cout <<CYAN<< "     ║           1) Programacion           ║" << endl;
    cout <<CYAN<< "     ║           2) Derecho                ║" << endl;
    cout <<CYAN<< "     ║           3) Medicina               ║" << endl;
    cout <<CYAN<< "     ║          *4) Salir                  ║" << endl;
    cout <<CYAN<< "     ╚═════════════════════════════════════╝" << endl;
        cout <<AMARILLO<< " Elija Categoria que a devolver elegir: "<<endl;	    
        int opcion;
	    string libroCodigo;
        int verificacion = 0;
		bool bandera = false;
        int desi;
	    cin >> opcion;

	        switch (opcion){
	            
	            case 1:
	                cout << AMARILLO<<" <<<<<<<<<<<Eligio la categoria de Programacion >>>>>>>>>>>>" << endl;
                    cout << VERDE <<"   Ingrese el codigo del libro: ";
                    cin >> libroCodigo;
		   
                    // Búsqueda secuencial
                    for (size_t i = 0; i < codigo_prog.size(); i++){
                        if (libroCodigo == codigo_prog[i]){
                            verificacion = i;
                            bandera = true;
                            break;
                        }
                    }

                    if (bandera == false){
                        cout << ROJO<<"No Esta registrado en la base de datos o es incorrecto el codigo ingresado......" << endl;            
                    } else {
                        cout <<AMARILLO <<"Esta registrado en la base de datos y es correcto" << endl;
    cout <<CYAN<< "     ╔═════════════════════════════════════╗" << endl;
    cout <<CYAN<< "     ║           DATOS DEL LIBRO           ║" << endl;
    cout <<CYAN<< "     ╠═════════════════════════════════════╣" << endl;
    cout <<CYAN<< "     ║      Nombre: " << title_prog[verificacion] <<"       ║" << endl; 
    cout <<CYAN<< "     ║      Autor: " << autor_prog[verificacion] <<"        ║" << endl;
    cout <<CYAN<< "     ║           2) Derecho                ║" << endl;
    cout <<CYAN<< "     ║           3) Medicina               ║" << endl;
    cout <<CYAN<< "     ║          *4) Salir                  ║" << endl;
    cout <<CYAN<< "     ╚═════════════════════════════════════╝" << endl;
   
                        // Control de Devolución
                        if (ver_IS[posi] == true){
                            cout << "Estado: Prestado" << endl;
                            cout << "Desea devolver el libro?" << endl;
                            cout << "1) SI" << endl;
                            cout << "2) NO " << endl;
                            cin >> desi;
                            
                            if (desi == 1){


    cout <<AMARILLO<< " ####     ######   ##  ##   ##  ##   ######   ##       ######   ####             ####     ####    ##  ##           ######   ##  ##   ######   ######   ####  \n";
    cout << " ## ##    ##       ##  ##   ##  ##   ##       ##         ##    ##  ##            ## ##    ##  ##   ### ##           ##       ##  ##     ##       ##    ##  ## \n";
    cout << " ##  ##   #####    ##  ##   ##  ##   #####    ##         ##    ##  ##            ##       ##  ##   ######           #####     ####      ##       ##    ##  ## \n";
    cout << " ##  ##   ##       ##  ##   ##  ##   ##       ##         ##    ##  ##            ##       ##  ##   ######           ##        ####      ##       ##    ##  ## \n";
    cout << " ## ##    ##        ####    ##  ##   ##       ##         ##    ##  ##            ## ##    ##  ##   ## ###           ##       ##  ##     ##       ##    ##  ## \n";
    cout << " ####     ######     ##      ######   ######   ######     ##      ####             ####     ####    ##  ##           ######   ##  ##   ######     ##      ####  \n";
        cout<<""<<endl;
        cout<<""<<endl;

        //Aqui se va atrabajar en la generacion del archivo
        ofstream archivo; // Objeto para escribir
    
    archivo.open("DatosPrestamo.txt", ios::out); // Crear/abrir archivo en modo escritura
    
    if (archivo.fail()) {
        cout << "Error al abrir el archivo" << endl;
        //return 0;
    }
    
    archivo << "                        --------------------------------------------" << endl;
    archivo << "                       |    BIBLIOTECA UNIVERSIDAD DOMINGO SAVIO    |" << endl;
    archivo << "                        --------------------------------------------" << endl;
    archivo << "*****************************  Boleta de registro de Devolucion  **********************" << endl;
    archivo << "    ╔═══════════════════════════════════════════════════════════════════╗" << endl;
    archivo << "    ║                      DATOS DEL LIBRO DEVUELTO                       ║" << endl;
    archivo << "    ╠═════╗═════════════════════════════════════════════════════════════╣" << endl;
    archivo << "    ║ N°"<<" ║    Titulo: "<<title_prog[verificacion] <<"           " << endl;
    archivo << "    ║═════╝    Autor: "<<autor_prog[verificacion]<<"             " << endl;
    archivo << "    ║          Codigo: "<<codigo_prog[verificacion]<<"                                       ║" << endl;
    archivo << "    ╚═══════════════════════════════════════════════════════════════════╝" << endl;

    archivo.close(); 
    
    cout << "Datos escritos correctamente." << endl;

                                cout << "Libro devuelto exitosamente" << endl;
                                cantidad_prog[verificacion]++;	 
                                ver_IS[posi] = false;
                            } else if (desi == 2){
                                cout << "Se cancelo la devolucion" << endl;
                            } else {
                                cout << "NUMERO SELECCIONADO INCORRECTO" << endl;
                            }	    
                        } else { 
                         
                            cout << " No se pidio prestado este libro " << endl;
                        }
                    }
	                break;
	            
	            case 2:
	                cout << "Eligio la categoria de Derecho" << endl;
                    cout << "Ingrese el codigo del libro" << endl; 
                    cin >> libroCodigo;
		    
                    // Búsqueda secuencial
                    for (size_t i = 0; i < codigo_de.size(); i++){
                        if (libroCodigo == codigo_de[i]){
                            verificacion = i;
                            bandera = true;
                            break;
                        }
                    }

                    if (bandera == false){
                        cout << "No Esta registrado en la base de datos o es incorrecto el codigo ingresado......" << endl;            
                    } else {
                        cout << "Esta registrado en la base de datos y es correcto" << endl;
                        cout << "DATOS DEL LIBRO." << endl;
                        cout << " Nombre: " << title_de[verificacion] << endl;
                        cout << " Autor: " << autor_de[verificacion] << endl;
                        
                        // CSe controla la devolucion
                        if (ver_DE[posi] == true){
                            cout << "Estado: Prestado" << endl;
                            cout << "Desea devolver el libro?" << endl;
                            cout << "1) SI" << endl;
                            cout << "2) NO " << endl;
                            cin >> desi;
                            
                            if (desi == 1){
                             cout <<AMARILLO<< " ####     ######   ##  ##   ##  ##   ######   ##       ######   ####             ####     ####    ##  ##           ######   ##  ##   ######   ######   ####  \n";
    cout << " ## ##    ##       ##  ##   ##  ##   ##       ##         ##    ##  ##            ## ##    ##  ##   ### ##           ##       ##  ##     ##       ##    ##  ## \n";
    cout << " ##  ##   #####    ##  ##   ##  ##   #####    ##         ##    ##  ##            ##       ##  ##   ######           #####     ####      ##       ##    ##  ## \n";
    cout << " ##  ##   ##       ##  ##   ##  ##   ##       ##         ##    ##  ##            ##       ##  ##   ######           ##        ####      ##       ##    ##  ## \n";
    cout << " ## ##    ##        ####    ##  ##   ##       ##         ##    ##  ##            ## ##    ##  ##   ## ###           ##       ##  ##     ##       ##    ##  ## \n";
    cout << " ####     ######     ##      ######   ######   ######     ##      ####             ####     ####    ##  ##           ######   ##  ##   ######     ##      ####  \n";
        cout<<""<<endl;
        cout<<""<<endl;

        //Aqui se va atrabajar en la generacion del archivo
        ofstream archivo; // Objeto para escribir
    
    archivo.open("DatosPrestamo.txt", ios::out); // Crear/abrir archivo en modo escritura
    
    if (archivo.fail()) {
        cout << "Error al abrir el archivo" << endl;
        //return 0;
    }
    
    archivo << "                        --------------------------------------------" << endl;
    archivo << "                       |    BIBLIOTECA UNIVERSIDAD DOMINGO SAVIO    |" << endl;
    archivo << "                        --------------------------------------------" << endl;
    archivo << "*****************************  Boleta de registro de Devolucion  **********************" << endl;
    archivo << "    ╔═══════════════════════════════════════════════════════════════════╗" << endl;
    archivo << "    ║                      DATOS DEL LIBRO DEVUELTO                       ║" << endl;
    archivo << "    ╠═══════════════════════════════════════════════════════════════════╣" << endl;
    archivo << "    ║           Titulo: "<<title_de[verificacion] <<"           " << endl;
    archivo << "    ║          Autor: "<<autor_de[verificacion]<<"             " << endl;
    archivo << "    ║          Codigo: "<<codigo_de[verificacion]<<"                                       ║" << endl;
    archivo << "    ╚═══════════════════════════════════════════════════════════════════╝" << endl;

    archivo.close(); 
    
    cout << "Datos escritos correctamente." << endl;

                                cantidad_de[verificacion]++;	 
                                ver_DE[posi] = false; 
                            } else if (desi == 2){
                                cout << "Se cancelo la devolucion" << endl;
                            } else {
                                cout << "NUMERO SELECCIONADO INCORRECTO" << endl;
                            }	    
                        } else {
                            cout << " No se pidio prestado este libro " << endl;
                        }
                    }
	                break;

	            case 3:
	                cout << "Eligio la categoria de Medicina" << endl;
                    cout << "Ingrese el codigo del libro" << endl;
                    cin >> libroCodigo;
		    
                    // Búsqueda secuencial
                    for (size_t i = 0; i < codigo_me.size(); i++){
                        if (libroCodigo == codigo_me[i]){
                            verificacion = i;
                            bandera = true;
                            break;
                        }
                    }

                    if (bandera == false){
                        cout << "No Esta registrado en la base de datos o es incorrecto el codigo ingresado......" << endl;            
                    } else {
                        cout << "Esta registrado en la base de datos y es correcto" << endl;
                        cout << "DATOS DEL LIBRO." << endl;
                        cout << " Nombre: " << title_me[verificacion] << endl;
                        cout << " Autor: " << autor_me[verificacion] << endl;
                        
                        // Control de Devolución
                        if (ver_ME[posi] == true){
                            cout << "Estado: Prestado" << endl;
                            cout << "Desea devolver el libro?" << endl;
                            cout << "1) SI" << endl;
                            cout << "2) NO " << endl;
                            cin >> desi;
                            
                            if (desi == 1){
                                  cout <<AMARILLO<< " ####     ######   ##  ##   ##  ##   ######   ##       ######   ####             ####     ####    ##  ##           ######   ##  ##   ######   ######   ####  \n";
    cout << " ## ##    ##       ##  ##   ##  ##   ##       ##         ##    ##  ##            ## ##    ##  ##   ### ##           ##       ##  ##     ##       ##    ##  ## \n";
    cout << " ##  ##   #####    ##  ##   ##  ##   #####    ##         ##    ##  ##            ##       ##  ##   ######           #####     ####      ##       ##    ##  ## \n";
    cout << " ##  ##   ##       ##  ##   ##  ##   ##       ##         ##    ##  ##            ##       ##  ##   ######           ##        ####      ##       ##    ##  ## \n";
    cout << " ## ##    ##        ####    ##  ##   ##       ##         ##    ##  ##            ## ##    ##  ##   ## ###           ##       ##  ##     ##       ##    ##  ## \n";
    cout << " ####     ######     ##      ######   ######   ######     ##      ####             ####     ####    ##  ##           ######   ##  ##   ######     ##      ####  \n";
        cout<<""<<endl;
        cout<<""<<endl;

        //Aqui se va atrabajar en la generacion del archivo
        ofstream archivo; // Objeto para escribir
    
    archivo.open("DatosPrestamo.txt", ios::out); // Crear/abrir archivo en modo escritura
    
    if (archivo.fail()) {
        cout << "Error al abrir el archivo" << endl;
        //return 0;
    }
    
    archivo << "                        --------------------------------------------" << endl;
    archivo << "                       |    BIBLIOTECA UNIVERSIDAD DOMINGO SAVIO    |" << endl;
    archivo << "                        --------------------------------------------" << endl;
    archivo << "*****************************  Boleta de registro de Devolucion  **********************" << endl;
    archivo << "    ╔═══════════════════════════════════════════════════════════════════╗" << endl;
    archivo << "    ║                      DATOS DEL LIBRO DEVUELTO                       ║" << endl;
    archivo << "    ╠═══════════════════════════════════════════════════════════════════╣" << endl;
    archivo << "    ║          Titulo: "<<title_me[verificacion] <<"           " << endl;
    archivo << "    ║          Autor: "<<autor_me[verificacion]<<"             " << endl;
    archivo << "    ║          Codigo: "<<codigo_me[verificacion]<<"                                       ║" << endl;
    archivo << "    ║          Estado del Usuario: NO DEBE                              ║" << endl;
    archivo << "    ╚═══════════════════════════════════════════════════════════════════╝" << endl;
    archivo << "        NOTA: Gracias por devolver el libro......... :)"<<endl;
    archivo << "    ====================================================================="<<endl;
    archivo << "                        © 2026 Biblioteca UPDS"<<endl;
    archivo << "    ====================================================================="<<endl;
    archivo.close(); 
    
    cout << "Datos escritos correctamente." << endl;

                                cantidad_me[verificacion]++;	 
                                ver_ME[posi] = false; 
                            } else if (desi == 2){
                                cout << "Se cancelo la devolucion" << endl;
                            } else {
                                cout << "NUMERO SELECCIONADO INCORRECTO" << endl;
                            }
                        } else {
                            cout << " No se pidio prestado este libro " << endl;
                        }
                    }     	
	                break;
	            
	            case 4:
	                cout << "SALIENDO DE LA SECCION DE DEVOLUCIONES....." << endl;
	                break;
	        }
	    }

void Los_Libros_Donar(vector<string> &title_sis, vector<string> &aut_sis, vector<int> &cant_sis,vector<string> &cod_sis,
					  vector<string> &title_de,  vector<string> &aut_de,  vector<int> &cant_de, vector<string> &cod_de,
					  vector<string> &title_me,  vector<string> &aut_me,  vector<int> &cant_me, vector<string> &cod_me, Libro book){
	    
						int opcion_D;
			cout << "Ingrese los siguientes datos del nuevo libro.... "<<endl;
				cout << "Ingrese el nombre: ";	
					getline(cin, book.titulo);
				cout << "Ingrese el autor: ";
					getline(cin, book.autor);
				cout << "Ingrese el cantidad: ";
					cin>> book.cantidad;
						cin.ignore();
					cout << "Ingrese el numero de serie codigo: ";
					getline(cin, book.codigo);
					cout << "Que categoria pertenece el libro?"<<endl;
					cout << "	[1] Programacion"<<endl;
					cout << "	[2] Derecho"<<endl;
					cout << "	[3] Medicina"<<endl;
					cout <<"	RECUERDE QUE POR EL MOMENTO TENEMOS ESTAS CATEGPORIAS DISPONIBLES"<<endl;
						cout << "Elija Opcion: ";
						cin >> opcion_D;
						if (opcion_D==1){
			
			title_sis.push_back(book.titulo);
				aut_sis.push_back(book.autor);
					cant_sis.push_back(book.cantidad);
						cod_sis.push_back(book.codigo);
			
			cout << "\nLista actualizada a la categoria de Programacion..........."<<endl;
				cin.ignore();
				cout << "\nPRESIONE ENTER PARA CONTINUAR ";
					cin.get();
					system("cls");
						}else if (opcion_D==2){

			title_de.push_back(book.titulo);
				aut_de.push_back(book.autor);
					cant_de.push_back(book.cantidad);
						cod_de.push_back(book.codigo);
				cout << "\n			Lista actualizada a la categoria de Derecho..........."<<endl;
					cout << "\nPRESIONE ENTER PARA CONTINUAR ";
						cin.get();	
						system("cls");
						}else if (opcion_D==3){			
			title_me.push_back(book.titulo);
				aut_me.push_back(book.autor);
					cant_me.push_back(book.cantidad);
						cod_me.push_back(book.codigo);
				cout << "\n			Lista actualizada a la categoria de Medicina..........."<<endl;
					cout << "\nPRESIONE ENTER PARA CONTINUAR ";
						cin.get();	
						system("cls");
						}else if(opcion_D>3){
							cout<<"****************¡ERROR OPCION INVALIDA!****************"<<endl;
							cout<<"  °°°Vuelva a seleccionar la opcion de Donar por favor°°° "<<endl;
						}
						
		}

    int main (){
        Estudiante e1;
        Libro librito;
    	Prestamo PrestM;

		//aqui estoy definiendo los elementos de la biblioteca
	    string admin="admin123";
    	string administracion;
        string recontrasena;
        vector <string> contrasena={"7777777","1234567","1234568","4444444"};
        vector <string> estudiantes={"felipe","luciana","fernando","brenda"};
        vector <string> carreras = {"derecho","ingenieria de sistemas","administracion de empresas","medicina"};
        vector <int> ci= {124,123,125,126};
    
		//CARRERA SISTEMAS
		vector <string> titulo_IS = {"codigo limpio","python al descubierto","fundamentos de programacion","Elprogramador pragmatico","logica de programacion orientada a objetos"};
        vector <string> autor_IS = {"Robert C. Martin","Arturo Fernández Montoro","Luis Joyanes Aguilar","Andrew Hunt & David Thomas","Leobardo López Román"};
        vector <string> codigo_IS = {"9788441532","9788493945046","9786071505","9788412053","9786077073"};
        vector<int> cantidad_IS = {5, 3, 2, 1, 4};
        vector <bool> PRESTAMO_IS={false,false,false,false};
        
        //CARRERA: DERECHO 
        vector <string> titulo_DE = {"derecho romano","constitucion politica del estado","derecho tributario boliviano","derecho penal boliviano","derecho de las familias"};
        vector <string> autor_DE = {"Marta Morineau Iduarte","Asamblea Constituyente de Bolivia","Cristian Rodrigo Mora Miranda","Benjamín Miguel Harb","Félix C. Paz Espinoza"};
        vector <string> codigo_DE = {"9789681846","9789995406738","9789997468123","9789990503548","9789995402310"};
        vector<int> cantidad_DE = {1, 4, 3, 3, 2};
        vector <bool> PRESTAMO_DE={false,false,false,false};
        //CARRERA: MEDICINA 
        vector <string> titulo_ME = {"atlas de la anatomia","medicina familiar","inteligencia artificial y medicina","medicina interna","anatomia humana"};
        vector <string> autor_ME = {"Frank H. Netter","Ian R. McWhinney","Antonio Sousa Poza","Harrison (Kasper, Fauci, Hauser)","Henri Rouvière"};
        vector <string> codigo_ME = {"9788491134","9788490225","9783030412","9786071513","9788445818"};
		vector<int> cantidad_ME = {1, 2, 1, 4, 3};
		vector <bool> PRESTAMO_ME={false,false,false,false};
		 string est, car, contra;
        cout << "        ****************BIBLIOTECA_UPDS****************"<<endl;
    	int opp;   
 		bool sis=false;
 do{
 
    system("chcp 65001 > nul"); 
    cout <<VERDE<< "             ╔═════════════════════════════════════╗" << endl; 
    cout << "             ║      UNIVERSIDAD DOMINGO SAVIO      ║" << endl; 
    cout << "             ╠═════════════════════════════════════╣" << endl;
    cout << "             ║  1) Iniciar Sesion                  ║" << endl;
    cout << "             ║  2) Usuario Nuevo                   ║" << endl;
    cout << "             ║  3) Cerrar Sistema de manera segura ║" << endl;
    cout << "             ╚═════════════════════════════════════╝" << endl; 
   
	   int posicion = 0;

	cin>>opp;    
    if (opp==1){
     
	cout << "        ****************BIBLIOTECA_UPDS****************"<<endl;
        // AQUI SE INGRESAR LA CONTRASEÑA
         cin.ignore();
            int i=0;
            int intentos=3;
            bool ver=false;
            do{
            cout << " Ingrese su contraseña de estudiante para iniciar sesion: ";
            cin >> recontrasena;
            intentos--;    
            for (size_t i=0;i<contrasena.size();i++){
            if (recontrasena==contrasena[i]){
                posicion=i;
                ver=true;
                cout << "Desbloqueado"<<endl;
                break;
            }
        }
            if(ver==false){

                cout<< "Tienes "<<intentos<<" intentos"<<endl;
                cout <<"Contrasenia incorrecta "<<endl;
            }else if (ver == true){
                break;
            }
            
            }while (intentos>i);
            if (ver==false){
             
                cout << "Intentelo mas tarde........."<<endl;    
                continue;
            }else if(ver == true){
                cout << estudiantes[posicion]<<endl;
               cout << carreras[posicion]<<endl;
                cout << "Esta registrado en la base de datos"<<endl;
			
            }

	}else if(opp==2){
	cin.ignore();
	//Usuario nuevo

 	cout <<"Ingrese su nombre Completo: ";
                getline(cin, e1.nombre);
                estudiantes.push_back(e1.nombre);
                cout << "Ingrese su Carrera: ";
                getline(cin, e1.carrera);
                carreras.push_back(e1.carrera);
                cout<< "Ingrese su Cedula de Identidad: ";
                cin>> e1.CI;
                ci.push_back(e1.CI);

			PRESTAMO_IS.push_back(false);
            PRESTAMO_DE.push_back(false);
            PRESTAMO_ME.push_back(false);

                bool comprobar=true;
                do
                {
                cout<< "Porfavor cree una contrasena de 7 caracteres: ";
                cin>> contra;

                if (contra.size()!= 7) {

                    cout <<ROJO<<"No cumple con el requisito"<<endl;

                } else if (contra.size()==7){

                    cout << AMARILLO<<"\nCUMPLE CON EL REQUISITO DE 7 CARACTERES"<<endl;
                
                    for (size_t i = 0; i < contrasena.size(); i++)
                    {
                        if(contra==contrasena[i]){
                            comprobar=false;
                        }
                    }
                
                    if(comprobar ==true){
                        contrasena.push_back(contra);
                        cout<<VERDE<<"La contrasena se guardo correctamente"<<endl;
                        break;
                    } else {
                        cout <<ROJO<< "Error: Esa contraseña ya existe. Intente otra." << endl;
                        comprobar = true;
                    }
                }
                } while (comprobar== true);
                
                 posicion = estudiantes.size() - 1;
            cout<< VERDE<<"\nLos datos se guardaron exitosamente "<<endl;
            
}else if (opp==3){
    cout << ROJO<<"SOLO PARA PERSONAL AUTORIZADO"<<endl;
// AQUI SE INGRESAR LA CONTRASEÑA QUE ES:admin123456 
            int i=0;
            int intentos=3;
           
            do{
            cout <<AMARILLO<< " Ingrese la contrasena: ";
            cin >> administracion;
            intentos--;    
            
            if (administracion==admin){
                sis=true;
                cout << "APAGANDO SISTEMA.................."<<endl;
                break;
            }else{
                cout<< "Tienes "<<intentos<<" intentos"<<endl;
                cout <<"Contraseña incorrecta "<<endl;   
            }
            }while (intentos>i);
            if (sis==false){
                    cout<<ROJO<<"CONTRASEÑA INCORRECTA, CANCELANDO APAGADO SEGURO DEL PROGRAMA"<<endl;
                    cin.ignore();
                    cout <<VERDE <<" PRESIONE ENTER POR FAVOR PARA REGRESAR AL MENU PRINCIPAL";
                    cin.get();
            }if (sis == true ){
				 cout <<AZUL<< "TODOS LOS DERECHOS RESERVADOS UNIVERSIDAD PRIVADA DOMINGO SAVIO"<<endl;
        
		   cout<<AZUL;
    string arte_ascii = R"(                                                             
                                                 .....                                              
                                                -++=--.                                             
                                                =*****-                                             
                                                :****+.                                             
                                         ..      .:::.      ..                                      
                                       .--:.:.      .      :-:.::                                   
                                       =*#*+==.  :::..:.  .*##*==-                                  
                                       +#####+. :+++=-:-. :######-                                  
                                       :*###*-  ++****++=  =###*+.                                  
                                        .:::.   =*******-   .::.                                    
                                ...            .+****+-            ....                             
                              .++=--    ....     .:.:.     ....   .++=--                            
                              .****+. .+=-:::      .      -=-::-. :****+                            
                                -**+:  +*##*++.  .:...:.  :*###*+-  -*++:                            
                                 .     +#####+. :+++=-:-. .######-    .                             
                                       .+***=.  ++****++=  -***+-                                   
                                        ...    =*******-    ..                                      
                                            -. .+****+-   :                                         
                                            :=   :-.:.   -+                                         
                                             +:        .=+.                                         
                                             -+:.    :=*+.                                          
                                              :=*+::+**-.                                           
                                               =######:                                             
                                               .--####:                                             
                                                  =***=                                             
                                               .:--=**+                                             
                                             .=*###*##*.                                            
                                             ===:--=##*.                                            
                                             +*-   :##-                                             
                                             +*:   .*#-.                                            
                                             =*     .-**.                                           
                                            :*+        .+=                                          
                                            ..          :.                                          
#   # #   # ### #   # ##### ####   #### ### ####   ###  ####    ####  ####  ### #   #  ###  ####   ###     
#   # ##  #  #  #   # #     #   # #      #  #   # #   # #   #   #   # #   #  #  #   # #   # #   # #   #     
#   # # # #  #  #   # ####  ####   ###   #  #   # ##### #   #   ####  ####   #  #   # ##### #   # #####     
#   # #  ##  #   # #  #     #  #      #  #  #   # #   # #   #   #     #  #   #   # #  #   # #   # #   #    
 ###  #   # ###   #   ##### #   # ####  ### ####  #   # ####    #     #   # ###   #   #   # ####  #   #      

		####   ###  #   # ### #   #  ###   ###      ####  ###  #   # ###  ###  
		#   # #   # ## ##  #  ##  # #     #   #    #     #   # #   #  #  #   # 
		#   # #   # # # #  #  # # # #  ## #   #     ###  ##### #   #  #  #   #
		#   # #   # #   #  #  #  ## #   # #   #        # #   #  # #   #  #   #
		####   ###  #   # ### #   #  ###   ###     ####  #   #   #   ###  ###  
)";
 cout << arte_ascii << endl;
				return 0;

			}
} 

		cout<<AMARILLO<<"\nBienvenido "<<VERDE<<estudiantes[posicion]<<AMARILLO<<".............."<<endl;
		cout <<"Que deseas relizar ?......"<<endl;
		system("chcp 65001 > nul");
    cout <<CYAN<< "╔═════════════════════════════════════╗" << endl; 
    cout << "║          MENU PRINCIPAL             ║" << endl; 
    cout << "╠═════════════════════════════════════╣" << endl;
    cout << "║  1) Prestar Libro                   ║" << endl;
    cout << "║  2) Devolver Libro                  ║" << endl;
    cout << "║  3) Donar Libro                     ║" << endl;
    cout << "╚═════════════════════════════════════╝" << endl;
		cout <<AMARILLO<<"Elija opcion: ";
		int opciones;
        cin>>opciones;
		switch (opciones){
		    case 1:
		    cin.ignore();
Los_Libros_Prestados(titulo_IS,autor_IS,codigo_IS,cantidad_IS,PRESTAMO_IS,titulo_DE,autor_DE,codigo_DE,cantidad_DE,PRESTAMO_DE,titulo_ME,autor_ME,codigo_ME,cantidad_ME,PRESTAMO_ME,posicion);
		    break;
		    
		    case 2:
		    cin.ignore();
Los_Libros_Devolver(titulo_IS,autor_IS,codigo_IS,cantidad_IS,PRESTAMO_IS,titulo_DE,autor_DE,codigo_DE,cantidad_DE,PRESTAMO_DE,titulo_ME,autor_ME,codigo_ME,cantidad_ME,PRESTAMO_ME,posicion);		    

		    break;
		    
		    case 3:
		    cin.ignore();
Los_Libros_Donar(titulo_IS,autor_IS,cantidad_IS,codigo_IS,
				 titulo_DE,autor_DE,cantidad_DE,codigo_DE,
				 titulo_ME,autor_ME,cantidad_ME,codigo_ME,librito);   
		    break;   
		    default:	    
		    cout<<"INCORRECTO"<<endl;    
		}

} while (sis==false);
  
	return 0;	
    }