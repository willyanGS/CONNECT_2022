-- Lista 003 / Questao 01 

CREATE DATABASE clinica;
USE clinica;

CREATE TABLE medicos(
	id_medico INT PRIMARY KEY,
	crm VARCHAR(15) UNIQUE NOT NULL,
    nome VARCHAR(40) NOT NULL,
    idade TINYINT UNSIGNED CHECK (idade>23),
    especialidade VARCHAR(40) NOT NULL DEFAULT 'Ortopedia',
    cpf CHAR(11) UNIQUE NOT NULL,
    data_admissao DATE
);

CREATE TABLE salas(
	numero_sala TINYINT UNSIGNED PRIMARY KEY CHECK (numero_sala>=1 AND numero_sala<=50),
    andar INT UNIQUE NOT NULL CHECK (andar<=12),
    medico_fk INT NOT NULL,
    CONSTRAINT fk_medico_sala FOREIGN KEY (medico_fk)
		REFERENCES medicos (id_medico)
);

CREATE TABLE pacientes(
	cpf CHAR(11) PRIMARY KEY,
	rg VARCHAR(15) UNIQUE NOT NULL,
	nome VARCHAR(40) NOT NULL,
    data_nascimento DATE,
    cidade VARCHAR(30) DEFAULT 'Itabuna',
    doenca VARCHAR(40) NOT NULL,
    plano_saude VARCHAR(40) NOT NULL DEFAULT 'SUS'
);

CREATE TABLE consultas(
	codigo_consulta INT PRIMARY KEY,
    data_horario DATETIME,
    medico_fk INT NOT NULL,
    CONSTRAINT fk_medico_consulta FOREIGN KEY (medico_fk)
		REFERENCES medicos (id_medico),
    paciente_fk CHAR(11) NOT NULL,
    CONSTRAINT fk_paciente_consulta FOREIGN KEY (paciente_fk)
		REFERENCES pacientes (cpf)
);

CREATE TABLE funcionarios(
	matricula VARCHAR(15) PRIMARY KEY,
    nome VARCHAR(40) NOT NULL,
    data_nascimento DATE NOT NULL,
    data_admissao DATE NOT NULL,
    cargo VARCHAR(40) NOT NULL DEFAULT 'Assistente Medico',
    salario FLOAT NOT NULL DEFAULT '510.00'
);