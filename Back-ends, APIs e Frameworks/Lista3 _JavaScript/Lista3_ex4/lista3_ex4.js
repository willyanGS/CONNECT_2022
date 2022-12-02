var botao = document.getElementById("botao");
botao.addEventListener("click", validarCpf);

function validarCpf(e) {
    let cpf = document.getElementById("cpf").value;
    cpf = cpf.replace(/[-.]/g,'');
    let alerta = document.getElementById("alerta");
    if (cpf.length>11 || cpf.length<11) {
        alert(`CPF Inválido = ${cpf}`);
        if(cpf.length>11)
            alerta.innerText = "*excesso de digitos*";
        else if(cpf.length<11)
            alerta.innerText = "*falta de digitos*";
    } else {
        let continuar = confirm("Continuar?");
        if (continuar) {
            alert(`CPF Válido = ${cpf}`);
            alerta.innerText = ("*CPF válido ("+cpf+")*");
        } else {
            alert("Operação cancelada");
            alerta.innerText = ("*Operação cancelada*");
        }
    }
}