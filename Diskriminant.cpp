    #include iostream.h
    #include conio.h
    #include math.h

    int main()
    {
    int a,b,c;
    float di,x;
    printf (" Vvedi cheres probel A,B,C \n", a, b, c);
    scanf ("%f%f%f", &a, &b, &c);
    di = (b*b)-(4*a*c);
    printf ("\tDiskr = \n");
    di = sqrt(di);
    x = (-b+di)/(2*a);
    printf ("x1 = \n");
    x = (-b-di)/(2*a);
    printf ("x2 = \n");
    getch();
    return 0;
    }
