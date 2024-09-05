CREATE DATABASE sprint;
USE sprint;

CREATE TABLE cadastro (
idCadastro INT PRIMARY KEY AUTO_INCREMENT,
nome_empresa VARCHAR (45),
nome_responsavel VARCHAR (45),
telefone_contato CHAR (16),
CNPJ CHAR (14),
email VARCHAR (100),
senha VARCHAR (50)
);

SELECT * FROM cadastro;
DESC cadastro;

CREATE TABLE dadosSensor (
idSensor INT PRIMARY KEY AUTO_INCREMENT,
distancia CHAR (2),
produto CHAR (1)
CONSTRAINT chkProd CHECK (produto IN (0, 1))
);

SELECT * FROM dadosSensor;
DESC dadosSensor;