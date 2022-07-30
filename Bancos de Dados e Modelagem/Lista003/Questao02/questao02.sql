-- Lista 003 / Questao 02

CREATE DATABASE eleicao;
USE eleicao;

CREATE TABLE cargo (
	cod_cargo INT PRIMARY KEY,
    nome_cargo VARCHAR(30) UNIQUE NOT NULL,
    salario FLOAT NOT NULL DEFAULT '17000.00',
    num_vagas INT UNIQUE NOT NULL
);

CREATE TABLE partido (
	cod_partido INT PRIMARY KEY,
    sigla CHAR(5) UNIQUE NOT NULL,
    nome VARCHAR(40) UNIQUE NOT NULL,
    numero INT UNIQUE NOT NULL
);

CREATE TABLE candidato (
	num_candidato INT PRIMARY KEY,
    nome VARCHAR(40) UNIQUE NOT NULL,
    cod_cargo_fk INT NOT NULL,
    CONSTRAINT fk_cargo_candidato FOREIGN KEY (cod_cargo_fk)
		REFERENCES cargo (cod_cargo),
    cod_partido_fk INT NOT NULL,
    CONSTRAINT fk_partido_candidato FOREIGN KEY (cod_partido_fk)
		REFERENCES partido (cod_partido)
);

CREATE TABLE eleitor (
	titulo_eleitor VARCHAR(30) PRIMARY KEY,
    zona_eleitoral CHAR(5) NOT NULL,
    sessao_eleitoral CHAR(5) NOT NULL,
    nome VARCHAR(40) NOT NULL
);

CREATE TABLE voto (
	registro_voto INT PRIMARY KEY AUTO_INCREMENT, -- Obs: criei um codigo de registro para cada voto
	titulo_eleitor_fk VARCHAR(30) NOT NULL, -- Obs: criei como uma relação adicional (eleitor) 1:n (voto) -> n votos para o mesmo eleitor = cargos diferentes na votação
    CONSTRAINT fk_eleitor_voto FOREIGN KEY (titulo_eleitor_fk)
		REFERENCES eleitor (titulo_eleitor),
    num_candidato_fk INT NOT NULL,
    CONSTRAINT fk_candidato_voto FOREIGN KEY (num_candidato_fk)
		REFERENCES candidato (num_candidato)
);