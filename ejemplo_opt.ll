; ModuleID = 'ejemplo.ll'
source_filename = "prog_kids_module"

; Function Attrs: nofree norecurse noreturn nosync nounwind memory(none)
define void @main() local_unnamed_addr #0 {
entry:
  br label %while.cond

while.cond:                                       ; preds = %while.cond, %entry
  br label %while.cond
}

attributes #0 = { nofree norecurse noreturn nosync nounwind memory(none) }
