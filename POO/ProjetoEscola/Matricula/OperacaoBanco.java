

package Matricula;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

/**
 * Classe para
 * @author Neemias Ramos Ferreira
 * @since classe criada em 15/04/2016
 */
public class OperacaoBanco {

    //objeto responsável por armazenar a conexão com o DB
    Connection con = null;

    //ao construir a classe será carregado o driver de conexão
    public OperacaoBanco() {
        this.carregarDrive();
    }

    public void carregarDrive() {
        try {
            //carregar o drive
            Class.forName("com.mysql.jdbc.Driver");
            System.out.println("Driver carregado");
        } catch (ClassNotFoundException ex) {
            //se nao carregar
            System.out.println("O driver MySQL não pode ser carregado. Erro: " + ex);
        }
    }

    public Connection obterConexao() {
        try {
            //verifica se conexão fechada ou inexistente
            //abre a conexão
            if ((con == null) || (con.isClosed())) {
                con = DriverManager.getConnection(
                        "jdbc:mysql://localhost/projetoescola", "root", "");
                System.out.println("Conexão obtida com sucesso");
            }
        } catch (SQLException ex) {
            System.out.println("SQLException: " + ex);
        } catch (Exception ex) {
            System.out.println("Exception: " + ex);
        }
        return con; //retorna uma conexão onde serão feitas as conexões e operações com o DB.
    }

    public void fecharConexao() {
        try {
            if ((con != null) && (!con.isClosed())) {
                con.close();
                System.out.println("Conexão fechada");
            }
        } catch (SQLException ex) {
            System.out.println("SQLException: " + ex);
        } catch (Exception ex) {
            System.out.println("Exception: " + ex);
        }
    }//fim do método fcharConexão

    public void incluirMatricula(Matricula p) {
        Connection conexao = this.obterConexao();
        PreparedStatement pre = null;
        try {
            String sql = "Insert into matricula (codmatricula, nomeal, curso) values (?,?,?)";
            pre = conexao.prepareStatement(sql);
            pre.setString(1, p.getCodMatricula());
            pre.setString(2, p.getNomeal());
            pre.setString(3, p.getCurso());
            pre.executeUpdate();
            System.out.println("Inclusão Realizada");
        } catch (SQLException a) {
            System.out.println("Erro ao concluir " + a.getMessage());

        }

    }

    public void alterarMatricula(Matricula p) {
        Connection conexao = this.obterConexao();
        PreparedStatement pre = null;
        try {
            String sql = "update matricula set nomeal=?, curso=? where codmatricula=?";
            pre = conexao.prepareStatement(sql);            
            pre.setString(1, p.getNomeal());
            pre.setString(2, p.getCurso()); 
            pre.setString(3, p.getCodMatricula());
            pre.executeUpdate();
            System.out.println("Alteração Realizada");
        } catch (SQLException a) {
            System.out.println("Erro ao Alterar " + a.getMessage());

        }

    }

    public void excluirMatricula(Matricula p) {
        Connection conexao = this.obterConexao();
        PreparedStatement pre = null;
        try {
            String sql = "delete from matricula where codmatricula=?";
            pre = conexao.prepareStatement(sql);
            pre.setString(1, p.getCodMatricula());
            pre.executeUpdate();
            System.out.println("Excluido com sucesso!");
        } catch (SQLException e) {
            System.out.println("Erro ao excluir: " + e.getMessage());
        }
    }

    public ResultSet listarMatricula() throws SQLException {
        Statement st;
        ResultSet rs = null;//representaçao na memória de uma tabela
        try {
            Connection conexao = this.obterConexao();
            st = conexao.createStatement(ResultSet.TYPE_SCROLL_SENSITIVE, ResultSet.CONCUR_UPDATABLE);
            //TYPE_SCROLL_SENSITIVE: possibilidade de acessar os registros
            //CONCUR_UPDATABLE: alterar valores contidos no rs
            rs = st.executeQuery("Select * from curso order by descricao");
            //exibindo temporariamente os dados codigo e descricao
            System.out.println("Listagem das Matriculas\n");
            System.out.println("Código Matrícula - Nome aluno - Curso");
            while (rs.next()) {
                System.out.println(rs.getString("codmatricula") + rs.getString("nomeal") + rs.getString("curso"));
            }
            rs.first();//volta ao primeiro registro
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        return rs;
    }

    public ResultSet buscarMatricula(String matricula) {
        PreparedStatement st;
        ResultSet rs = null;
        try {
            Connection conexao = this.obterConexao();
            st = conexao.prepareStatement("Select * from matricula where descricao like ?");
            st.setString(1, matricula + '%');
            rs = st.executeQuery();
            System.out.println("\nmatricula buscando");
            while (rs.next()) {
                System.out.println(rs.getString("codmatricula") + " " + rs.getString("nomeal")+ " " + rs.getString("curso"));
            }
            rs.first();
        } catch (Exception e) {
            System.out.println("Erro: " + e.getMessage());
        }
        return rs;
    }

}//fim da classe


