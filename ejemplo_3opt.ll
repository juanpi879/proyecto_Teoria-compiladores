; ModuleID = 'ejemplo3.ll'
source_filename = "prog_kids_module"

@str.1 = private constant [6 x i8] c"Mayor\00"

define void @main() local_unnamed_addr {
entry:
  tail call void @printString(ptr nonnull @str.1)
  ret void
}

declare void @printString(ptr) local_unnamed_addr
