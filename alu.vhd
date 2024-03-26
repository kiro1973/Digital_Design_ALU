

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

ENTITY alu IS
END alu;
 
ARCHITECTURE behavior OF alu IS 
 
  
 
    COMPONENT ALU32
    PORT(
         data1 : IN  std_logic_vector(31 downto 0);
         data2 : IN  std_logic_vector(31 downto 0);
         aluop : IN  std_logic_vector(3 downto 0);
         Cin : IN  std_logic;
         res : INOUT  std_logic_vector(31 downto 0);
         cflag : INOUT  std_logic;
         oflag : OUT  std_logic;
         zflag : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data1 : std_logic_vector(31 downto 0) := (others => '0');
   signal data2 : std_logic_vector(31 downto 0) := (others => '0');
   signal aluop : std_logic_vector(3 downto 0) := (others => '0');
   signal Cin : std_logic := '0';

	--BiDirs
   signal res : std_logic_vector(31 downto 0);
   signal cflag : std_logic;

 	--Outputs
   signal oflag : std_logic;
   signal zflag : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU32 PORT MAP (
          data1 => data1,
          data2 => data2,
          aluop => aluop,
          Cin => Cin,
          res => res,
          cflag => cflag,
          oflag => oflag,
          zflag => zflag
        );

   -- Clock process definitions
  

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	


      -- insert stimulus here 

      wait;
   end process;

END;
