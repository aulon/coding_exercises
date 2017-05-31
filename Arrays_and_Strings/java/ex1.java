public class ex1 {
  public static int is_unique (String str){
    int ascii[] = new int [256];
    for (int i = 0; i < 256; i++){
  		ascii[i] = 0;
  	}
    for (int i = 0; i < str.length(); i++){
      int temp = (int) str.charAt(i);
      if (ascii[temp] == 1){
        System.out.println("String not unique");
        return 0;
      }
      ascii[temp] = 1;
    }
    System.out.println("String unique");
    return 0;
  }

  public static void main(String[] args) {
    String s = "Hello";
  	String s2 = "Hi!";
  	String s3 = "  ";
  	String s4 = " ,.";
  	String s5 = "";

  	is_unique(s);
  	is_unique(s2);
  	is_unique(s3);
  	is_unique(s4);
  	is_unique(s5);
  }
}
