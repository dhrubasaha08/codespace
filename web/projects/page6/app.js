$(function){

    $("#submit").click(function () {
        var name = $("#name").val();
        var email = $("#email").val();
        var message = $("#message").val();
        var dataString = 'name=' + name + '&email=' + email + '&message=' + message;
        if (name == '' || email == '' || message == '') {
            alert("Please Fill All Fields");
        }
        else {
            // AJAX Code To Submit Form.
            $.ajax({
                url: "backend.php",
                datatype: "json",
                method : "POST",
                success: function (data) {
                    alert(data);
                }
            });
        }
        return false;
    });
};
