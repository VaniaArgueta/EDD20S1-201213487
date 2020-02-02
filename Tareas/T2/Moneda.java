package tarea3;

import java.util.LinkedList;

/**
 *
 * @author Vania
 */
public class Moneda {
    
    int cantidad;
    String nombreMoneda;
    LinkedList<Propietario> listaPropietarios = new LinkedList<Propietario>(); 
    
    public void crearMoneda(String nombre, int cantidad){
        this.cantidad = cantidad;
        this.nombreMoneda = nombre;
    }
    public void renombrar(String nuevoNombre){
        this.nombreMoneda = nuevoNombre;
    }
    public void asignarCantidad(int cantidad){
        this.cantidad = cantidad;
    }
    public void agregarPropietario(String nombrePropietario, int cantidad){
        if(cantidad <= this.cantidad){
            Propietario p = new Propietario(nombrePropietario, cantidad);
            listaPropietarios.add(p);
            this.cantidad = this.cantidad - cantidad;
        }else System.out.println("Este tipo de moneda no tiene sufientes fondos.");
        
    }
    public void listarPropietarios(){
        for(int i=0; i<listaPropietarios.size(); i++){
            System.out.println(listaPropietarios.get(i).nombrePropietario + " tiene " + String.valueOf(listaPropietarios.get(i).cantidadPropietario) + " monedas de tipo " + nombreMoneda);
        }
    }
    public void verPropietario(int idPropietario){
        for(int i=0; i<listaPropietarios.size(); i++){
            if(listaPropietarios.get(i).idPropietario == idPropietario){
                System.out.println(listaPropietarios.get(i).nombrePropietario + " tiene " + String.valueOf(listaPropietarios.get(i).cantidadPropietario) + " monedas de tipo " + nombreMoneda);
            }
        }
    }
    
    public void transferir(int idPropietario, int cantidad){
        for(int i=0; i<listaPropietarios.size(); i++){
            if(listaPropietarios.get(i).idPropietario == idPropietario){
                listaPropietarios.get(i).cantidadPropietario = listaPropietarios.get(i).cantidadPropietario + cantidad;
                this.cantidad = this.cantidad - cantidad;
            }
        }
    }
    public void transferirFrom(int cantidad, int idPropietarioEnvia, int idPropietarioRecibe){
        for(int i=0; i<listaPropietarios.size(); i++){
            if(listaPropietarios.get(i).idPropietario == idPropietarioEnvia){
                for(int j=0; j<listaPropietarios.size(); j++){
                    if(listaPropietarios.get(j).idPropietario == idPropietarioRecibe){
                        listaPropietarios.get(i).cantidadPropietario -= cantidad;
                        listaPropietarios.get(j).cantidadPropietario += cantidad;
                        break;
                    }
                }
                break;
            }
        }
    }
    
    

    
}

