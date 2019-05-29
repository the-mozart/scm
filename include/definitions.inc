\newtheorem{dfn}{Определение}  
\newtheorem{theorems}{Теорема}  

\newcommand{\Rn}{\mathrm{R}^n}
\newcommand{\Rt}{\mathrm{R}^3}
\newcommand{\Sm}{\mathrm{S}^m}
\newcommand{\Ql}{\mathrm{Q}^l}

\newcommand{\Rd}[1]{\mathbb{R}^{#1}}
\newcommand{\Vn}{\mathrm{V}^n}

\newcommand{\oper}[1]{{\bf #1}}
\newcommand{\basis}[1]{\vec{\bf #1}}
\newcommand{\dt}[1]{\frac{d #1}{dt}}
\newcommand{\dtds}[1]{\displaystyle\frac{d #1}{dt}}
\newcommand{\ds}[1]{\frac{d #1}{ds}}
\newcommand{\dsds}[1]{\displaystyle\frac{d #1}{ds}}
\newcommand{\dsd}[1]{\frac{d^2 #1}{ds^2}}
\newcommand{\pdt}[1]{\frac{\partial #1}{\partial t}}
\newcommand{\pds}[1]{\frac{\partial #1}{\partial s}}
\newcommand{\pdx}[1]{\frac{\partial #1}{\partial x}}
\newcommand{\pdy}[1]{\frac{\partial #1}{\partial y}}
\newcommand{\pdz}[1]{\frac{\partial #1}{\partial z}}
\newcommand{\pdxds}[1]{\displaystyle\frac{\partial #1}{\partial x}}
\newcommand{\pdyds}[1]{\displaystyle\frac{\partial #1}{\partial y}}
\newcommand{\pdzds}[1]{\displaystyle\frac{\partial #1}{\partial z}}
\newcommand{\pdn}[1]{\frac{\partial #1}{\partial n}}
\newcommand{\grad}[1]{\operatorname{grad} #1}
\newcommand{\gradv}[1]{\basis{i}\pdx{#1}+\basis{j}\pdy{#1}+\basis{k}\pdz{#1}}
\newcommand{\gradvds}[1]{\basis{i}\pdxds{#1}+\basis{j}\pdyds{#1}+\basis{k}\pdzds{#1}}

\newcommand{\pd}[2]{\frac{\partial #1}{\partial #2}}

\newcommand{\pdxt}[1]{\frac{\partial^2 #1}{\partial x^2}}
\newcommand{\pdyt}[1]{\frac{\partial^2 #1}{\partial y^2}}
\newcommand{\pdzt}[1]{\frac{\partial^2 #1}{\partial z^2}}


\newcommand{\dv}[1]{\operatorname{div}\vec{#1}}
\newcommand{\dvdef}[1]{\pdx{#1_x}+\pdy{#1_y}+\pdz{#1_z}}
\newcommand{\dvdefds}[1]{\pdxds{#1_x}+\pdyds{#1_y}+\pdzds{#1_z}}
\newcommand{\dvwv}[1]{\operatorname{div} #1}
\newcommand{\divo}{\operatorname{div}}
\newcommand{\rot}[1]{\operatorname{rot}\vec{#1}}
\newcommand{\rotpr}[2]{\operatorname{rot}_{#1}\vec{#2}}
\newcommand{\rotwv}[1]{\operatorname{rot} #1}

\newcommand{\lapl}[1]{\pdxt{#1}+\pdyt{#1}+\pdzt{#1}}
\newcommand{\argq}{(q_1,q_2,q_3)}
\newcommand{\argx}{(x,y,z)}
\newcommand{\tensor}[1]{\boldsymbol{#1}}

\newcommand{\argtr}{(t,\vec{r})}

