import java.util.Arrays;

public class arrays{
    public static void main(String[] args){
        int[] myArray = {30,70,20,60,60,15};
        int arr_length = myArray.length;
        int[] myArray2 = new int [arr_length + 1];
        for (int i = 0; i < arr_length + 1; i++){
            if (i < arr_length){
            myArray2[i] = myArray[i];
            }
            else if(i == arr_length){
              myArray2[i] = 120; 
            };

        }
        System.out.println(Arrays.toString(myArray2));
    }
}