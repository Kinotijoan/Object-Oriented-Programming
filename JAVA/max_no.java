public class maxNumber{
    public static void main(String[] args){
        int[] myArray = {30,70,20,60,60,15,120};
        int arr_length = myArray.length;
        int max = 0;
        for (int i = 0; i < arr_length; i++){

            if (max < myArray[i]){
                max = myArray[i];
            };
        }
        System.out.println(max);
    }
}