import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

import static org.junit.Assert.assertEquals;

public class PessoaTest {

    @Test
    public void testaNome() {
        for (Pessoa p: getPessoa()){
            assertEquals(p.nome, "Guilherme");
            assertEquals(p.cpf, "133.941.119-93");
            assertEquals(p.idade, 17);
        }
    }

    public List<Pessoa> getPessoa() {
        List<Pessoa> pessoas = new ArrayList<>();
        Pessoa pessoa = new Pessoa ();
        pessoa.setNome("Guilherme");
        pessoa.setCpf("133.941.119-93");
        pessoa.setIdade(17);
        pessoas.add(pessoa);
        return pessoas;

    }


}
