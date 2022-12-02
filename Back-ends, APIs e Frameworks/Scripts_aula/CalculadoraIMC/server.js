const express = require('express')
const app = express()
const PORT = 3000

app.use("/calcular", (req, res) => {
    console.log(req.query)
    const peso = parseFloat(req.query.peso)
    const altura = parseFloat(req.query.altura)/100
    var imc = (peso/(altura*altura))
    var classif = ""
    if (imc < 18.5) {
        classif = "Abaixo do peso"
    } else if (imc < 25) {
        classif = "Normal"
    } else if (imc < 30) {
        classif = "Sobrepeso"
    } else if (imc >= 30) {
        classif = "Obesidade"
    }

    res.send (`Seu IMC = ${imc.toFixed(2)}<br>Classificação = ${classif}`)
})

app.listen(PORT, () => {console.log("Server Online")})
