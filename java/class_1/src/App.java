import java.sql.*;

public class App {
  public static void main(String[] args) throws Exception {
    try {
      Class.forName("com.mysql.cj.jdbc.Driver");
      Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306", "root", "1234");

      Statement stmt = conn.createStatement();
      try {
        String qur = "create database class_1";
        stmt.executeUpdate(qur);
      } catch (Exception e) {
        e.printStackTrace();
      }

      try {
        String qur = "use class_1";
        stmt.executeUpdate(qur);
      } catch (Exception e) {
        e.printStackTrace();
      }

      try {
        String qur = "create table student (id int, name varchar(20), age int)";
        stmt.executeUpdate(qur);
      } catch (Exception e) {
        e.printStackTrace();
      }

      try {
        String qur = "insert into student values (1, 'John', 20)";
        stmt.executeUpdate(qur);
      } catch (Exception e) {
        e.printStackTrace();
      }

      try {
        String qur = "insert into student values (2, 'Mary', 21)";
        stmt.executeUpdate(qur);
      } catch (Exception e) {
        e.printStackTrace();
      }

      try {
        String qur = "insert into student values (3, 'Peter', 22)";
        stmt.executeUpdate(qur);
      } catch (Exception e) {
        e.printStackTrace();
      }

      try {
        String qur = "select * from student";
        ResultSet rs = stmt.executeQuery(qur);
        while (rs.next()) {
          System.out.println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getInt(3));
        }
      } catch (Exception e) {
        e.printStackTrace();
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
