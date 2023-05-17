using System;

namespace lab1MPWI
{
    public class Permutations
    {
       static int numberOfPerm = 0;
        static void permRec(String nb, char[] arr, int last, int idx)
        {
            int len = nb.Length;
            for (int i = 0; i < len; i++)
            {
                arr[idx] = nb[i];
                if (idx == last)
                {
                    Console.WriteLine(new String(arr));
                    numberOfPerm++;
                }
                else
                    permRec(nb, arr, last, idx + 1);
            }
        }
        static void permutations(String nb)
        {
            int len = nb.Length;
            char[] temp = nb.ToCharArray();
            Array.Sort(temp);
            nb = new String(temp);
            char[] arr = new char[len + 1];
            permRec(nb, arr, len - 1, 0);

        }
        public static void Main(String[] args)
        {
            String number;
            number = Console.ReadLine();
            permutations(number);
            Console.WriteLine(numberOfPerm);
        }
    }
}
