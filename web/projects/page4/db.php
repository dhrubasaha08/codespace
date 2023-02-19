<? php 

$host = "localhost";
$user = "root";
$pass = "";

$conn = new mysqli($host, $user, $pass);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

function create_db()
{
    global $conn;
    $sql = "CREATE DATABASE IF NOT EXISTS mcq";
    if ($conn->query($sql) === TRUE) {
        echo "Database created successfully";
    } else {
        echo "Error creating database: " . $conn->error;
    }
}

function create_table(){
    global $conn;
    $sql = "CREATE TABLE IF NOT EXISTS questions (
        id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
        question VARCHAR(255) NOT NULL,
        option1 VARCHAR(255) NOT NULL,
        option2 VARCHAR(255) NOT NULL,
        option3 VARCHAR(255) NOT NULL,
        option4 VARCHAR(255) NOT NULL,
        answer VARCHAR(255) NOT NULL
        )";
    if ($conn->query($sql) === TRUE) {
        echo "Table created successfully";
    } else {
        echo "Error creating table: " . $conn->error;
    }
}
?>