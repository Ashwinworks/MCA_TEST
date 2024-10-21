#include <stdio.h>

int main() {
    int arr[100], n, i, position, value, choice;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
do{
    printf("\n Menu: \n");
    printf("1.Display Elements: \n");
    printf("2.Insert an element: \n");
    printf("3.Delete an element: \n");
    printf("4.Update an element: \n");

    printf("Enter your choice \n");
    scanf("%d",&choice);


 switch(choice)
 {
  case 1: printf("Current Array: ");
            for (i = 0; i < n; i++)
                {
                printf("%d ", arr[i]);
                }
                printf("\n");
                break;

  case 2: printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the index to insert the value (0 to %d): ", n);
                scanf("%d", &position);
                if (position < 0 || position > n) {
                    printf("Invalid index!\n");
                    break;
                }
                n++;
                for (i = n - 1; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = value;
                printf("Element inserted successfully.\n");
                break;

    case 3:    printf("Enter the index to delete the value (0 to %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Invalid index!\n");
                    break;
                }
                for (i = position; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted successfully.\n");
                break;
              break;

    case 4:      printf("Enter the index to update the value (0 to %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Invalid index!\n");
                    break;
                }
                printf("Enter the new value: ");
                scanf("%d", &value);
                arr[position] = value;
                printf("Element updated successfully.\n");
                break;
              break;

    default: printf("invalid choice");

 }

}
while(choice<=4);
return 0;
}
