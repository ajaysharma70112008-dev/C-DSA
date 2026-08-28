#include <stdio.h>

// Finding a number whose frequency is more than half the length
// Assuming there is at least one majority element

int majority(int arr[], int length)
{
    int temp, counter;

    for (int i = 0; i < length; i++)
    {
        temp = arr[i];
        counter = 1;

        for (int j = i + 1; j < length; j++)
        {
            if (temp == arr[j])
            {
                counter++;
            }
        }

        if (counter > length / 2)
        {
            printf("%d", temp);
            return temp;
        }
    }

    return 0;
}

int main()
{
    int list[] = {2, 2, 1, 1, 1, 2, 2};

    majority(list, 7);

    return 0;
}