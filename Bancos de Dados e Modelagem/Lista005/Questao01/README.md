QUESTÃO 01.
Crie um Banco de Dados com nome CLINICA. A seguir crie as tabelas neste Banco de Dados
conforme a relação abaixo:
OBS: DEFINIR AS CHAVES PRIMÁRIAS DE CADA TABELA E AS CHAVES
ESTRANGEIRAS NOS RELACIONAMENTOS.


> Sala:
Numero_Sala: inteiro, único e não nulo. Checar se é maior que 1 e menor que 50
Andar: inteiro, único e não nulo. Checar se é menor que 12


> Medicos:
CRM: varchar (15), único e não nulo
Nome: varchar (40) e não nulo
Idade: inteiro e checar se é maior que 23 anos
Especialidade: char (20), não nulo e valor padrão “Ortopedia”
CPF: varchar (15), único e não nulo
Data de admissão: date


> Pacientes:
RG: varchar (15), único e não nulo
Nome: varchar (40) e não nulo
Data_Nascimento: date
Cidade: char (30) e valor padrão “Itabuna”
Doenca: varchar (40), não nulo,
Plano_Saude: varchar (40), não nulo e valor padrão “SUS”


> Funcionarios:
Matricula: varchar (15), único e não nulo
Nome: varchar (40) e não nulo
Data_Nascimento: date e não nula
Data_Admissao: date e não nula
Cargo: varchar (40), não nulo e valor padrão “Assistente Médico”
Salario: float, não nulo e valor padrão 510,00


> Consultas:
Codigo_Consulta: inteiro, único e não nulo
Data_Horario: datetime