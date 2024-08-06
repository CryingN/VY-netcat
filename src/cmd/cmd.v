module cmd

pub struct CmdOption {
	pub:
	abbr		string
	full		string
	vari		string
	defa		string
	desc		string
}

// Assignment type option
pub fn options(args []string, long_option CmdOption) string {
        mut flags := ''
		flags = long_option.defa
        for i, v in args {
                if v in [long_option.abbr, long_option.full] {
                    if i + 1 < args.len && args[i + 1][0] != 45 {
                    	    flags = args[i + 1]		
                    }
                }
        }
        return flags
}

// Defined option
pub fn set_options(args []string, long_option CmdOption) bool {
	mut flags := false
	for v in args {
		if v in [long_option.abbr, long_option.full] {
			flags = true
		}
	}
	return flags
}





