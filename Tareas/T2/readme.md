###### Tarea 2 - Estructuras de Datos sección A

# Especificación informal TDA Moneda

**Moneda=** Tipo de datos es crearMoneda, renombrar, asignarCantidad, agregarPropietario, trasferir, transferirFrom, listarPropietarios, verPropietario.

**Descripción:** Los valores del TDA Moneda son objetos de la clase Moneda. El TDA Moneda es mutable, pues las operaciones renombrar y asignarCantidad pueden modificar los objetos.

**Operaciones:**

  - crearMoneda (String nombre,  int cantidad) 
    Efecto: Creación de un nuevo objeto de tipo Moneda, estableciendo un nombre y la cantidad inicial de monedas disponibles.
  - renombrar (String nombre)
    *Efecto: Cambiar nombre de una moneda.
  - asignarCantidad (int cantidad)
    *Efecto: Modificar la cantidad de monedas disponibles.
  - agregarPropietario ( String propietario, int cantidad)
    *Efecto: Agregar un elemento a un array en el cual se almacena qué persona es dueña de un tipo de moneda, la cantidad de monedas asignada a un dueño se debe disminuir de la cantidad total existente de monedas. 
  - transferir (int idPropietario, int cantidad)
    *Efecto: Se transfiere cierta cantidad de monedas desde el total disponible hasta la cuenta de una persona.
  - transferirFrom (int cantidad, int idPropietarioEnvía, idPropietarioRecibe)
    *Efecto: Transferencia de monedas entre dos personas.
  - listarPropietarios
    *Efecto: Imprime la lista de usuarios con la cantidad de monedas que posee.
  - verPropietario (int idPropietario)
    *Efecto: Muestra la información de una sola persona utilizando su id.
