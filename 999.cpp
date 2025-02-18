\documentclass[10pt, letterpaper]{article}

% Packages:
\usepackage[
    ignoreheadfoot, % set margins without considering header and footer
    top=2 cm, % seperation between body and page edge from the top
    bottom=2 cm, % seperation between body and page edge from the bottom
    left=2 cm, % seperation between body and page edge from the left
    right=2 cm, % seperation between body and page edge from the right
    footskip=1.0 cm, % seperation between body and footer
    % showframe % for debugging 
]{geometry} % for adjusting page geometry
\usepackage[explicit]{titlesec} % for customizing section titles
\usepackage{tabularx} % for making tables with fixed width columns
\usepackage{array} % tabularx requires this
\usepackage[dvipsnames]{xcolor} % for coloring text
\definecolor{primaryColor}{RGB}{0, 79, 144} % define primary color
\usepackage{enumitem} % for customizing lists
\usepackage{fontawesome5} % for using icons
\usepackage{amsmath} % for math
\usepackage{graphicx}
\usepackage[
    pdftitle={Mayur Soni's CV},
    pdfauthor={Mayur Soni},
    pdfcreator={Mayur Soni},
    colorlinks=true,
    urlcolor=primaryColor
]{hyperref} % for links, metadata and bookmarks
\usepackage[pscoord]{eso-pic} % for floating text on the page
\usepackage{calc} % for calculating lengths
\usepackage{bookmark} % for bookmarks
\usepackage{lastpage} % for getting the total number of pages
\usepackage{changepage} % for one column entries (adjustwidth environment)
\usepackage{paracol} % for two and three column entries
\usepackage{ifthen} % for conditional statements
\usepackage{needspace} % for avoiding page brake right after the section title
\usepackage{iftex} % check if engine is pdflatex, xetex or luatex

% Ensure that generate pdf is machine readable/ATS parsable:
\ifPDFTeX
    \input{glyphtounicode}
    \pdfgentounicode=1
    \usepackage[T1]{fontenc}
    \usepackage[utf8]{inputenc}
    \usepackage{lmodern}
\fi

\usepackage[default, type1]{sourcesanspro} 

% Some settings:
\AtBeginEnvironment{adjustwidth}{\partopsep0pt} % remove space before adjustwidth environment
\pagestyle{empty} % no header or footer
\setcounter{secnumdepth}{0} % no section numbering
\setlength{\parindent}{0pt} % no indentation
\setlength{\topskip}{0pt} % no top skip
\setlength{\columnsep}{0.15cm} % set column seperation
\makeatletter
\let\ps@customFooterStyle\ps@plain % Copy the plain style to customFooterStyle
\patchcmd{\ps@customFooterStyle}{\thepage}{
    \color{gray}\textit{\small Page \thepage{} of \pageref*{LastPage}}
}{}{} % replace number by desired string
\makeatother
\pagestyle{customFooterStyle}

\titleformat{\section}{
    % avoid page braking right after the section title
    \needspace{4\baselineskip}
    % make the font size of the section title large and color it with the primary color
    \Large\color{primaryColor}
}{
}{
}{
    % print bold title, give 0.15 cm space and draw a line of 0.8 pt thickness
    % from the end of the title to the end of the body
    \textbf{#1}\hspace{0.15cm}\titlerule[0.8pt]\hspace{-0.1cm}
}[] % section title formatting

\titlespacing{\section}{
    % left space:
    -1pt
}{
    % top space:
    0.3 cm
}{
    % bottom space:
    0.2 cm
} % section title spacing

% \renewcommand\labelitemi{$\vcenter{\hbox{\small$\bullet$}}$} % custom bullet points
\newenvironment{highlights}{
    \begin{itemize}[
        topsep=0.10 cm,
        parsep=0.10 cm,
        partopsep=0pt,
        itemsep=0pt,
        leftmargin=0.4 cm + 10pt
    ]
}{
    \end{itemize}
} % new environment for highlights

\newenvironment{highlightsforbulletentries}{
    \begin{itemize}[
        topsep=0.10 cm,
        parsep=0.10 cm,
        partopsep=0pt,
        itemsep=0pt,
        leftmargin=10pt
    ]
}{
    \end{itemize}
} % new environment for highlights for bullet entries


\newenvironment{onecolentry}{
    \begin{adjustwidth}{
        0.2 cm + 0.00001 cm
    }{
        0.2 cm + 0.00001 cm
    }
}{
    \end{adjustwidth}
} % new environment for one column entries

\newenvironment{twocolentry}[2][]{
    \onecolentry
    \def\secondColumn{#2}
    \setcolumnwidth{\fill, 4.5 cm}
    \begin{paracol}{2}
}{
    \switchcolumn \raggedleft \secondColumn
    \end{paracol}
    \endonecolentry
} % new environment for two column entries

\newenvironment{threecolentry}[3][]{
    \onecolentry
    \def\thirdColumn{#3}
    \setcolumnwidth{1 cm, \fill, 4.5 cm}
    \begin{paracol}{3}
    {\raggedright #2} \switchcolumn
}{
    \switchcolumn \raggedleft \thirdColumn
    \end{paracol}
    \endonecolentry
} % new environment for three column entries

\newenvironment{header}{
    \setlength{\topsep}{0pt}\par\kern\topsep\centering\color{primaryColor}\linespread{1.5}
}{
    \par\kern\topsep
} % new environment for the header

\newcommand{\placelastupdatedtext}{% \placetextbox{<horizontal pos>}{<vertical pos>}{<stuff>}
  \AddToShipoutPictureFG*{% Add <stuff> to current page foreground
    \put(
        \LenToUnit{\paperwidth-2 cm-0.2 cm+0.05cm},
        \LenToUnit{\paperheight-1.0 cm}
    ){\vtop{{\null}\makebox[0pt][c]{
        % \small\color{gray}\textit{Last updated in September 2024}\hspace{\widthof{Last updated in September 2024}}
    }}}%
  }%
}%

% save the original href command in a new command:
\let\hrefWithoutArrow\href

% new command for external links:
\renewcommand{\href}[2]{\hrefWithoutArrow{#1}{\ifthenelse{\equal{#2}{}}{ }{#2 }\raisebox{.15ex}{\footnotesize \faExternalLink*}}}


\begin{document}
    \newcommand{\AND}{\unskip
        \cleaders\copy\ANDbox\hskip\wd\ANDbox
        \ignorespaces
    }
    \newsavebox\ANDbox
    \sbox\ANDbox{}

    \placelastupdatedtext
    \begin{header}

        
        % \fontsize{30 pt}{30 pt}
        % \textbf{Mayur Soni} \includegraphics[width=0.15\linewidth]{photo.jpg}
        

      % \begin{figure}
      %     \centering
      %     \includegraphics[width=0.15\linewidth]{photo.jpg}
      % \end{figure}

    \noindent
\begin{minipage}{0.2\linewidth} % Adjust width as needed
    \includegraphics[width=\linewidth]{photo.jpg}
\end{minipage}%
\hfill
\begin{minipage}{0.75\linewidth} % Adjust width as needed
    \fontsize{30pt}{30pt}\selectfont
    \textbf{Mayur Soni}
\end{minipage}
      

        % \vspace{0.3 cm}
        \vspace{1 cm}

        \normalsize
        \mbox{{\footnotesize\faMapMarker*}\hspace*{0.13cm}Jaipur}%
        \kern 0.25 cm%
        \AND%
        \kern 0.25 cm%
        \mbox{\hrefWithoutArrow{mailto:soni18august2004@gmail.com}{{\footnotesize\faEnvelope[regular]}\hspace*{0.13cm}soni18august2004@gmail.com}}%
        \kern 0.25 cm%
        \AND%
        \kern 0.25 cm%
        \mbox{\hrefWithoutArrow{tel:7849817724}{{\footnotesize\faPhone*}\hspace*{0.13cm}7849817724}}%
        \kern 0.25 cm%
        \AND%
        \kern 0.25 cm%
        \mbox{\hrefWithoutArrow{https://sonibrothers18.infinityfreeapp.com/}{{\footnotesize\faLink}\hspace*{0.13cm}Portfolio}}%
        \kern 0.25 cm%
        \AND%
        \kern 0.25 cm%
        \mbox{\hrefWithoutArrow{https://linkedin.com/in/sonibrothers18}{{\footnotesize\faLinkedinIn}\hspace*{0.13cm}sonibrothers18}}%
        \kern 0.25 cm%
        \AND%
        \kern 0.25 cm%
        \mbox{\hrefWithoutArrow{https://github.com/sonibrothers18}{{\footnotesize\faGithub}\hspace*{0.13cm}sonibrothers18}}%
        \kern 0.25 cm%
        \AND%
        \kern 0.25 cm%
        % \mbox{\hrefWithoutArrow{https://github.com/sonibrothers18}{{\footnotesize\faGithub}\hspace*{0.13cm}sonibrothers18}}%
        \faCode ~ \href{https://leetcode.com/u/soni18august2004/}{LeetCode}
    \end{header}

    \vspace{0.3 cm - 0.3 cm}


    \section{Summary}

        \begin{onecolentry}
            Enthusiastic Learner for crafting scalable and efficient applications. Seeking a challenging role to apply my technical skills and contribute to a collaborative team environment.
        \end{onecolentry}

    

    \section{Education}
        
        \begin{threecolentry}{}{
            2022 – 2026
        }
            \textbf{Poornima College of Engineering, Jaipur}
            \begin{highlights}
                \item CGPA: 7.2/10.0
                \item \textbf{Coursework: }B.Tech, Computer Science \& Engineering
            \end{highlights}
        \end{threecolentry}
        \vspace{0.2 cm}
        
        \begin{threecolentry}{}{
            2022
        }
            \textbf{Silver Oak School, Alwar}
            \begin{highlights}
                \item Percentage: 75.00\%
                \item \textbf{Coursework: } Senior Secondary (XII), CBSE
            \end{highlights}
        \end{threecolentry}
        \vspace{0.2 cm}
        
        \begin{threecolentry}{}{
            2020
        }
            \textbf{Silver Oak School, Alwar}
            \begin{highlights}
                \item Percentage: 80.00\%
                \item \textbf{Coursework: }Secondary (X), CBSE
            \end{highlights}
        \end{threecolentry}


    
    \section{Experience}



        
        \begin{twocolentry}{
            Gurugram, Haryana

        Jul 2024 – Aug 2024
        }
            \textbf{Azure Skynet Solutions Pvt. Ltd.}, Intern
            \begin{highlights}
                \item Designed, optimized, and managed relational databases, ensuring efficient data storage and retrieval.
                \item Developed and executed complex SQL queries, including joins, sub queries, stored procedures, and triggers.

            \end{highlights}
        \end{twocolentry}


        \vspace{0.2 cm}

        \begin{twocolentry}{
            Jaipur, Rajasthan
            
            Aug 2023
        }
            \textbf{Zeetron Networks Pvt. Ltd.}, Intern
            \begin{highlights}
                \item Learned and applied fundamental Python programming concepts, including variables, loops, and functions.
                \item Gained experience with basic data structures such as lists, tuples, and dictionaries.
                \item Developed simple Python scripts for data handling, automation, and problem-solving.
            \end{highlights}
        \end{twocolentry}


    
    \section{Projects}



        
        \begin{twocolentry}{
            \href{https://github.com/sonibrothers18/Portfolio}{Github}
            
            \href{https://sonibrothers18.infinityfreeapp.com/}{Portfoilo}
        }
            \textbf{Personal Portfolio}
            \begin{highlights}
                \item A collection of responsive and dynamic web projects showcasing my skills in HTML, CSS. Features interactive designs, front-end development.
            \end{highlights}
        \end{twocolentry}


        \vspace{0.2 cm}

        \begin{twocolentry}{
            \href{https://github.com/sonibrothers18/python_projects/tree/main/jarvis_python}{Github}
        }
            \textbf{Voice Command System}
            \begin{highlights}
                \item Developed a voice command system using Python that listen to a command and perform different operations.
            \end{highlights}
        \end{twocolentry}


        \vspace{0.2 cm}

        \begin{twocolentry}{
             \href{https://github.com/sonibrothers18/chatbot_pyhton/tree/main}{Github}
            
            \href{https://chatbotpyhton-dcuxckddnapgh3wlxtkp6k.streamlit.app/}{ChatBot}
        }
           
            \textbf{Chat Bot}
            \begin{highlights}
                \item Design a chat-bot using python and API keys
            \end{highlights}
        \end{twocolentry}

        
        \vspace{0.2 cm}

        \begin{twocolentry}{
             \href{https://github.com/sonibrothers18/real_time_traffic_management_system}{Github}
        }
           
            \textbf{Real Time Traffic Management System}
            % \begin{highlights}
            %     \item Design a chat-bot using python and API keys
            % \end{highlights}
        \end{twocolentry}



    \section{Courses}
        
        \begin{twocolentry}{

        Jul 2024 – Oct 2024
        }
            \textbf{Programming In Modern C++}
            \begin{highlights}
                \item Successfully completed a 12 week course from IIT Kharagpur and secured 72\% marks.
            \end{highlights}
        \end{twocolentry}


        \vspace{0.2 cm}

        \begin{twocolentry}{            
            Jul 2024 - Sep 2024
        }
            \textbf{Data Science}
            \begin{highlights}
                \item Successfully completed a 8 weeks online certified training on Data Science from Internshala Trainings. The training consisted of Introduction to Data Science, Data Analysis Fundamentals, Introduction to Data Visualization, Working with Data, Predictive Analytics using Machine Learning, AI in Data Science, and Capstone Project modules. In the final assessment, I scored 78\% marks.
            \end{highlights}
        \end{twocolentry}

        \vspace{0.2 cm}

        \begin{twocolentry}{

        Jul 2023 – Oct 2023
        }
            \textbf{Problem Solving Through Programming In C}
            \begin{highlights}
                \item Successfully completed a 12 week course from IIT Kharagpur and secured 71\% marks.
            \end{highlights}
        \end{twocolentry}




    \section{ExtraCurricular/Achievements}

    \begin{onecolentry}
        \begin{highlightsforbulletentries}

        \item Actively engaging with practice exercises to build proficiency in Data Structures and Algorithms.
        \item Secured 1st position in the Robo War event of Aadhar XI at Poornima College of Engineering.
        \item Participated in Hack IT Sapiens 2.0 Hackathon
        \item Participated and Presented model in "6th Technovation 2023, International Conference on Recent Advances in Engineering \& Technical Paper and Model Contests"
        \item Published a research paper on "EXPLORING THE CREATIVE ABILITY OF PROMPT ENGINEERING" at "3rd INTERNATIONAL CONFERENCE ON RECENT INNOVATION IN ENGINEERING, TECHNOLOGY, MANAGEMENT AND RESEARCH(3rd ICRIETMR 2024)"


        \end{highlightsforbulletentries}
    \end{onecolentry}


    \section{Publications}
        
        \begin{samepage}
            \begin{twocolentry}{
                Jul 2024
            }
                \textbf{Exploring the Creative Ability of Prompt Engineering}
                \vspace{0.10 cm}

       \href{https://github.com/sonibrothers18/Certificates/blob/main/Research\%20Paper\%20Magazine.pdf}{Link to Research Paper}
            \end{twocolentry}
        \end{samepage}


    \section{Technologies}

        
        \begin{onecolentry}
            \textbf{Languages:} C++, C, SQL, Python
        \end{onecolentry}

        \vspace{0.2 cm}

        \begin{onecolentry}
            \textbf{Database: } MySQL
        \end{onecolentry}

        \vspace{0.2 cm}

        \begin{onecolentry}
            \textbf{Web Dvelopment: } HTML, CSS
        \end{onecolentry}

        \vspace{0.2 cm}

        \begin{onecolentry}
            \textbf{Coursework: } DBMS, DSA, OS, OOP's
        \end{onecolentry}
        
        \vspace{0.2 cm}

        \begin{onecolentry}
            \textbf{Tools: } Git/GitHub, VS Code, XAMPP(Apache), Jupyter Notebook
        \end{onecolentry}

        
    \section{Certificates}

        
        \begin{onecolentry}
            \href{https://github.com/sonibrothers18/Certificates}{Link for all Certificates}
        \end{onecolentry}

    

\end{document}