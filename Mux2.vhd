
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity Mux2 is
    Port ( IN0 : in  STD_LOGIC;
           IN1 : in  STD_LOGIC;
           Sel : in  STD_LOGIC;
           O : out  STD_LOGIC);
end Mux2;

architecture Behavioral of Mux2 is

begin
O <= IN0 When Sel = '0' else 
     IN1 when Sel = '1' else 
	  'Z' ; 

end Behavioral;

