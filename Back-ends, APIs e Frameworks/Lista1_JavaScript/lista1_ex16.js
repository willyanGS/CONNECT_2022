var peso = parseFloat(prompt("Digite seu peso (kg):"));

if (confirm("Vai engordar?"))
    alert (`Ficara com ${peso*1.15} kg`);

if (confirm("Vai emagrecer?"))
    alert (`Ficara com ${peso*0.80} kg`);