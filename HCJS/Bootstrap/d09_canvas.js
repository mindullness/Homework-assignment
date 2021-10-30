let draw = document.getElementById("draw");
let ctx = draw.getContext("2d");

function drawLine() {

    ctx.moveTo(10, 20);
    ctx.lineTo(300, 200);
    ctx.stroke();
}

function drawRect() {

    ctx.strokeStyle = "brown";
    ctx.strokeRect(50, 50, 200, 100);

    ctx.fillStyle = "yellow";
    ctx.fillRect(200, 100, 200, 100);
}

function drawCircle() {
    ctx.beginPath();
    ctx.arc(200, 300, 40, 0, 2 * Math.PI);
    ctx.strokeStyle = "red";
    ctx.stroke();

    ctx.beginPath();
    ctx.arc(200, 300, 40, 0, 2 * Math.PI);
    ctx.fillStyle = "orange";
    ctx.fill();
}

function drawImage(imgNo) {

    let img = null;
    switch (imgNo) {
        case 1:
            img = document.getElementById("pic1");
            break;
        case 2:
            img = document.getElementById("pic2");
            break;
        case 3:
            img = document.getElementById("pic3");
            break;
    }

    ctx.beginPath();
    ctx.drawImage(img, 15, 15, 400, 300);
}