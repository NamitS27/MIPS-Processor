
 
 
 

 



window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /Program_Mem_Block_tb/status
      waveform add -signals /Program_Mem_Block_tb/Program_Mem_Block_synth_inst/bmg_port/CLKA
      waveform add -signals /Program_Mem_Block_tb/Program_Mem_Block_synth_inst/bmg_port/ADDRA
      waveform add -signals /Program_Mem_Block_tb/Program_Mem_Block_synth_inst/bmg_port/DOUTA
console submit -using simulator -wait no "run"
