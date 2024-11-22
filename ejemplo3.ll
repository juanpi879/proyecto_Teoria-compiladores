; ModuleID = 'prog_kids_module'
source_filename = "prog_kids_module"

@str = private constant [9 x i8] c"No mayor\00"
@str.1 = private constant [6 x i8] c"Mayor\00"

define void @main() {
entry:
  br i1 false, label %then, label %else

then:                                             ; preds = %entry
  call void @printString(ptr @str)
  br label %endif

else:                                             ; preds = %entry
  call void @printString(ptr @str.1)
  br label %endif

endif:                                            ; preds = %else, %then
  ret void
}

declare void @printString(ptr)
