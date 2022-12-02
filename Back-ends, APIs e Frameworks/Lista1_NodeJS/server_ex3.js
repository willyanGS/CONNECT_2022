const http = require('http');
const PORT = 3000;

const servidor = http.createServer( (req, res) => {
    if (req.url === '/usuario') {
        res.write("<h1>Base de dados - Usuarios</h1>");
        res.end();
    } else if (req.url === '/produtos') {
        res.write("<h1>Produtos - Cadastrar novo</h1>");
        res.end();
    } else {
        res.write("Page not found: Ercode404");
        res.end();
    };
});


/* ------ */
servidor.listen(PORT, () => {console.log("* Servidor ONLINE *")});
/* ------ */
