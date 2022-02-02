import 'dart:io';

void main() {
    double a = double.parse(stdin.readLineSync())*3.5;
    double b = double.parse(stdin.readLineSync())*7.5;
    double c = (a+b)/11;
    String ans = c.toStringAsFixed(5);

    print('MEDIA = $ans');
}