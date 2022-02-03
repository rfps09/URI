import 'dart:io';

void main() {
    double a = double.parse(stdin.readLineSync())*2;
    double b = double.parse(stdin.readLineSync())*3;
    double c = double.parse(stdin.readLineSync())*5;
    
    double media = (a+b+c)/10;
    var ans = media.toStringAsFixed(1);

    print('MEDIA = $ans');
}