# CalculadoraVentanaUniversidadDiegoPortales
Hola! Si estas viendo esto, es porque tal vez eres de la UDP (Universidad Diego Portales) (Chile) y deseas calcular tu ventana académica para la toma de ramos, con esta aplicación podras calcular tu posible (estimacion) de ventana para la toma de ramos, solo necesitas tu posicion en el ranking academico y el total de estudiantes de la carrera. Datos que se pueden conseguir en el Portal UDP.

Acerca de la calculadora:

Primero que todo la calculadora es una estimación a tu posible ventana, puede no ser exacto, sin embargo la exactitud es bastante buena, siendo el margen de error que la aplicación te mande una ventana más arriba o una más abajo de lo que realmente después sea.

La aplicación esta creada sin fines de lucro, y está misma no recopila ningun tipo de información. Esta creada de un alumno para otros alumnos y para ayudarlos a decidir sobre que posibilidades tienen en la toma de ramos de la Universidad, ya que esta no da ninguna clase de información de la ventana, solo va y te dice, ok esta es tu ventana, saludos cordiales.

Sobre el algoritmo:

El algoritmo para calcular la ventana es cuanto menos sencillo y intuitivo, primero que todo existen 20 ventanas para la toma de ramos en total. Cada ventana esta asociado a un 5% del total de alumnos, por lo tanto se puede obtener el siguiente algoritmo:

posicion_ranking/total_estudiantes * 100 = x % , este x % se asocia a cada una de las 20 ventanas, es decir A1 = hasta 5% (inclusive), A2 = mayores a 5% y menores que 10% (inclusive) y asi sucesivamente.

Por ejemplo:

Si el total de alumnos de una carrera es de 521 y tu posicion en el ranking es de 121. Tendrias 121/521 * 100 = 23% por lo tanto estarias en A5, sin embargo, considerar que hay margen de error en la aplicación por lo cual finalmente podrias quedar entre A5-B1.

Por último la calculadora cuenta con una opcion que te avisa si puedes ser ayudante de la FIC, esto considerando que para postular necesitas estar en el 50% superior del ranking de tu carrera. (Si no eres de la FIC esto simplemente se puede ignorar)

La calculadora sirve para todas las facultades y escuelas.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Finalmente, dejo el siguiente link a YouTube donde enseño a como descargar y usar la aplicación, ya que esta fue hecha en QT C++ y es necesario compilarlo, para uds no será necesario pues en mi canal de YouTube les dejare el link para llegar descargar y usar. 

Saludos cordiales

Información tecnica:

QT 6.61 C++ 17
