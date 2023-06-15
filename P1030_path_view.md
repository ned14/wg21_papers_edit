# TODO for night of 15th June 2023

[x] Rename to render_null_terminated

[x] Rename to render_unterminated

[x] Remove render<enum>

[x] Remove all locale based overloads

[ ] Write normative wording for the render functions.

[X] Add clause explicitly tying lifetime of rendered_path to its backing data
and not tying lifetime to its parent path view.

[X] Rename named requirements to include 17

[x] Remove concepts using code

[X] ostream formatter is wrong?

[x] Spell out all the named requirements overloads, exclude byte overloads.

[X] Fix the render_zero_terminated free function

[X] Examine all filesystem::path implementations to produce tony table of whether format() is stored already.

[x] Include all of existing path during deltas

[x] Remove all black coloured notes

[x] Instead of implementation defined, do "see later normative wording"

[ ] "See later normative wording" needs to have a named section, and that named section ought to be
named in the "see later normative wording" comments.

[ ] Fork a standard library, ensure filesystem overload selection are unaffected by new overloads.

