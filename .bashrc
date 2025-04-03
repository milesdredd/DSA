#

# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
PS1='[\u@\h \W]\$ '
export PATH=$HOME/cmus/bin:$PATH
export PATH="$HOME/.cargo/bin:$PATH"



#custom aliases
alias igpu="sudo intel_gpu_top"
alias r="source ~/.bashrc"
alias eww='~/git/eww/target/release/eww daemon &'
alias clock="rsclock -S -u -c"
alias conserv1="echo 1 | sudo tee /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode && hyprctl notify 5 2000 'rgb(0320fc)' 'fontsize:22 Conservation mode on'"
alias conserv0="echo 0 | sudo tee /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode && hyprctl notify 3 2000 'rgb(0320fc)' 'fontsize:22 Conservation mode off'"
alias loq="./loq.sh"
alias yt="ls /home/milesdredd/Videos/Youtube/"
alias hypr="kate .config/hypr/hyprland.conf"
# Function to open a file with vim and then display its contents
alias vimc='vimc'
vimc() {
  vim "$1" && cat "$1"
}

# To compile C language and run

alias go='compile_and_run_c_file'
compile_and_run_c_file() {
    gcc "$1" -o "${1%.*}" && "./${1%.*}"
}
compile_and_run_cpp_file() {
    start_time=$(date +%s%N)
    g++ "$1" -o "${1%.*}"
    if [ $? -eq 0 ]; then
        "./${1%.*}"
        exit_code=$?
        end_time=$(date +%s%N)
        execution_time=$((($end_time - $start_time)/1000000))
        echo "Process returned $exit_code (0x$(printf '%x' $exit_code)) execution time : ${execution_time} ms"
    else
        echo "Compilation failed."
    fi
}
alias cpp='clear && compile_and_run_cpp_file'


function yy() {
	local tmp="$(mktemp -t "yazi-cwd.XXXXXX")"
	yazi "$@" --cwd-file="$tmp"
	if cwd="$(cat -- "$tmp")" && [ -n "$cwd" ] && [ "$cwd" != "$PWD" ]; then
		cd -- "$cwd"
	fi
	rm -f -- "$tmp"
}

# bun
export BUN_INSTALL="$HOME/.bun"
export PATH=$BUN_INSTALL/bin:$PATH
export EDITOR=vim

export GEMINI_API_KEY="bcd839b6c203a2072609a812952ac3b556e93081"
