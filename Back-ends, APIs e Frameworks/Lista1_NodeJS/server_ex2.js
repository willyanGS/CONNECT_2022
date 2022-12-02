const http = require('http');
const PORT = 3000;

const servidor = http.createServer( (req, res) => {
    let url = ("" + req.headers.host + req.url);
    res.write(url);
    res.end();
});


/* ------ */
servidor.listen(PORT, () => console.log("* Servidor ONLINE *"));
/* ------ */
