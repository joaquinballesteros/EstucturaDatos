import java.security.Key;
import java.util.LinkedList;
import java.util.Arrays;

    public class ParesListaArrayOrdenado<Key extends Comparable<Key>, Value> implements InterfazPares<Key, Value> {
        private Key[] keys;
        private Value[] values;
        private int size;

        public ParesListaArrayOrdenado() {
            keys = (Key[]) new Comparable[1];
            values = (Value[]) new Object[1];
            size = 0;
        }

        /**
         * Inserts a key-value pair into the collection.
         * If the key already exists, the corresponding value is updated.
         * If the collection is full, it is resized to accommodate more elements.
         *
         * @param key   the key to be inserted
         * @param value the value to be associated with the key
         */
        public void put(Key key, Value value) {
            int index = binarySearch(key);
            if (index >= 0) {
                values[index] = value;
                return;
            }

            if (size == keys.length) {
                resize(2 * keys.length);
            }

            int insertIndex = -(index + 1);
            for (int i = size; i > insertIndex; i--) {
                keys[i] = keys[i - 1];
                values[i] = values[i - 1];
            }

            keys[insertIndex] = key;
            values[insertIndex] = value;
            size++;
        }

        public Value get(Key key) {
            int index = binarySearch(key);
            if (index >= 0) {
                return values[index];
            }
            return null;
        }

        public void delete(Key key) {
            int index = binarySearch(key);
            if (index >= 0) {
                for (int i = index; i < size - 1; i++) {
                    keys[i] = keys[i + 1];
                    values[i] = values[i + 1];
                }
                size--;
                keys[size] = null;
                values[size] = null;

                if (size > 0 && size == keys.length / 4) {
                    resize(keys.length / 2);
                }
            }
        }

        public boolean contains(Key key) {
            return binarySearch(key) >= 0;
        }

        public boolean isEmpty() {
            return size == 0;
        }

        public int size() {
            return size;
        }

        private int binarySearch(Key key) {
            int low = 0;
            int high = size - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;
                int cmp = key.compareTo(keys[mid]);

                if (cmp < 0) {
                    high = mid - 1;
                } else if (cmp > 0) {
                    low = mid + 1;
                } else {
                    return mid;
                }
            }
            return -(low + 1);
        }

        private void resize(int capacity) {
            keys = Arrays.copyOf(keys, capacity);
            values = Arrays.copyOf(values, capacity);
        }

        @Override
        public Iterable<Key> keys() {
            // return an instance of Iterable<Key>
            return Arrays.asList(keys).subList(0, size);
        }
           
        
    }
       
