

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package ALUCOMP is

COMPONENT OnerBitBR is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           Cin : in  STD_LOGIC;
           OPER : in  STD_LOGIC_VECTOR (3 downto 0);
           RES : out  STD_LOGIC;
           Cout : out  STD_LOGIC);
end COMPONENT ;

COMPONENT Mux2 is
    Port ( IN0 : in  STD_LOGIC;
           IN1 : in  STD_LOGIC;
           Sel : in  STD_LOGIC;
           O : out  STD_LOGIC);
end COMPONENT;

COMPONENT FullAdder is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           Cin : in  STD_LOGIC;
           Cout : out  STD_LOGIC;
           O : out  STD_LOGIC);
end COMPONENT;


COMPONENT MUX4 is
    Port ( in1 : in  STD_LOGIC;
           in2 : in  STD_LOGIC;
           in3 : in  STD_LOGIC;
           in4 : in  STD_LOGIC;
           Sel : in  STD_LOGIC_VECTOR (1 downto 0);
           O : out  STD_LOGIC);
end COMPONENT;



end ALUCOMP ; 