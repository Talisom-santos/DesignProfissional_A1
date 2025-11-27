# Modelagem Lógica - Segurança Pública #

Este projeto apresenta o esquema lógico normalizado para um sistema de gestão policial e monitoramento urbano. O modelo prioriza a integridade referencial e a rastreabilidade das ações táticas.

# 📋 Dicionário de Dados Simplificado #
**1. Administração e Pessoal**

Unidade Policial (1:N) Agente de Segurança: Uma unidade possui vários agentes, cada um identificado por matrícula e função.

Unidade Policial (1:N) Zona de Risco: Cada unidade é responsável pela jurisdição de determinadas áreas geográficas.

**2. Monitoramento e IoT**

Zona de Risco (1:N) Dispositivo de Monitoramento: Sensores e câmeras são instalados fisicamente dentro de zonas de risco.

Detecta (N:N): Tabela associativa que permite que uma Unidade Policial monitore feeds de diversos dispositivos.

**3. Eventos e Ocorrências**

Ocorrência: Liga o Cidadão à Unidade Policial, registrando data, hora e descrição do fato.

Alerta em Tempo Real: Gerado automaticamente pelos dispositivos de monitoramento (tabela associativa Gera).

**4. Operações Táticas**

Patrulhamento: Registra o início, fim, rota e viatura.

Participa (N:N): Relaciona quais agentes estiveram em qual patrulhamento.

Chamado (1:1): O elo crítico entre um Alerta e um Patrulhamento. Um alerta específico resulta em uma operação de patrulha dedicada.

**5. Auditoria**

* **Logs do Sistema:** Rastreabilidade total vinculada a cada patrulhamento, garantindo accountability das ações tomadas.

# 🚀 Como Implementar #
O script SQL (a ser criado baseada neste modelo) deve seguir a ordem de criação para respeitar as chaves estrangeiras (FKs):

1.Criação das tabelas fortes (`Unidade,` `Cidadao`, `Patrulhamento`).

2.Criação das tabelas dependentes (`Agente`, `Zona`).

3.Criação das tabelas associativas/relacionamentos (`Ocorrencia`, `Detecta`, `Participa`, `Chamado`).
