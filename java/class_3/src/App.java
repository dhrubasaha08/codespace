import java.sql.*;

public class App {
    public static void main(String[] args) throws Exception {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306", "root", "1234");

            Statement stmt = conn.createStatement();

            try {
                String qur = "create database class1;";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            try {
                String qur = "use class1";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            try {
                String qur = "create table string1(s_id int, s_name varchar(30));";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            try {
                String qur = "insert into string1 values (1,\'Dhruba\');";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            try {
                String qur = "insert into string1 values (2,\'Erin\');";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            try {
                String qur = "insert into string1 values (3,\'Alex\');";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            try {
                String qur = "insert into string1 values (4,\'Dimitri\');";
                stmt.executeUpdate(qur);
            } catch (Exception e) {
                e.printStackTrace();
            }

            String ar1[] = new String

            try {
                String qur = "select s_name from string1;";
                ResultSet rs = stmt.executeQuery(qur);
                while (rs.next()) {
                    String s = rs.getString("s_name");
                    
                }
            } catch (Exception e) {
                e.printStackTrace();
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}