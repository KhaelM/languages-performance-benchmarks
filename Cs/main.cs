using System;

class Program
{
    static void Main(string[] args)
    {
        System.Console.WriteLine("INT_MIN = " + Int32.MinValue);
        System.Console.WriteLine("INT_MAX = " + Int32.MaxValue);

        var watch = System.Diagnostics.Stopwatch.StartNew();
        for (int i = Int32.MinValue; i < Int32.MaxValue; i++)
        {
        }
        watch.Stop();
        var elapsedMs = watch.ElapsedMilliseconds;

        System.Console.WriteLine("time elapsed: " + elapsedMs + " ms");
    }
}