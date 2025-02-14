class Solution {
    public boolean isAnagram(String s, String t) {
        int arr[] = new int[t.length()];
        int arr2[] = new int[s.length()];
        String MyString="";
        String MyString_2="";
        if (s.length() != t.length()) {
            // System.out.println("The Strings Are Not Anagrams");
            return false;
        }
        else if (s.length()>1) {
            for (int i = 0; i < t.length(); i++) {
                int temp = 1;
                char MyChar_1 = t.charAt(i);
                for (int j = 0; j < s.length(); j++) {
                    char MyChar_2 = s.charAt(j);
                    if (MyChar_1 == MyChar_2  && !MyString.contains(Character.toString(MyChar_1))) {
                        arr[i] = temp;
                        temp++;        
                    }
                }
                MyString.concat(Character.toString(MyChar_1));
            }
            

            for (int i = 0; i < s.length(); i++) {
                int temp = 1;
                char MyChar_1 = s.charAt(i);
                for (int j = 0; j < t.length(); j++) {
                    char MyChar_2 = t.charAt(j);
                    if (MyChar_1 == MyChar_2 && !MyString_2.contains(Character.toString(MyChar_1))) {
                        arr2[i] = temp;
                        temp++;
                    }
                }
                MyString_2.concat(Character.toString(MyChar_1));
            }



            for (int i : arr) {
                System.out.println(i);
            }
            System.out.println("Printing The Second For In Loop");
            for (int i : arr2) {
                System.out.println(i);
            }
            
            // for (int i = 1; i < arr.length; i++) {
            //     if (arr[i]!=arr[i-1]) {
            //         // System.out.println("The Strings Are Not Anagram");
            //         return false;
            //     }
            // }
        }
        else if (s.equals(t)) {
            return true;
        }
        else{
            return false;
        }
        
        // System.out.println("The Strings Anagram");
        return true;
    }
}
public class Temp {
    public static void main(String[] args) {
       Solution S1=new Solution();
       S1.isAnagram("anagram", "nagaram");

    }
}
