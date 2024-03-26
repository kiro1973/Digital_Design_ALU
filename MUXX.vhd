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

package MUXX is

COMPONENT Behavioral is
    Port ( Inn0 : in  STD_LOGIC;
           Inn1 : in  STD_LOGIC;
           Sel : in  STD_LOGIC;
           O : out  STD_LOGIC);
end COMPONENT;

end MUXX;
