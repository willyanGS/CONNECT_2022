-- Lista 003 / Questao 03 

CREATE DATABASE revendedora_carros;
USE revendedora_carros;

CREATE TABLE automoveis (
	renavam CHAR(11) PRIMARY KEY,
    placa CHAR(7) UNIQUE NOT NULL,
    marca VARCHAR(30) NOT NULL,
    modelo VARCHAR(30) NOT NULL,
    ano_fabricacao SMALLINT UNSIGNED NOT NULL,
    ano_modelo SMALLINT UNSIGNED NOT NULL,
    cor VARCHAR(30) NOT NULL,
    motor VARCHAR(50) NOT NULL,
	numero_portas TINYINT UNSIGNED NOT NULL,
    tipo_combustivel VARCHAR(30) NOT NULL,
    preco FLOAT NOT NULL
);

CREATE TABLE clientes (
	cod_cliente INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(20) NOT NULL,
    sobrenome VARCHAR(100) NOT NULL,
    telefone VARCHAR(15) NOT NULL,
    -- endereço:
    rua VARCHAR(100) NOT NULL,
    numero_res SMALLINT UNSIGNED NOT NULL,
    complemento_res VARCHAR(30),
    bairro VARCHAR(50),
    cidade VARCHAR(100) NOT NULL,
    estado VARCHAR(100) NOT NULL,
    cep CHAR(8) NOT NULL
);

CREATE TABLE vendedores (
	cod_vendedor INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(20) NOT NULL,
    sobrenome VARCHAR(100) NOT NULL,
    telefone VARCHAR(15) NOT NULL,
    -- endereço:
    rua VARCHAR(100) NOT NULL,
    numero_res SMALLINT UNSIGNED NOT NULL,
    complemento_res VARCHAR(30),
    bairro VARCHAR(50),
    cidade VARCHAR(100) NOT NULL,
    estado VARCHAR(100) NOT NULL,
    cep CHAR(8) NOT NULL,
    -- contratação:
    data_admissao DATE NOT NULL,
    salario_fixo FLOAT NOT NULL
);

CREATE TABLE negocios (
	cod_venda INT PRIMARY KEY AUTO_INCREMENT,
    data_venda DATE NOT NULL,
    valor_venda FLOAT NOT NULL,
    cliente_fk INT NOT NULL,
    CONSTRAINT fk_cliente_negocio FOREIGN KEY (cliente_fk)
		REFERENCES clientes (cod_cliente),
    vendedor_fk INT NOT NULL,
    CONSTRAINT fk_vendedor_negocio FOREIGN KEY (vendedor_fk)
		REFERENCES vendedores (cod_vendedor),
    automovel_fk CHAR NOT NULL,
    CONSTRAINT fk_automovel_negocio FOREIGN KEY (automovel_fk)
		REFERENCES automoveis (renavam)
);