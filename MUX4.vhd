
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity MUX4 is
    Port ( in1 : in  STD_LOGIC;
           in2 : in  STD_LOGIC;
           in3 : in  STD_LOGIC;
           in4 : in  STD_LOGIC;
           Sel : in  STD_LOGIC_VECTOR (1 downto 0);
           O : out  STD_LOGIC);
end MUX4;

architecture Behavioral of MUX4 is

begin

O <= in1 when Sel = "00" else
     in2 when Sel = "01" else
     in3 when Sel = "10" else
     in4 when Sel = "11" else
	  'Z' ; 

end Behavioral;

