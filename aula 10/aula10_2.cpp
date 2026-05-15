1. Classe: Usuário (Segurança) 
Conceito: Abstração do mecânico/administrador no sistema. 
Atributos (Dados): E-mail, Senha (criptografada) e UID (Identificador único do Google). 
Métodos (Ações): 
login(): Valida credenciais no Firebase Auth. 
monitorarEstado(): Verifica se o usuário está logado para liberar as telas. 

2. Classe: Cliente (Gestão de Contatos) 
Conceito: Objeto que representa o dono do veículo no banco de dados. 
Atributos (Dados): Nome, CPF/CNPJ, Telefone e Data de Cadastro. 
Métodos (Ações): 
aplicarMascara(): Formata strings em tempo real (ex: coloca parênteses no telefone). 
acionarWhatsApp(): Método que dispara a API externa para envio de avisos. 

3. Classe: Ordem de Serviço (Operacional) 
Conceito: O "coração" do sistema; vincula um serviço a um custo e a um cliente. 
Atributos (Dados): ID da OS, Veículo (Placa/Modelo), Descrição, Valor e Status (Pendente/Finalizado). 
Métodos (Ações): 
atualizarProgresso(): Altera o status no Firestore sem recarregar a página. 
gerarRelatorioPDF(): Mapeia os dados do objeto para o layout de impressão. 

4. Classe: Dashboard (Inteligência e Cálculo) 
Conceito: Camada que processa dados brutos para gerar visão de negócios. 
Atributos (Dados): Array de serviços, Total de faturamento mensal. 
Métodos (Ações): 
calcularMetricas(): Processa a soma de valores e a média (Ticket Médio). 
renderizarGrafico(): Traduz quantitativos de status para a biblioteca Chart.js. 

5. Classe: Ajustes (Configuração Local) 
Conceito: Abstração da identidade da oficina (personalização). 
Atributos (Dados): Nome da Oficina, Endereço, Contato. 
Método (Ação): 
persistirLocalStorage(): Salva dados no navegador para que o cabeçalho do PDF seja automático. 

 
