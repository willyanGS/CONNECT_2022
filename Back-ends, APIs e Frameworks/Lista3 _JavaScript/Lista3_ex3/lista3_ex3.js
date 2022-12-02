var botao = document.getElementById("botao");
botao.addEventListener("click", alertTexto);

function alertTexto() {
    let texto = document.getElementById("texto").value;
    alert(texto);
}