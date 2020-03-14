# Álgebra Linear com Python
**_Aplicações dos tópicos aprendidos na disciplina Álgebra Linear usando a linguagem de progamação Python._**

#### Relate erros, sugestões ou opiniões sobre o repositório
- [Clique aqui](https://forms.gle/cVyBnE6Vo1hw9Lhh9)

#### Começando
Essas instruções tem a finalidade de mostrar-lhes como baixar e usar os códigos do repositório em suas máquinas, visando compilar e
editar para diversas finalidades.

#### Pré-requisitos
É interessante que o usuário tenho instalado todo o ambiente de trabalho Python em sua máquina. Caso não seja viável a instalação, não se preocupe. Há outras formas pela qual é possível acessar os progamas do repositório. Vamos apresentar o Google Colab Notebook mais adiante e, através dele, você aprenderá como é possível usá-lo para baixar os progamas e executá-los através do seu navegador Google Chrome.

#### Instalando

###### Baixando o ambiente de trabalho Python em sua máquina.

Veja o vídeo abaixo para instalar devidamente o Python em sua máquina (disponível para Windows, Linux e MacOS).

- [Instalando o Python3](https://www.youtube.com/watch?v=VuKvR1J2LQE)

Após todos os procedimentos do vídeo terem sido realizados, abra o prompt de comando da sua máquina e digite os seguintes comandos
para importar todas as bibliotecas usadas nos progamas do repositório:

1. **_pip install numpy_**
2. **_pip install matplotlib_**
3. **_pip install scipy_**
4. **_pip install jupyter_** ou **_pip install jupyter lab_**
5. **_pip install sympy_**
6. **_pip install imageio_**
7. **_pip install ipywidgets_**

Após importar todas as bibliotecas acima você terá todos os requisitos necessários para compilar os progamas apresentados no repositório.
Verifique no progama abaixo se todos as bibliotecas foram devidamente importadas:
 
 -[Verifique a Instalação](https://github.com/Alyssonmach/Algebra-Linear-com-Python/blob/master/VerifiqueInstalacao.ipynb)

###### Usando o Google Colab Notebook

Como foi dito acima, outra opção razoável é usar o Google Colab Notebook. Vale salientar que por mais completo que seja essa instrumento
de trabalho da Google, ele não possuí todas as bibliotecas disponíveis acima. Entretanto, você pode verificar qual célula não compilará.
Um dos erros possíveis é a não disponibilidade de algumas no servidor. Para contornar tal fato, crie uma nova célula de código(CODE)
e digite **_pip install []_**, na qual [] será o nome da biblioteca a ser importada. Veja o vídeo abaixo para ter uma ideia de como
utilizar o Google Colab Notebook.

- [Get started with Google Colaboratory](https://www.youtube.com/watch?v=inN8seMm7UI)

#### Compilando

Vamos agora aprender a compilar todos os progamas do repositório dado que todos os passos acima estão satisfeitos. O arquivo .ipynb 
utilizando é um forte instrumento para se utilizar quando deseja-se estudar tópicos de progamação voltados para algum assunto 
didático. No nosso repositório, usamos tal instrumento para trazer aplicações da disciplina de Álgebra Linear computacionalmente.
Muito além de ser algo complementar no aprendizado, é também um ótimo começo para quem deseja aprender a linguagem de progamação 
Python, dado que é uma linguagem com amplas funcionalidades para diversas áreas de trabalho.

###### Como usar os notebooks

Os arquivos com extensão .ipynb são chamados de notebooks. Um notebook é composto por células, essas que obedecem as normas vigentes de
boa prática de progamação: a ideia da progamação sequencial. Uma célula pode ser de dois tipos: célula de código (Code) ou célula de 
texto (Markdown). As células de texto são independentes entre sí em um viés computacional, pois a execução da mesma não vai 
interferir nas células de código. Sobre o víes do aluno, é interessante para o seu entendimento que a leitura das mesmas seja feito
sequencialmente, dado que algumas células desenvolvidas anteriormente ajudam no entendimentos das desenvolvidas posteriormente. As
células de código, como foi dito acima, obedecem a ideia da progamação sequencial. Desse modo, é fundamental que:

 > **TODAS AS CÉLULAS DE CÓDIGO DEVEM SER EXECUTADAS, DO INÍCIO AO FIM, DADO QUE AS CÉLULAS POSTERIORES SÃO DEPENDENTES DAS CÉLULAS     ANTERIORES**
 
Caso contrário, erros de compilação surgirão, interrompendo o funcionamento do progama.
 
 ###### Abrindo um notebook
 
 Para quem optou por instalar na sua máquina o ambiente de trabalho do Python, pode seguir as seguintes instruções para abrir um 
 notebook em sua máquina:
 
 1. Abra o prompt de comando.
 2. Digite **_jupyter notebook_**, caso tenha optado pelo método de instalação **_pip install jupyter_** ou digite **_jupyter lab_**, 
 caso tenha optado pela opção de intalação **_pip install jupyter lab_**.
 
 > **Jupyter Notebook tem o mesmo funcionamento do Jupyter Lab, a única diferença é que o segundo é uma versão do aplicativo mais           recente que a primeira.**
 
 3. Após ter feito isso, será criado no seu prompt de comando uma espécie de servidor local e o aplicativo será aberto em seu browser
 padrão.
 
 > **NÃO FECHE O SEU PROMPT DE COMANDO ENQUANTO ESTIVER USANDO O JUPYTER NOTEBOOK OU JUPYTER LAB, CASO CONTRÁRIO, O KERNEL DO          APLICATIVO SERÁ ENCERRADO JUNTO.**
 
 4. Caso você queira criar um novo notebook, clique na opção "New Launcher". Dentro do progama:
  - [x] Ícone do disquete("Save the notebook contents and create checkpoint"): salva o seu progama;
  - [x] Ícone de +("Insert a cell below"): Insere uma célula no seu notebook;
  - [x] Ícone de tessoura("Cut the selected cells"): corta alguma célula selecionada do seu progama;
  - [x] Ícone de copiar("Copy the selected cells"): copia uma célula do seu progama;
  - [x] Ícone da prancheta("Paste cells from the clipboard"): cola a célula copiada;
  - [x] Ícone de dar play("Run the selected cells and advance"): compila a célula selecionada;
  - [x] Ícone de parar("Interrupt the Kernel"): Interrompe a compilação da célula em processo;
  - [x] Ícone de reiniciar("Restart the Kernel"): Reinicia a compilação da célula em processo;
  - [x] Opção Markdown: Transforma a célula selecionada em uma célula de texto;
  - [x] Opção Code: Transforma a célula selecionada em uma célula de código;
 5. Caso você queira criar uma pasta, clique na opção "New folder".
 6. Caso você queira adicionar um novo arquivo .ipynb do seu computador, clique na opção "Upload Files".
 
 Para quem optou usar o Google Colab Notebook, pode seguir as seguintes instruções para executar um notebook em um servidor pelo
 Google Browser.
 
1. Logo no início, aparecerá uma janela com diversas opções, nela você pode fazer os seguintes passos:
 - [x] Na aba "Examples", temos uma série de progamas .ipynb fornecidos pelo Google para familizarizar o usuário com o aplicativo;
 - [x] Na aba "Recent", é possível ver os progamas .ipynb acessados recentemente;
 - [x] Na aba "Google Drive", você verá todos os seus progamas criados;
  > **Todos os progamas criados no Google Colab Notebook são salvos no Google Drive e vinculado a conta do usuário.**
 - [x] Na aba "GitHub", pode-se copiar a URL do repositório que tem uma extensão .ipynb e usá-lo para abrir o progama do GitHub no 
   Google Colab Notebook de forma direta;
  > **PARA USUÁRIOS DO GOOGLE COLAB NOTEBOOK, ESSA SERÁ A FORMA DE ACESSAR OS PROGAMAS DO NOSSO REPOSITÓRIO**
 - [x] Na aba "Upload" você pode adicionar um progama .ipynb do seu computador diretamente no Google Colab Notebook.
2. Na opção "New Python3 Notebook" você conseguirá criar um novo notebook. Vamos agora aprender os comandos para prosseguir com essa
criação.
 - [x] Na opção "+ Code", você pode adicionar uma célula de código;
 - [x] Na opção "+ Text", você pode adicionar uma célula de texto;
 - [x] Clicando em "file": salva o seu progama;
 - [x] Ícone de lixeira: exclui alguma célula selecionada do seu progama;
 - [x] Nos três pontos para ter acesso a mais opções na célula, você pode achar a opção "Copy cell", para copiar a célula;
 - [x] Ao lado de cada célula, há uma opção para compilar ela, assim, você pode executar as células de código;
 - [x] Clicando na opção "runtime", você pode achar a opção "Run all", para compilar todas as células do progama de uma vez só;
 
 #### Baixando Arquivos do GitHub
 
 ###### Baixar pelo própio GitHub
 
1. Primeiramente, clique no arquivo que você deseja baixar no GitHub.
2. Após clicar no arquivo desejado com extensão .ipynb, você conseguirá ver o arquivo, mas não poderá interagir com ele.
3. Clique na opção Raw e, após isso, clique em "Ctrl + S" para salvar o arquivo em seu computador.
4. Repare que o tipo do arquivo está como um documento de texto, você deve modificar essa opção para "Todo tipo de arquivo" e modificar  também o nome do documento. A extensão .ipynb deve ser mantida.
5. O nome do documento deve terminar com .ipynb, respeitando as regras ao colocar o nome no arquivo, para que ele compile.
6. Abra o seu Jupyter Notebook ou Google Colab Notebook.
7. Faça o upload do arquivo e pronto, você terá um arquivo .ipynb na qual você pode interagir, editar, remover ou adicionar células.

###### Usando o nbviewer

O própio Jupyter Project fornece uma ferramenta para que o usuário consiga baixar e visualizar arquivos .ipynb a partir do GitHub.
Segue o link do site para acessar o nbviewer.

- [nbviewer](https://nbviewer.jupyter.org/)

1. Insira o link do progama disponível do repositório e clique em pesquisar.
2. Clique em "Download Notebook" para baixar o arquivo na sua máquina.

#### Usando o binder para compilar os progamas

Uma opção terciária para executar os progamas .ipynb é usando o binder, do própio nbviewer. Veja os passos abaixo:

1. Insira o link do progama disponível no repositório e clique em pesquisar.
2. Clique na opção "Execute on Binder".
3. Abrirá no browser um aplicativo Jupyter Notebook.

#### Usando o Azure Notebooks da Microsoft

Outrou recurso interessante a ser mencionado é o Azure Notebooks da Microsoft. Com ele, você pode acessar todos os progamas aqui criados
e abrí-los pelo própio navegador web, usando um servidor online da própia plataforma. Use o link abaixo para acessá-lo ou vá ao topo da 
página, lá você encontrará o mesmo link para acessar. Além disso, utilize os seguintes passos para compilar o progama:

1. Ao abrir a página do projeto, esteja logado com a sua conta da Microsoft.
2. Clique na parte superior do projeto em "Clone", assim você terá salvo todos os projetos na sua conta.
3. Caso você deseje baixar em seu computador o progama, há uma opção para fazer o download dos programas .ipynb
3. Pronto, você pode usá-los da forma que quiser, alterando valores e testando novas funcionalidades.

- [Azure Notebooks Microsoft](https://notebooks.azure.com/Alyssonmach/projects/algebra-linear-com-python)

#### Caso ainda haja dúvidas

|**_Entre em contato com o meu e-mail_**|
|---------------------------------------|
|alyssonmachado388@gmail.com            |

###### **_Dê um grande sorriso. Juntos, valemos a primeira página._**
