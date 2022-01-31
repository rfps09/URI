import 'dart:io';

void main() {
    var string = stdin.readLineSync();
    var lista = string.split(" ");

    int a = int.parse(lista[0]);
    int b = int.parse(lista[1]);

    if(b > 0) stdout.writeln('${(a/b).floor()} ${a%b}');
    else stdout.writeln('${(a/b).ceil()} ${a%b}');
}