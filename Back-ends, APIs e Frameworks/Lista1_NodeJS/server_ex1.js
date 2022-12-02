const http = require('http');
const PORT = 3000;

const servidor = http.createServer( (req, res) => {
    console.log("Alguem conectou!");
    res.write("<h1>Bem-vindo</h1>");
    res.end();
});


/* ------ */
servidor.listen(PORT, () => console.log("* Servidor ONLINE *"));
/* ------ */
