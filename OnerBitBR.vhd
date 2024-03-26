
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.ALUcomponents.all ;
use work.MUXX.all;

entity OnerBitBR is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
			  Less :in STD_LOGIC ; 
           Cin : in  STD_LOGIC;
           OPER : in  STD_LOGIC_VECTOR (3 downto 0);
           RES : out  STD_LOGIC;
           Cout : out  STD_LOGIC);
end OnerBitBR; 


 

architecture Behavioral of OnerBitBR is

COMPONENT Behavioral is
    Port ( Inn0 : in  STD_LOGIC;
           Inn1 : in  STD_LOGIC;
           Sel : in  STD_LOGIC;
           O : out  STD_LOGIC);
end COMPONENT;

signal nb,na,tempB,tempA,tempOr,tempAnd , tempCout , tempOut,temp,SelB,SelA,tmpCin :std_logic ; 
signal tmpres : STD_LOGIC_VECTOR (1 downto 0 ) ; 

begin

tmpres <= OPER (1 downto 0 ) ; 
SelB <= OPER(2);
SelA <= OPER(3);
--tmpCin <= '1' when OPER (2)='1' else Cin ; 
nb <= not (B) ; 
na <= not (A); 
MUXB : Mux2 port map ( B , nb , SelB , tempB ) ; 
MUXA : Behavioral port map (A ,na ,SelA ,  tempA ) ;
tempOr <= tempA or tempB ; 
tempAnd <= tempA and tempB ;

FA : FullAdder port map (A,tempB,Cin ,tempCout ,tempOut ); 
--State_Process : process (tempOut)
--begin
--if ((tempOut nor '0') <= '0' ) then 
--Less <= '1' ;
--else 
--Less <= '0' ;
--end if ;
--
--end process State_Process ;
MUXALU : MUX4 port map (tempAnd ,tempOr , tempOut,Less ,tmpres ,temp);
RES <= temp ; 
Cout <=tempCout ; 


end Behavioral;

