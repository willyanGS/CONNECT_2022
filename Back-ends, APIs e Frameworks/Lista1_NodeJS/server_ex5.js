const express = require('express');
const app = express();
const PORT = 3500;


app.use('', (req, res) => {
    let data = new Date();
    console.log(`Alguem conectou [${data.getDate()}/${data.getMonth()}/${data.getFullYear()} ${data.getHours()}:${data.getMinutes()}:${data.getSeconds()}]> IP: ${req.ip}`);
    res.send("<h1>Conectado com sucesso!</h1>");
});

/* ------ */
app.listen(PORT, '0.0.0.0', () => {console.log("* Servidor ONLINE *")});
/* ------ */
