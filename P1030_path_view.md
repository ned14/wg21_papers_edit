# TODO for night of 15th June 2023

Rename to render_null_terminated

Rename to render_unterminated

Remove render<enum>

Remove all locale based overloads

Add clause explicitly tying lifetime of rendered_path to its backing data
and not tying lifetime to its parent path view.

Rename named requirements to include 17

Remove concepts using code

ostream formatter is wrong?

Spell out all the named requirements overloads, exclude byte overloads.

Fix the render_zero_terminated free function

Fork a standard library, ensure filesystem overload selection are unaffected by new overloads.

Examine all filesystem::path implementations to produce tony table of whether format() is stored already.

Include all of existing path during deltas

Remove all black coloured notes

Instead of implementation defined, do "see later normative wording"
