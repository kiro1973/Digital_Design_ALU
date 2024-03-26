----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:28:23 06/15/2021 
-- Design Name: 
-- Module Name:    Muxa1 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity MUXA is
 Port ( Inn0 : in  STD_LOGIC;
           Inn1 : in  STD_LOGIC;
           Sel : in  STD_LOGIC;
           O : out  STD_LOGIC);
end MUXA;

architecture Behavioral of Muxa1 is

begin
O <= Inn0 When Sel = '0' else 
     Inn1 when Sel = '1' else 
	  'Z' ; 


end Behavioral;

