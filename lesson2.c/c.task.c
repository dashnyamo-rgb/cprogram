/*Даалгавар 2. Буузны тооцоо
Гуанзанд нэг бууз 1500 төгрөг. Кассчин захиалга бүрийн үнийг гараар бодсоор ядарчээ.
Түүнд туслах функц бичье!
Шаардлага
1. Буузны тоог аваад нийт үнийг буцаадаг int buuz_price(int count) функц бич.
2. main() дотор scanf ашиглан буузны тоог хэрэглэгчээс асуу.
3. Функцээ дуудаж, үр дүнг printf-ээр хэвлэ.
Жишээ
Оролт (буузны тоо) Хүлээгдэж буй гаралт
10 Niit une: 15000 tugrug
4 Niit une: 6000 tugrug
0 Niit une: 0 tugrug
Зөвлөмж: Функц дотор printf бичихгүй! Үнийг return-оор буцааж, хэвлэх ажлыг main()
хийнэ.*/
int buuz(int a) 
{
    return a * 1500;
}


int main() 
{
    int buuz_Num;
    int total_Price;
    scanf("%d", &buuz_Num);
    printf("Niit une: %d\n", buuz(buuz_Num));

    
    return 0;
}
