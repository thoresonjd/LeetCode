// import java.util.regex.Pattern;
// import java.util.regex.Matcher;

class Solution {
    public boolean checkOnesSegment(String s) {
        return !s.contains("01");
        
        // Pattern p = Pattern.compile("1+0+1+");
        // Matcher m = p.matcher(s);
        // return !m.find();
    }
}