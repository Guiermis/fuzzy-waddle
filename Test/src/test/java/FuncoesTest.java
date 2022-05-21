import org.junit.Test;

import static org.junit.Assert.*;

public class FuncoesTest {

    @Test
    public void verificaString(){
        Funcoes fun = new Funcoes();
        assertTrue(fun.verificaString("Saulo"));
        assertNotNull(fun.verificaString("Saulo"));
        //Boolean =/= Null
    }

    @Test
    public void verificaTamanho(){
        Funcoes fun = new Funcoes();
        assertEquals(5, fun.verificaTamanho("Saulo"));
    }

    @Test
    public void funSomar(){
        Funcoes fun = new Funcoes();
        int x = fun.somar(2,2);
        assertEquals(4, x);
    }

    @Test
    public void funSubtrair(){
        Funcoes fun = new Funcoes();
        int x = fun.subtrai(3,1);
        assertEquals(0, x);
    }
}
