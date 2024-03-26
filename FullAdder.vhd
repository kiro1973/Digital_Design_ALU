
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all ; 

entity FullAdder is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           Cin : in  STD_LOGIC;
           Cout : out  STD_LOGIC;
           O : out  STD_LOGIC);
end FullAdder;

architecture Behavioral of FullAdder is
signal tmp : std_logic_vector (1 downto 0 ) ; 

begin
tmp <= ('0' & A) + ('0' & B) + ('0' & Cin); 

O <= tmp(0);
Cout <= tmp(1) ; 

end Behavioral;

