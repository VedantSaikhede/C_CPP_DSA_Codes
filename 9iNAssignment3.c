
/*//3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/

int main()
{
    int x;
    printf("1.MON\t");
    printf("2.TUE\t");
    printf("3.WED\t");
    printf("4.THRU\t");
    printf("5.FRI\t");
    printf("6.SAT\t");
    printf("7.SUN\n");
    printf("\nSELECT DAY NUMBER FROM ABOVE ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("\n       HAPPY MONDAY !!\n");
        break;
    case 2:
        printf("\n       TUESDAY: WORRY LESS LIVE MORE\n");
        break;
    case 3:
        printf("\n       GOOD MORNING WEDNESDAY\n");
        break;
    case 4:
        printf("\n       THURSDAY:BE AS SWEET AS U R\n");
        break;
    case 5:
        printf("\n       THANKS GOD IT'S FRIDAY\n");
        break;
    case 6:
        printf("\n       IT'S WEEKEND SATURDAY\n");
        break;
    case 7:
        printf("\n       <><><><><> SUNDAY FUNDAY <><><><><>\n");
        break;
    default:
        printf("\n <<<< PLZ ENTER NUMBER BETWEEN 1 To 7 >>>>");
    }
    return 0;

}
