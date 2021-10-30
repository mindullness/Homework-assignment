function storeValue() {
    sessionStorage.setItem("i_name", document.getElementById("name").value);
    sessionStorage.setItem("i_gender", document.getElementById("gender").value);
    sessionStorage.setItem("i_address", document.getElementById("address").value);
    sessionStorage.setItem("i_email", document.getElementById("email").value);
    sessionStorage.setItem("i_telNo", document.getElementById("telNo").value);
    sessionStorage.setItem("i_qualif", document.getElementById("qualif").value);
}

function display() {
    document.getElementById("d_name").innerHTML = sessionStorage.getItem("i_name");
    document.getElementById("d_gender").innerHTML = sessionStorage.getItem("i_gender");
    document.getElementById("d_address").innerHTML = sessionStorage.getItem("i_address");
    document.getElementById("d_email").innerHTML = `<a href="#">${sessionStorage.getItem("i_email")}</a>`;
    document.getElementById("d_telNo").innerHTML = sessionStorage.getItem("i_telNo");
    document.getElementById("d_qualif").innerHTML = sessionStorage.getItem("i_qualif");
}