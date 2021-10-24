class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> l = new ArrayList<String>(); 
        for (int i = 1; i <= n; i++) {
            String str = "";
            if (i % 3 == 0) str += "Fizz";
            if (i % 5 == 0) str += "Buzz";
            l.add(str != "" ? str : Integer.toString(i));
        }
        return l;
    }
}