function display() {
    var fname = document.getElementById("fname").value;
    var gender = document.getElementById("gender").value;
    var address = document.getElementById("address").value;
    var email = document.getElementById("email").value;
    var phone = document.getElementById("telNo").value;
    var qualif = document.getElementById("qualif").value;

    document.getElementById("dname").innerHTML = fname;
    document.getElementById("dgender").innerHTML = gender;
    document.getElementById("daddress").innerHTML = address;
    document.getElementById("demail").innerHTML = email;
    document.getElementById("dtelNo").innerHTML = phone;
    document.getElementById("dqualif").innerHTML = qualif;
}