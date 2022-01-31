import 'dart:io';
import 'dart:math';

void main() {
    double pi = 3.14159;
    double? raio = double.parse(stdin.readLineSync()!);
    double area = pi*pow(raio,2);
    var ans = area.toStringAsFixed(4);

    print('A=$ans');
}