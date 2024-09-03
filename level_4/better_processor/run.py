import os
import subprocess

def run_verilator(verilog_files, testbench_file, top_module, output_dir="build"):
    # Create the output directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)

    # Corrected Verilator command setup
    verilator_command = [
        "verilator",
        "--cc",                          # Compile the Verilog files to C++
        "--exe",                         # Create an executable with the testbench
        f"{testbench_file}",             # The testbench file to use
        *verilog_files,                  # The Verilog files
        "--top-module", top_module,      # Specify the top module
        "--build",                       # Build the C++ simulation model
        "-j", "4",                       # Use parallel jobs for faster compilation
        "-Wall",                         # Enable all warnings
        "--trace",                       # Enable waveform tracing
        "-CFLAGS",                       # Pass additional CFLAGS
        "-Ibuild"                        # Include directory, correctly passed
    ]

    print(f"Running Verilator with command: {' '.join(verilator_command)}")

    try:
        # Execute the Verilator command
        result = subprocess.run(
            verilator_command,
            check=True,
            capture_output=True,
            text=True
        )

        # Output the result
        print("Verilator Output:\n", result.stdout)

    except subprocess.CalledProcessError as e:
        # Print any errors encountered during execution
        print("Error running Verilator command.")
        print("Error Output:\n", e.stderr)


def run_simulation(executable_path):
    try:
        print(f"Running simulation executable: {executable_path}")
        # Run the compiled simulation executable
        result = subprocess.run(
            [executable_path],
            check=True,
            capture_output=True,
            text=True
        )

        # Output the simulation result
        print("Simulation Output:\n", result.stdout)

    except subprocess.CalledProcessError as e:
        # Print any errors encountered during execution
        print("Error running simulation executable.")
        print("Error Output:\n", e.stderr)


# Usage example
verilog_files = ["rtl/ALU.sv", "rtl/Core.sv", "rtl/ControlUnit.sv"]
testbench_file = "tests/tb_main.cpp"
top_module = "Core"  # Ensure this is the correct name of your top module
output_executable = "./obj_dir/VCore"  # Update with the expected path to the compiled simulation executable

# Run Verilator command
run_verilator(verilog_files, testbench_file, top_module)

# Run the compiled simulation
run_simulation(output_executable)
