import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;


public class Principal {
    public static void main(String[] args) {
        String filePath = "./Data/tale.txt";

        processFile(filePath, new ParesListaEnlazada(), "Lista enlazada: ");
        processFile(filePath, new ParesListaArrayOrdenado(), "Lista array ordenado: ");
        processFile(filePath, new ParesAVL(), "BST: ");

        
    }
   

    public static void processFile(String filePath, InterfazPares<String, Integer> wordCountMap, String outputString) {
        Runtime runtime = Runtime.getRuntime();
        long startTime = System.currentTimeMillis();
        long memoryUsedInit = runtime.totalMemory() - runtime.freeMemory();
        String mostFrequentWord = findMostFrequentWord(filePath, wordCountMap);
        long memoryUsedEnd = runtime.totalMemory() - runtime.freeMemory();
        long endTime = System.currentTimeMillis();
        float executionTime = (endTime - startTime)/1000.0f;
        System.out.println("Most frequent word: " + mostFrequentWord);
        System.out.println(outputString + executionTime + " seconds");
        System.out.println("Memory used: " + (memoryUsedEnd-memoryUsedInit)/(1024.0f*1024.0f) + " Mbytes");
    }

    

    public static String findMostFrequentWord(String filePath, InterfazPares<String, Integer> wordCountMap) {
        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String[] words = line.split("\\s+");
                for (String word : words) {
                    if (!word.trim().isEmpty()) { // ignore empty strings
                        word = word.toLowerCase();
                        Integer n = wordCountMap.get(word.toLowerCase());
                        if (n == null)
                            wordCountMap.put(word, 1);
                        else
                            wordCountMap.put(word, n + 1);
                    }
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        String mostFrequentWord = "";
        int maxCount = 0;
        for (String w : wordCountMap.keys()) {
            if (wordCountMap.get(w) > maxCount) {
                mostFrequentWord = w;
                maxCount = wordCountMap.get(w);
            }
        }

        return mostFrequentWord;
    }

}
