import java.sql.*;

public class App {
  public static void main(String[] args) throws Exception {
    try {
      Class.forName("com.mysql.cj.jdbc.Driver");
      Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306", "root", "1234");

      Statement stmt = conn.createStatement();
      String qur;

      qur = "create database if not exists product_db;";
      stmt.executeUpdate(qur);

      qur = "use product_db;";
      stmt.executeUpdate(qur);

      qur =
          "create table if not exists product (id int primary key auto_increment, product_name"
              + " varchar(255), price int, gst int, total int);";
      stmt.executeUpdate(qur);

      System.out.println("Product Management System(GST 18%)");
      System.out.println("1. Add Product");
      System.out.println("2. View Product");
      System.out.println("3. Update Product");
      System.out.println("4. Delete Product");
      System.out.println("5. Exit");
      System.out.println("Enter your choice: ");
      int choice = Integer.parseInt(System.console().readLine());

      switch (choice) {
        case 1:
          System.out.println("Enter Product Name: ");
          String product_name = System.console().readLine();
          System.out.println("Enter Price: ");
          int price = Integer.parseInt(System.console().readLine());
          int gst = (price * 18) / 100;
          int total = price + gst;

          qur =
              "insert into product (product_name, price, gst, total) values ('"
                  + product_name
                  + "', "
                  + price
                  + ", "
                  + gst
                  + ", "
                  + total
                  + ");";
          stmt.executeUpdate(qur);
          System.out.println("Product Added Successfully");
          break;

        case 2:
          qur = "select * from product;";
          ResultSet rs = stmt.executeQuery(qur);
          System.out.println("Product List");
          System.out.println("ID\tProduct Name\tPrice\tGST\tTotal");
          while (rs.next()) {
            System.out.println(
                rs.getInt(1)
                    + "\t"
                    + rs.getString(2)
                    + "\t\t"
                    + rs.getInt(3)
                    + "\t"
                    + rs.getInt(4)
                    + "\t"
                    + rs.getInt(5));
          }
          break;

        case 3:
          System.out.println("Enter Product ID: ");
          int id = Integer.parseInt(System.console().readLine());
          System.out.println("Enter Product Name: ");
          product_name = System.console().readLine();
          System.out.println("Enter Price: ");
          price = Integer.parseInt(System.console().readLine());
          gst = (price * 18) / 100;
          total = price + gst;

          qur =
              "update product set product_name = '"
                  + product_name
                  + "', price = "
                  + price
                  + ", gst = "
                  + gst
                  + ", total = "
                  + total
                  + " where id = "
                  + id
                  + ";";
          stmt.executeUpdate(qur);
          System.out.println("Product Updated Successfully");
          break;

        case 4:
          System.out.println("Enter Product ID: ");
          id = Integer.parseInt(System.console().readLine());

          qur = "delete from product where id = " + id + ";";
          stmt.executeUpdate(qur);
          System.out.println("Product Deleted Successfully");
          break;

        case 5:
          System.out.println("Thank You");
          break;

        default:
          System.out.println("Invalid Choice");
          break;
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
