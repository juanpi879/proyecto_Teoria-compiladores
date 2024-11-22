; ModuleID = 'prog_kids_module'
source_filename = "prog_kids_module"

@str = private constant [18 x i8] c"Fin del programa.\00"

define void @main() {
entry:
  br label %while.cond

while.cond:                                       ; preds = %while.body, %entry
  br i1 true, label %while.body, label %while.end

while.body:                                       ; preds = %while.cond
  br label %while.cond

while.end:                                        ; preds = %while.cond
  call void @printString(ptr @str)
  ret void
}

declare void @printString(ptr)
