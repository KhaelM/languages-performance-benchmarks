public class Main {

    public static void main(String[] args) {
        System.out.println("INT_MIN = " + Integer.MIN_VALUE);
        System.out.println("INT_MAX = " + Integer.MAX_VALUE);

        long begin = System.nanoTime();
        for(int i = Integer.MIN_VALUE; i < Integer.MAX_VALUE; i++) {
        }
        long end = System.nanoTime();
        double timeElapsed = (double)(end - begin)/ 1000000000;

        System.out.println("time elapsed: " + timeElapsed + "seconds");
    }
}