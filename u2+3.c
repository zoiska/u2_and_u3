#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {

    //--------------------------- Übungsblatt 2 ------------------------------------------------------------------------

    printf("Hello, AIS!\n");
    printf("    *\n  *   *\n*       *\n  *   *\n    *\n");
    printf("__________     .___        \n"
           "\\____    /____ |__| ______\n"
           "  /     // _  \\|  |/  ___/\n"
           " /  ___/( <_> )|  |____ \\ \n"
           "/______\\\\_____/|__|______\\\n\n");

    //---------------------------- Aufg. für Profis --------------------------------------------------------------------

    char input[] = "!!.aa a\\";
    int counter = sizeof input - 1;
    int z = 0;
    int zeichen = counter;
    int vokale = 0;
    int trenz = 0;
    int satzz = 0;

    while(counter != 0) {
        if(input[z] == 'a' || input[z] == 'e' || input[z] == 'i' || input[z] == 'o' || input[z] == 'u') {
            vokale++;
        }
        else if(input[z] == ' ' || input[z] == '-' || input[z] == '/' || input[z] == '{' || input[z] == '}' || input[z] == '[' || input[z] == ']' || input[z] == '\\') {
            trenz++;
        }
        else if(input[z] == '.' || input[z] == '!' || input[z] == '?') {
            satzz++;
        }
        else if(input[z] == ',') {
            satzz++;
            trenz++;
        }
        counter--;
        z++;
    }
    printf("%d, %d, %d, %d\n\n", zeichen, vokale, trenz, satzz);

    //--------------------------- Übungsblatt 3 ------------------------------------------------------------------------

    /*  Aufg 3.2
    Was ist ein Token? -Ein Token ist ein grundlegendes Element einer Programmiersprache und wird durch Trennzeichen getrennt.
    Welche Arten von Token gibt es? -Bezeichner, Literale, Schlüsselwörter, Operatoren, Trennzeichen.
    Welche Datentypen gibt es in c? -char, int, float, double, long long, short, bool, strg.
    Wofür gibt es Datentypen? -Um Zeichen und Zahlen verschiedener größe darzustellen.
    Welche Bedeutung hat das Wort Deklaration? -Einen Datentyp und seinen Bezeichner anlegen.
    Welche Bedeutung hat das Wort Initialisierung? -Der angelegten Variable einen Wert zuweisen.
    Wozu werden Kommentare benötigt und welche unterschiedlichen möglichkeiten zur Kommentierung gibt es?
     -Kommentare werden für Dokumentation genutzt, damit man auch später weiß, was z.B. eine Funktion tut. Außerdem
     ist es bei kollaborativem Programmieren wichtig, dass andere verstehen was abgeht
    */

    /*  Aufg 3.2
    int Erlaubt                                             Ja
    int $                                                   Ja
    int 1Erlaubt                                            Nein
    int Erlaubt1                                            Ja
    int Erlaubt.Mit.Punkt                                   Nein
    int VielZuLangerNameFürEineKlasseMitUmlautenUndTata     Ja, gibt Warnung wegen non-ASCII Zeichen
    int §                                                   Nein
    int _Erlaubt                                            Ja
    int _ Erlaubt                                           Nein
    */


    /*  Aufg 3.3.1
    “Hallo“                     strg, char[]
    true                        bool / int
    1                           int
    “1“                         char
    -123                        int
    -128                        int
    32767                       int
    2147483646                  int
    2147483646L                 long
    12.0                        double / float
    1263748296.0                double
    2147483649                  long long
    1.7976931348623157E309      ?
    ‘a‘                         char
    ‘\u0000‘                    char, Unicode Null
    NULL                        0
    0xC0B0L                     Hex
    */

    // Aufg 3.3.2
    int a = 7 + 9;
    int b = 5 - 9;
    int c = 12 * 122;
    int d = 130 / 13;
    float e = 130.0 / 14.0;
    int f = 12 % 2;
    int g = 12 % 5;
    long long h = 1LL + 2147483647;
    //int i = 1234 / 0;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%f\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    printf("%lld\n", h);
    //printf("%d\n", i);

    // Aufg 3.4
    int x;
    float x1;
    char x2;
    double x3;
    x = 5;
    x1 = 3.5;
    x2 = 'F';
    x3 = 12345.123145;
    printf("%d, %f, %c, %lf\n", x, x1, x2, x3);

    // Aufg 3.5
    int j = 5, k = 1, l = 10, m = 5;
    printf("%d\n", (j - k) * (l - m));

    // Aufg 3.6
    int A, B;
    for(A = 0; A <= 1; A++) {
        for(B = 0; B <= 1; B++) {
            int erg1 = !(A || B);
            int erg2 = (!A) && (!B);
            printf("%d, %d, %d, %d\n", A, B, erg1, erg2);
        }
    }

    // Aufg 3.Pro
    double eing = 0.0;
    double kurs = 0.0;
    double ausg;
    printf("Eurobetrag, Wechselkurs\n");
    scanf("%lf, %lf", &eing, &kurs);
    ausg = eing * kurs;
    printf("%0.2lf¥\n", ausg);

    return 0;
}
