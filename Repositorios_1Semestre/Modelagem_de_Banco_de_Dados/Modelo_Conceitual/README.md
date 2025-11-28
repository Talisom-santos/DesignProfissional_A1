# 🛡️ Modelo Conceitual - Sistema de Segurança Pública

Este repositório contém a modelagem conceitual de um banco de dados voltado para **Segurança Pública e Monitoramento Urbano**. O objetivo é estruturar as informações referentes a unidades policiais, agentes, monitoramento em tempo real via dispositivos IoT e atendimento a ocorrências.

## 📊 Diagrama Conceitual

O gráfico abaixo representa o **Modelo Entidade-Relacionamento (MER)** do sistema, detalhando as entidades e suas interações.

```mermaid
graph TD;
    %% Entidades (Retângulos)
    CID[CIDADÃO];
    UP[UNIDADE POLICIAL];
    AG[AGENTE DE SEGURANÇA];
    ZR[ZONA DE RISCO];
    DM[DISPOSITIVO DE MONITORAMENTO];
    PAT[PATRULHAMENTO];
    ALT[ALERTA EM TEMPO REAL];
    LOG[LOGS DO SISTEMA];

    %% Relacionamentos (Losangos)
    OC{OCORRÊNCIA};
    TR{TRABALHA};
    REG{REGISTRA};
    DET{DETECTA};
    PAR{PARTICIPA};
    INS{INSTALADO_EM};
    GER{GERA};
    CHAM{CHAMADO};
    RA{REALIZA_AÇÃO};

    %% Ligações e Cardinalidades
    CID ---|1,n| OC;
    OC ---|1,n| UP;

    UP ---|1,n| TR;
    TR ---|1,1| AG;

    UP ---|1,n| REG;
    REG ---|1,1| ZR;

    UP ---|0,n| DET;
    DET ---|0,n| DM;

    AG ---|0,n| PAR;
    PAR ---|1,n| PAT;

    ZR ---|0,n| INS;
    INS ---|1,1| DM;

    DM ---|0,n| GER;
    GER ---|0,n| ALT;

    PAT ---|1,1| CHAM;
    CHAM ---|1,1| ALT;

    PAT ---|0,n| RA;
    RA ---|1,1| LOG;
```
**🗂️ Dicionário de Dados**

Abaixo segue a descrição das principais entidades modeladas neste sistema:

**🏢 Estrutura Policial**
UNIDADE POLICIAL: Representa as delegacias ou batalhões responsáveis por uma área de atuação.
AGENTE DE SEGURANÇA: Os policiais ou oficiais vinculados a uma unidade.
PATRULHAMENTO: A ação tática realizada pelos agentes (rondas) utilizando viaturas.

**🚨 Monitoramento e Ocorrências**
CIDADÃO: Pessoa física que registra ocorrências ou solicita ajuda.
OCORRÊNCIA: O evento registrado que vincula o cidadão à unidade policial responsável.
ZONA DE RISCO: Áreas geográficas mapeadas que necessitam de atenção especial.

**📡 Tecnologia e IoT**
DISPOSITIVO DE MONITORAMENTO: Câmeras, sensores ou equipamentos instalados nas zonas de risco.
ALERTA EM TEMPO REAL: Notificações geradas automaticamente pelos dispositivos quando algo anômalo é detectado. Estes alertas podem gerar um chamado para um patrulhamento ativo.

**⚙️ Auditoria**
LOGS DO SISTEMA: Registro de auditoria das ações realizadas durante um patrulhamento ou no sistema em geral, garantindo rastreabilidade.

**🔄 Regras de Negócio Principais**
Um Cidadão registra uma ocorrência que é atendida por uma Unidade Policial.
A Unidade Policial possui Agentes e gerencia Zonas de Risco.
Nas Zonas de Risco são instalados Dispositivos de Monitoramento.
Esses dispositivos podem gerar Alertas em Tempo Real.
Um Patrulhamento (composto por agentes) pode ser acionado para atender a um Alerta.

**🛠️ Tecnologias Utilizadas**
Mermaid.js: Para geração do diagrama visual diretamente no Markdown.
Modelagem de Dados: Conceito de Modelo Entidade-Relacionamento (MER).
Desenvolvido para fins de estudo em modelagem de banco de dados.
