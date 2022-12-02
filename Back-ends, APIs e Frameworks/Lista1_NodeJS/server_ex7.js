const express = require('express');
const app = express();
const PORT = 3500;

var requisicoes = 0;

app.get("/requerente", (req, res) => {
    res.send(`O nome do requerente é <strong>${req.query.nome}</strong>, possui <strong>${req.query.idade}</strong> anos, e mora em <strong>${req.query.cidade}</strong>`);
    requisicoes++;
    console.log(`Requisicoes enviadas > ${requisicoes}`);
});

app.get('/', (req, res) => {
    res.sendFile('./page_ex7.html', {root: __dirname});
})


/* ------ */
app.listen(PORT, '0.0.0.0', () => {console.log("* Servidor ONLINE *")});
/* ------ */
