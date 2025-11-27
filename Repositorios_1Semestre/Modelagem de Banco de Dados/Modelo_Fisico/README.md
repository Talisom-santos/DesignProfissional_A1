# 🛡️ Public Safety Database Schema #
Um esquema de banco de dados relacional normalizado para gestão integrada de segurança pública, ocorrências e monitoramento urbano.

# 📋 Visão Geral #
Este repositório contém o script DDL e DML para a criação do schema seguranca. O projeto modela um cenário real de despacho policial, onde dispositivos de monitoramento detectam anomalias e geram alertas que são convertidos em chamados para patrulhas.
# 🧩 Diagrama de Entidade-Relacionamento (Conceitual) #
O banco resolve as seguintes entidades e suas relações:
* **Entidades Fortes:** Cidadao, Unidade Policial, Alerta.
  
* **Monitoramento:** Zona de Risco possui Dispositivos que geram Alertas.

* **Operacional:** Agentes participam de Patrulhamentos que atendem Chamados.
  
* **Auditoria:** Tabela de logs_sistema para rastreabilidade de ações.

# 🗃️ Estrutura do Banco #
**Tabela**          **Descrição**
`cidadao`           Dadosdemográficos e contatos.
`ocorrencia`	       Registros de crimes e infrações.
`dispositivo_monitoramento`	    Inventário de equipamentos (Câmeras, Drones).
`logs_sistema`       Auditoria de ações tomadas durante patrulhamentos.
