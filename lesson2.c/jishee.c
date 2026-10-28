// Usque ad finem mundi...
// Бодлого 1. Чихэр хуваах

#include <stdio.h>

int main()
{
    int candy;
    scanf("%d", &candy);
    
    if (candy % 2 == 0)
        printf("Tentsuu: tus bur %d", candy / 2);
    else
        printf("Tus bur %d, 1 iluu", (candy - 1) / 2);
    
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 2. Үржүүлэх хүснэгт

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 3. Пуужин хөөргөх

#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    
    printf("Huurluu!");
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 4. Дугаарын хязгаарлалт

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    if (num < 0 || num > 9) {
        printf("Buruu too");
        return 0;
    }
    
    if (num == 1 || num == 6)
        printf("Davaa");
        
    if (num == 2 || num == 7)
        printf("Myagmar");
        
    if (num == 3 || num == 8)
        printf("Lhagva");
    
    if (num == 4 || num == 9)
        printf("Purev");
        
    if (num == 5 || num == 0)
        printf("Baasan");
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 5. Ангийн дүн

#include <stdio.h>

int main()
{
    int num, a;
    float average = 0, pass = 0, sum = 0;
    
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        scanf("%d", &a);
        
        sum = sum + a;
        
        if (a >= 60) {
            pass++;
        }
        
    }
    
    average = sum / num;
    
    printf("Niilber: %.0f, Dundaj: %.2f, Tentssen: %.0f", sum, average, pass);
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 6. Утасны мөрөөдөл

#include <stdio.h>

int main()
{
    int save, month, phone, wait_month;
    
    scanf("%d%d%d", &save, &month, &phone);
    
    wait_month = (phone - save) / month;
    
    printf("%d sar", wait_month + 1);
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 7. Тоо таах тоглоом

#include <stdio.h>

int main()
{
    int secret = 42, num, tries = 1;
    
    while (tries <= 7) {
        printf("Too oruul: ");
        scanf("%d", &num);
    
        if (tries == 7) {
            printf("Hojigdloo! Nuuts too: %d", secret);
            return 0;
        }
    
        else {
            if (num == secret) {
                printf("Taalaa! %d oroldlogoor", tries);
                return 0;
            }
            
            else {
                printf("Buruu baina!\n");
                tries++;
            }
        }
        
    
    }
    
    return 0;
}

// Usque ad finem mundi...
// Бодлого 8. Шинэ жилийн гацуур

#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    
    int zai = num - 1;
    
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < zai - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0; i < zai; i++) {
        printf(" ");
    }
    
    printf("|");
    
    return 0;
}


