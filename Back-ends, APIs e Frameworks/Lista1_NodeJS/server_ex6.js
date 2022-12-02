const express = require('express');
const app = express();
const PORT = 3500;


app.use('/', (req, res) => {
    console.log(req.query);
    if (Object.values(req.query).length !== 0) {
        res.send(`Voce está enviando os dados: ${Object.values(req.query)}`);
    } else {
        res.send(`Não está enviando dados`);
    };

})

/* ------ */
app.listen(PORT, '0.0.0.0', () => {console.log("* Servidor ONLINE *")});
/* ------ */
