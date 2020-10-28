# Estructuras lineales

Una estructura lineal de datos o lista está conformada por ninguno, uno o varios elementos que tienen una relación de adyacencia ordenada donde existe un primer elemento, seguido de un segundo elemento y así sucesivamente hasta llegar al último.

Las pilas, las colas, las colas dobles y las listas son ejemplos de colecciones de datos cuyos ítems se ordenan dependiendo de cómo se agregan o eliminan. Una vez se agrega un ítem, éste se mantiene en la misma posición relativa respecto a los otros ítems previos y posteriores a él. Colecciones como éstas se denominan a menudo estructuras de datos lineales.

![image](https://user-images.githubusercontent.com/71147346/97446830-7e00ca80-18f4-11eb-8224-e5a08cd9985e.png)

# Pilas
Utilizan una estructura filo(First In Last Out), el primero que entra será el ultimo en salir.
Será un procesamiento los últimos datos que añadimos como los primeros, es un orden inverso. La importancia de las pilas es que se usan implícitamente en programas recursivos. En la imagen siguiente podemos ver un esquema.

![image](https://user-images.githubusercontent.com/71147346/97447222-f36c9b00-18f4-11eb-80b7-c5a8f647eede.png)

A continuacion se presenta un ejemplo:

**Ejemplo de pila**

![image](https://user-images.githubusercontent.com/71147346/97498677-3ac54c80-1932-11eb-9a21-cd35eb0e52f2.png)

Tendremos que definir la estructura pila

![image](https://user-images.githubusercontent.com/71147346/97498753-57fa1b00-1932-11eb-9d42-d4184aa70969.png)

A continuación tenemos que definición de la función principal main()Para efectos de probar el menú de opciones, se definen de las tres funciones (insertar, visualizar y extraer) que por ahora  cada una, solo muestran un mensaje de la función que cumplen.

![image](https://user-images.githubusercontent.com/71147346/97498823-7a8c3400-1932-11eb-87bd-e294a340320b.png)

![image](https://user-images.githubusercontent.com/71147346/97498860-8a0b7d00-1932-11eb-961f-8e85f0e278de.png)

Definición de la función Insertar.
Esta función permite ingresar los elementos a la pila, uno a uno como respuesta a elegir la opción insertar del menú de opciones, recuerde quitar la instrucción  cout <<“inserta”;   que se definió en esta función para efectos de probar el menú de opciones.

![image](https://user-images.githubusercontent.com/71147346/97499165-03a36b00-1933-11eb-964d-0be5c9457033.png)

Definición de la función Visualizar.
Al igual que en la función insertar,  Esta función permite visualizar los elementos ingresados a la pila, como respuesta a elegir la opción visualizar del menú de opciones, recuerde quitar la instrucción  cout <<“visualiza”;   que se definió temporalmente en esta función para efectos de probar el menú de opciones.

![image](https://user-images.githubusercontent.com/71147346/97499197-15850e00-1933-11eb-87cc-cc368641db8b.png)

![image](https://user-images.githubusercontent.com/71147346/97499233-22096680-1933-11eb-8fff-5ddad5ec1090.png)

Definición de la función Extraer.
Finalmente tenemos la definición de la función extraer o eliminar que al igual que las funciones anteriores no retorna ningún valor y tampoco tiene parámetros.

![image](https://user-images.githubusercontent.com/71147346/97499273-36e5fa00-1933-11eb-9dcd-ffe8f6e85c35.png)

![image](https://user-images.githubusercontent.com/71147346/97499295-42392580-1933-11eb-82f1-8ceb0d9aa191.png)

# Colas
Una estructura fifo(First In First Out), el primero que entra será el primero en salir.
Un ejemplo claro es la cola de un supermercado, el primero en llegar será el primero en pagar. Algunos de su usos son las búsquedas de datos.En la imagen siguiente veremos un esquema.

![image](https://user-images.githubusercontent.com/71147346/97447242-f798b880-18f4-11eb-96d9-920c65203e49.png)

A continuacion se presenta un ejemplo:

**Ejemplo de cola**

![image](https://user-images.githubusercontent.com/71147346/97499475-85939400-1933-11eb-8bbc-a54327d73cbe.png)

![image](https://user-images.githubusercontent.com/71147346/97499506-93e1b000-1933-11eb-9390-41de772a037b.png)

![image](https://user-images.githubusercontent.com/71147346/97499530-9e9c4500-1933-11eb-8f48-5ecacae049a8.png)

![image](https://user-images.githubusercontent.com/71147346/97499542-a6f48000-1933-11eb-98d1-043f0b7be5af.png)

![image](https://user-images.githubusercontent.com/71147346/97499568-b247ab80-1933-11eb-95f6-b2b7030286ad.png)

# Listas
Sera una array donde por cada casilla tendremos dos valores.
El valor de la casilla y la posición de la siguiente casilla, para enlazar una con la siguiente, si quisiéramos cambiar el orden solamente debemos de cambiar el segundo valor ya que es el siguiente valor en la lista.

![image](https://user-images.githubusercontent.com/71147346/97447260-fcf60300-18f4-11eb-95f4-7ecb22fd78d0.png)

A continuacion se presenta un ejemplo:

**Ejemplo de lista**

![image](https://user-images.githubusercontent.com/71147346/97499649-d7d4b500-1933-11eb-971a-f3151ba8a6b7.png)

![image](https://user-images.githubusercontent.com/71147346/97499672-e15e1d00-1933-11eb-83cc-48987532bf7e.png)

![image](https://user-images.githubusercontent.com/71147346/97499692-ec18b200-1933-11eb-901d-3f70716a7ae4.png)

![image](https://user-images.githubusercontent.com/71147346/97499709-f76bdd80-1933-11eb-8724-5c70655a7835.png)

![image](https://user-images.githubusercontent.com/71147346/97499724-00f54580-1934-11eb-9980-0fbab33feebc.png)










