#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++) //Dizinin eleman sayısını bulmak için for dongusu kullaniyoruz
    {
        int key = arr[i]; //i. elemani kaybetmemek için key diye gecici bir degiskene atadik
        int j = i-1; //Karsilastirma için j diye bir degisken tanimlayip i degiskeninin bir soluna atiyoruz
        while(j>=0 && arr[j]>key) //J degerini kontrolunu saglayip büyüklük kucüklük durumuna göre yerini ayarliyoruz. J degeri soldaki degerden büyükse yerinde kaliyor kucükse bir saga atiyoruz
        {
            arr[j+1] = arr[j]; //Dizinin J. degerini yeniden tanimliyoruz
            j--; //Dongunun devamliligi ve bir önceki degerlerin kontrolü için j degerini azaltıyoruz
        }
        arr[j+1] = key;
    }
}
// Diziyi ekrana yazdiran fonksiyon
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {31, 49, 59, 26, 41, 58};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Orijinal dizi: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sirali dizi: ");
    printArray(arr, n);

    return 0;
}
