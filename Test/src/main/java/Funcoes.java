public class Funcoes {

    //public static void main (String[] args){
        //Funcoes fun = new Funcoes();
        //int x = fun.somar(2,2);
        //System.out.println((x));

    //}

    public static void main (String[] args){
        Funcoes fun = new Funcoes();
        boolean y = fun.verificaString(("Paulo"));
        System.out.println(y);
    }

    public boolean verificaString(String s){
        boolean y = s.contains("S");
        return y;
    }

    public int verificaTamanho(String s) {
        int tamanho = s.length();
        return tamanho;
    }

    public int somar(int a, int b) {
        int c = a + b;
        return c;
    }
    public int subtrai(int a, int b) {
        int c = a - b;
        return c;
    }
}
