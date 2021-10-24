using System; 

class URI {

    static void Main(string[] args) { 
    
        string[] texto = Console.ReadLine().Split('/');
        int d = int.Parse(texto[0]), m = int.Parse(texto[1]), a = int.Parse(texto[2]);
        
        Console.Write("{0:D2}/{1:D2}/{2:D2}\n", m,d,a);
        Console.Write("{0:D2}/{1:D2}/{2:D2}\n", a,m,d);
        Console.Write("{0:D2}-{1:D2}-{2:D2}\n", d,m,a);  

    }

}