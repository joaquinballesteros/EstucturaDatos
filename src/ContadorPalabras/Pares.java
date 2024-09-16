public class Pares<Key,Value> {
    private Key key;
    private Value value;
    
    public Pares(Key key, Value value) {
        this.key = key;
        this.value = value;
    }
    
    public Key getKey() {
        return key;
    }
    
    public void setKey(Key key) {
        this.key = key;
    }
    
    public Value getValue() {
        return value;
    }
    
    public void setValue(Value value) {
        this.value = value;
    }
    
    // Otros métodos y funcionalidades de la clase
}
