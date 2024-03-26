

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use ieee.std_logic_arith.all;
--use IEEE.std_logic_signed.all ;
--use IEEE.std_logic_unsigned.all;

use work.ALUcomponents.all ;
use work.ALU1.all ;
entity ALU32 is
port (
                    data1: in  STD_LOGIC_VECTOR(31 downto 0);
           data2: in  STD_LOGIC_VECTOR(31 downto 0);
	      aluop: in std_logic_vector (3 downto 0);
           Cin : in  std_logic;
           res : inout  STD_LOGIC_VECTOR (31 downto 0);
           cflag : inout  STD_LOGIC;
           oflag : out  STD_LOGIC;
           zflag : out  STD_LOGIC
			

);
end ALU32;

architecture Behavioral of ALU32 is

signal c: std_logic_vector (30 downto 0);
signal Less: std_logic;
signal result : std_logic_vector (31 downto 0);
signal tempc :std_logic_vector (30 downto 0)  ;
signal cf :std_logic ;
begin
--zero <= "000000000000000000000000000000" ; 
Less <= '0';
cf <= cflag ;
FAa : FullAdder port map (data1(0),data2(0),'1' ,tempc(0) ,result(0) );
G0: for j in 1 to 30 generate
FA : FullAdder port map (data1(j),data2(j),tempc(j-1) ,tempc(j) ,result(j) );
end generate ;
FAb : FullAdder port map (data1(31),data2(31),tempc(30) ,cf ,result(31) );

  A1: OnerBitBR port map (data1(0), data2(0),result(31), Cin, aluop, res(0), c(0));
  G1: for i in 1 to 30 generate
         ALUs: OnerBitBR port map (
                 data1(i), data2(i), Less,c(i - 1), aluop, res(i), c(i));
  end generate;
  --zfalg  <= '0';
     A32: OnerBitBR port map (data1(31), data2(31),Less, c(30), aluop, res(31), cflag);
   
--  G2: for i in 0 to 31 generate
  --       zfalg <= zflag nor Result(i);
  --end generate;
zflag <=not ( res(0) or res (1) or res(2) or res(3) or res(4) or res(5) or res(6) or res(7) or res(8) or res(9) or res(10) or res(11) or res(12) or res(13) or res(14) or res(15) or res(16) or res(17) or res(18) or res(19)or res(20)or res(21)or res(22)or res(23)or res(24)or res(25)or res(26)or res(27)or res(28)or res(29)or res(30)or res(31) );
--zflag <=( Result(0) nor Result(1) nor Result(2) nor Result(3) nor Result(4) nor Result(5) nor Result(6) nor Result(7) nor Result(8) nor Result(9) 
--nor Result(10) nor Result(11) nor Result(12) nor Result(13) nor Result(14) nor Result(15) nor Result(16) nor Result(17) nor Result(18) nor Result(19)
--nor Result(20)nor Result(2)nor Result(i)nor Result(i)nor Result(i)nor Result(i)nor Result(i)nor Result(i)nor Result(i)nor Result(i)nor Result(i)
--nor Result(21)nor Result(22)nor Result(23)nor Result(24)nor Result(25)nor Result(26)nor Result(27)nor Result(29)nor Result(29)nor Result(30)
--nor Result(31) );
oflag <= c(30) xor cflag;
end Behavioral;

