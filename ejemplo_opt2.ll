; ModuleID = 'ejemplo2.ll'
source_filename = "prog_kids_module"

define void @main() local_unnamed_addr {
entry:
  tail call void @print(float 1.200000e+01)
  tail call void @print(float 6.000000e+00)
  tail call void @print(float 1.800000e+01)
  tail call void @print(float 5.000000e+00)
  tail call void @print(float 4.000000e+00)
  tail call void @print(float 8.000000e+00)
  ret void
}

declare void @print(float) local_unnamed_addr
