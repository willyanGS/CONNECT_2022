const express = require('express');
const app = express();
const PORT = 3500;

app.use('', (req, res) => {
    console.log("Alguem conectou > IP: " + req.ip);
    res.send("<h1>Conectado com sucesso!</h1>");
});

/* ------ */
app.listen(PORT, '0.0.0.0', () => {console.log("* Servidor ONLINE *")});
/* ------ */
