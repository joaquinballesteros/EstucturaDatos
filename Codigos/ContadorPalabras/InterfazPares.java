public interface InterfazPares<Key, Value> {
    // inserta un par clave-valor en la estructura de datos
    public void put(Key key, Value value);

    // obtiene el valor asociado a una clave o null si la clave no está en la estructura de datos
    public Value get(Key key);

    // verifica si la estructura de datos contiene una clave
    public boolean contains(Key key);

    // devuelve todas las claves en la estructura de datos
    public Iterable<Key> keys();

    


}