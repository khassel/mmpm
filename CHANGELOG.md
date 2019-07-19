# Version 0.1

- Initial creation of MMPM package manager

# Version 0.2

- Some code cleanup

- renamed some function calls to be more idiomatic

- Added doc-strings to functions

- Added new method `check_for_mmpm_enhancements` to check for updates to MMPM, which will run
  intermittently, and prompt the user when one is found

- The user may also run `check_for_mmpm_enhancements` by specifying the `-e` flag

- Removed onus of installing required Python modules on user during `make install` process by
  including `try` and `except` blocks in `mmpm.py`. Primary reason for this was based on odd
  segmentation faults when attempting to handle original `make install` from within
  `check_for_mmpm_enhancements`. This will be cleaned up later on, but since it seems to work, no
  reason to go overboard just yet.

- Still a lot more code cleanup can be done...like A LOT more.

- Planning to break up MMPM into a module, and add functionality which will include scraping of the
  module pages to find any configs that can be placed into the main config, `config.js`
  automatically for the user. This should be pretty doable considering it's just a JSON file, and it
  call be indexed into

- Next version will focus on more code cleanup, and presentation of module names. Rather than
  displaying everything in a large list, they will be shown in a table, that is more compact and
  readable.

# Version 0.25

- Updated `display_modules` to display the output as a formatted table

- Version 0.3 will focus on performance improvements, and code cleanup

# Version 0.26

- Removed `pygit2` from dependencies, and replaced with `os.system` call

# Version 0.261

- Minor change in font color when installing packages

# Version 0.265

- Fixed small bug where checking for updates could happen twice if the snapshot file needed to be
  updated. The enhancement command now will only run once at most in either case.

# Version 0.266

- Accidentally created issue with `npm install` by placing text color in front of `os.system`
  command

- Also, removed unused variables

# Version 0.267

- Tidying up some output messages, nothing important

# Version 0.268

- I'm done tidying up today

# Version 0.269

- forgot to remove debug statement

# Version 0.270

- cleanup
