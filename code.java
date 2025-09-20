public class Main {
    public static void main(String[] args) {
        Integer[] numbers = new Integer[5];
        // Memory is managed by the garbage collector
        numbers = null;  // The array is eligible for garbage collection
    }
}
