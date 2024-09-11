import java.security.Key;
import java.util.LinkedList;

public class ParesListaEnlazada<Key, Value> implements InterfazPares<Key, Value> {
    private LinkedList<Pares<Key, Value>> pares;

    public ParesListaEnlazada() {
        pares = new LinkedList<>();
    }

    @Override
    public void put(Key key, Value value) {
        boolean found = false;
        for (Pares<Key, Value> pair : pares) {
            if (pair.getKey().equals(key)) {
            pair.setValue(value);
            found = true;
            break;
            }
        }
        if (!found) {
            Pares<Key, Value> newPair = new Pares<>(key, value);
            pares.add(newPair);
        }
    }

    @Override
    public Value get(Key key) {
        Value res = null;
        for (Pares<Key, Value> pair : pares) {
            if (pair.getKey().equals(key)) {
                res = pair.getValue();
                break;
            }
        }
        return res;
    }

   
    @Override
    public boolean contains(Key key) {
        boolean res = false;
        for (Pares<Key, Value> pair : pares) {
            if (pair.getKey().equals(key)) {
                res = true;
                break;
            }
        }
        return res;
    }



   

    @Override
    public Iterable<Key> keys() {
        LinkedList<Key> keys = new LinkedList<>();
        for (Pares<Key, Value> pair : pares) {
            keys.add(pair.getKey());
        }
        return keys;
    }

}
