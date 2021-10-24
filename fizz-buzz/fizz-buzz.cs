public class Solution {
    public IList<string> FizzBuzz(int n) {
        IList<string> l = new List<string>(); 
        for (int i = 1; i <= n; i++) {
            string str = "";
            if (i % 3 == 0) str += "Fizz";
            if (i % 5 == 0) str += "Buzz";
            l.Add(str != "" ? str : i.ToString());
        }
        return l;
    }
}
