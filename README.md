# Elementy Metod Numerycznych - dr. A. Poszwa

1. Pobieramy program.
2. Kompilujemy.
3. Wpisujemy wartości np: (n=6; x=0, 1, 2, 3, 4, 5; y=2.9, 5.31, 6.55, 9.18, 11.31, 12.45)
4. Wyniki to: (A = 1.94743, B = 3.1181, M = 0.0900946)
5. Otwieramy program gnuplot wpisujemy polecenia:

# Polecenia gnuplot
gnuplot> cd 'C:\Users\bplos\Desktop\wielomian_aproksymujacy_stopnia_pierwszego'
gnuplot> set style line 1 lc rgb '#0060ad' lt 1 lw 2 pt 7 ps 1.5   # --- blue
gnuplot> set style line 2 lc rgb '#dd181f' lt 1 lw 2 pt 5 ps 1.5   # --- red
gnuplot> f(x) = 1.94743*x+3.1181
gnuplot> plot 'zadanie.txt' title 'Experiment' with points ls 1, f(x) title 'Theory' w lines ls 2
