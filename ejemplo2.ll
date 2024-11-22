; ModuleID = 'prog_kids_module'
source_filename = "prog_kids_module"

define void @main() {
entry:
  call void @print(float 1.200000e+01)
  call void @print(float 6.000000e+00)
  call void @print(float 1.800000e+01)
  call void @print(float 5.000000e+00)
  call void @print(float 4.000000e+00)
  %elevartmp = call float @llvm.pow.f32(float 2.000000e+00, float 3.000000e+00)
  call void @print(float %elevartmp)
  ret void
}

declare void @print(float)

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare float @llvm.pow.f32(float, float) #0

attributes #0 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
