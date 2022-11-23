import java.sql.*;

public class App {
    public static void main(String[] args) throws Exception {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","1234");

            Statement stat = conn.createStatement();
            try{
                String qur = "create database college_date";
                stat.executeUpdate(qur);
            } catch (Exception e) {
                System.out.println("Database already exists");
            }

            try {
                String qur = "use college_date";
                stat.executeUpdate(qur);
            } catch (Exception e) {
                System.out.println("Database doesn't exists");
            }

            try {
                String qur = "create table student_register(s_id int primary, s_name varchar(30))";
            } catch (Exception e) {
                System.out.println("Unable to create table!");
            }
            
            String qur = "insert into s_data values(101, \"Dhruba\"";
            stat.executeUpdate(qur);
        }   
        catch (Exception e) {
            System.out.println("Conn Err.");
        }

    }
}
