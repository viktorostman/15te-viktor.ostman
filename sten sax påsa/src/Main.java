import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int rnm;
		int player1;
		
		Scanner sc = new Scanner(System.in);
		
		player1 = sc.nextInt();
		rnm = (int) Math.random() *3;
		int diff = rnm - player1;
			//sten=0 papper=1 sax=2 
		 if(player1 < rnm || diff == 2){
			 
		 }
	}
	
}
