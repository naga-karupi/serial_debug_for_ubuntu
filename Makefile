GP_DIR   = graph_plot
SC_DIR   = serial_communication
SG_DIR   = serial_graph
GP_b_DIR = graph_plot/build/
SC_b_DIR = serial_communication/build/
SG_b_DIR = serial_graph/build/

all: 
	echo "select project"

.PHONY: GP
GP: 
	cmake -S $(GP_DIR) -B $(GP_b_DIR)
	make -C $(GP_b_DIR) --no-print-directory

.PHONY: SC
SC:
	cmake -S $(SC_DIR) -B $(SC_b_DIR)
	make -C $(SC_b_DIR) --no-print-directory

.PHONY: SG
SG:
	cmake -S $(SG_DIR) -B $(SG_b_DIR)
	make -C $(SG_DIR) --no-print-directory

.PHONY: GP_exe
GP_exe:
	make clean
	cmake -S . -B build -DGP=true
	make -C build --no-print-directory

.PHONY: SC_exe
SC_exe:
	make clean
	cmake -S . -B build -DSC=true
	make -C build --no-print-directory

.PHONY:SG_exe
SG_exe:
	make clean
	cmake -S . -B build -DSG=true
	make -C build --no-print-directory


.PHONY: clean
clean:
	rm -rf $(GP_b_DIR) $(SC_b_DIR) $(SG_b_DIR) build
