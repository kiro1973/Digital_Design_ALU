--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package ALU1 is





component OneBitBR is
    port (a, b, CarryIn : in std_logic;
          Operation: in std_logic_vector (1 downto 0);
          Result, CarryOut: out std_logic);
end component;



end ALU1;

