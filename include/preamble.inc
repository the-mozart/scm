\beamertemplatenavigationsymbolsempty % Hide navigation panel

\setbeamertemplate{headline}{}

\setbeamertemplate{footline}{%
%	\hspace{0.94\paperwidth}%
	\leavevmode%
	\hbox{%
	\begin{beamercolorbox}[wd=.4\paperwidth,ht=2.25ex,dp=1ex,center]{author in head/foot}%
	\usebeamerfont{author in head/foot}\insertshortauthor
	\end{beamercolorbox}%
	\begin{beamercolorbox}[wd=.6\paperwidth,ht=2.25ex,dp=1ex,right]{date in head/foot}%
		\usebeamerfont{date in head/foot}
		\insertframenumber{} / \inserttotalframenumber\hspace*{2ex} 
	\end{beamercolorbox}
	}%
	\vskip0pt%
	
}

\usepackage[main=russian,english]{babel}   %% загружает пакет многоязыковой вёрстки
\usepackage{fontspec}      %% подготавливает загрузку шрифтов Open Type, True Type и др.
\defaultfontfeatures{Ligatures={TeX},Renderer=Basic}  %% свойства шрифтов по умолчанию
\setmainfont{Times New Roman} %% задаёт основной шрифт документа
%\usefonttheme{professionalfonts}% SOLUTION
\usefonttheme{serif}

% Уменьшаем счётчик слайдов на два для того, чтобы нумерация не касалась слайда с титульной страницы аннотации

\let\otp\titlepage
\renewcommand{\titlepage}{\otp\addtocounter{framenumber}{-2}}

\usepackage{textcomp}
\usepackage{amssymb,amsmath}
\usepackage{xcolor}
\usepackage{enumitem}


