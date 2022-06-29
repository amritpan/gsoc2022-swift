//---Constraint solving at [/Users/amritpankaur/test.swift:53:1 - line:53:11]---
---Initial constraints for the given expression---
(binary_expr type='$T6' location=/Users/amritpankaur/test.swift:53:9 range=[/Users/amritpankaur/test.swift:53:1 - line:53:11]
  (overloaded_decl_ref_expr type='$T0' location=/Users/amritpankaur/test.swift:53:9 range=[/Users/amritpankaur/test.swift:53:9 - line:53:9] name=+ number_of_decls=34 function_ref=single)
  (argument_list implicit
    (argument
      (binary_expr type='$T4' location=/Users/amritpankaur/test.swift:53:3 range=[/Users/amritpankaur/test.swift:53:1 - line:53:5]
        (overloaded_decl_ref_expr type='$T1' location=/Users/amritpankaur/test.swift:53:3 range=[/Users/amritpankaur/test.swift:53:3 - line:53:3] name=+ number_of_decls=34 function_ref=single)
        (argument_list implicit
          (argument
            (integer_literal_expr type='$T2' location=/Users/amritpankaur/test.swift:53:1 range=[/Users/amritpankaur/test.swift:53:1 - line:53:1] value=1 builtin_initializer=**NULL** initializer=**NULL**))
          (argument
            (string_literal_expr type='$T3' location=/Users/amritpankaur/test.swift:53:5 range=[/Users/amritpankaur/test.swift:53:5 - line:53:5] encoding=utf8 value="a" builtin_initializer=**NULL** initializer=**NULL**)))))
    (argument
      (integer_literal_expr type='$T5' location=/Users/amritpankaur/test.swift:53:11 range=[/Users/amritpankaur/test.swift:53:11 - line:53:11] value=2 builtin_initializer=**NULL** initializer=**NULL**))))
Score: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Contextual Type: <null>
Type Variables:
  $T0 [allows: lvalue, noescape] [attributes: delayed]  [bindings: ] @ locator@0x13aaec800 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:9]
  $T1 [allows: lvalue, noescape] [attributes: delayed]  [bindings: ] @ locator@0x13aaed798 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:3]
  $T2 [allows: noescape] [attributes: delayed, [literal: atom]]  [bindings: ] @ locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]
  $T3 [allows: noescape] [attributes: delayed, [literal: atom]]  [bindings: ] @ locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]
  $T4 [allows: noescape] [attributes: delayed]  [bindings: ] @ locator@0x13aaf12d0 [Binary@/Users/amritpankaur/test.swift:53:3 -> function result]
  $T5 [allows: noescape] [attributes: delayed, [literal: atom]]  [bindings: ] @ locator@0x13aaf1438 [IntegerLiteral@/Users/amritpankaur/test.swift:53:11]
  $T6 [allows: noescape] [attributes: delayed]  [bindings: ] @ locator@0x13aaf1500 [Binary@/Users/amritpankaur/test.swift:53:9 -> function result]

Active Constraints:

Inactive Constraints:
  disjunction [[locator@0x13aaec800 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:9]]]:
>             $T0 bound to decl Swift.(file).String extension.+ : (String.Type) -> (String, String) -> String
>             $T0 bound to decl Swift.(file).Duration extension.+ : (Duration.Type) -> (Duration, Duration) -> Duration
>             $T0 bound to decl Swift.(file).Float16 extension.+ : (Float16.Type) -> (Float16, Float16) -> Float16
>             $T0 bound to decl Swift.(file).Float extension.+ : (Float.Type) -> (Float, Float) -> Float
>             $T0 bound to decl Swift.(file).Double extension.+ : (Double.Type) -> (Double, Double) -> Double
>             $T0 bound to decl Swift.(file).UInt8 extension.+ : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
>             $T0 bound to decl Swift.(file).Int8 extension.+ : (Int8.Type) -> (Int8, Int8) -> Int8
>             $T0 bound to decl Swift.(file).UInt16 extension.+ : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
>             $T0 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16
>             $T0 bound to decl Swift.(file).UInt32 extension.+ : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
>             $T0 bound to decl Swift.(file).Int32 extension.+ : (Int32.Type) -> (Int32, Int32) -> Int32
>             $T0 bound to decl Swift.(file).UInt64 extension.+ : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
>             $T0 bound to decl Swift.(file).Int64 extension.+ : (Int64.Type) -> (Int64, Int64) -> Int64
>             $T0 bound to decl Swift.(file).UInt extension.+ : (UInt.Type) -> (UInt, UInt) -> UInt
>  [favored]  $T0 bound to decl Swift.(file).Int extension.+ : (Int.Type) -> (Int, Int) -> Int
>             $T0 bound to decl _Concurrency.(file).Instant extension.+ : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
>             $T0 bound to decl _Concurrency.(file).Instant extension.+ : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
>             $T0 bound to decl Swift.(file).Array extension.+ : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
>             $T0 bound to decl Swift.(file).FloatingPoint.+ : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T0 bound to decl Swift.(file).AdditiveArithmetic.+ : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
>             $T0 bound to decl Swift.(file).BinaryInteger.+ : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
>             $T0 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
>             $T0 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
>             $T0 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
>             $T0 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
>             $T0 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T0 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
>             $T0 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T0 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T0 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T0 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T0 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
>             $T0 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
>             $T0 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
  disjunction [[locator@0x13aaed798 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:3]]]:
>  [favored]  $T1 bound to decl Swift.(file).String extension.+ : (String.Type) -> (String, String) -> String
>             $T1 bound to decl Swift.(file).Duration extension.+ : (Duration.Type) -> (Duration, Duration) -> Duration
>             $T1 bound to decl Swift.(file).Float16 extension.+ : (Float16.Type) -> (Float16, Float16) -> Float16
>             $T1 bound to decl Swift.(file).Float extension.+ : (Float.Type) -> (Float, Float) -> Float
>             $T1 bound to decl Swift.(file).Double extension.+ : (Double.Type) -> (Double, Double) -> Double
>             $T1 bound to decl Swift.(file).UInt8 extension.+ : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
>             $T1 bound to decl Swift.(file).Int8 extension.+ : (Int8.Type) -> (Int8, Int8) -> Int8
>             $T1 bound to decl Swift.(file).UInt16 extension.+ : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
>             $T1 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16
>             $T1 bound to decl Swift.(file).UInt32 extension.+ : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
>             $T1 bound to decl Swift.(file).Int32 extension.+ : (Int32.Type) -> (Int32, Int32) -> Int32
>             $T1 bound to decl Swift.(file).UInt64 extension.+ : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
>             $T1 bound to decl Swift.(file).Int64 extension.+ : (Int64.Type) -> (Int64, Int64) -> Int64
>             $T1 bound to decl Swift.(file).UInt extension.+ : (UInt.Type) -> (UInt, UInt) -> UInt
>  [favored]  $T1 bound to decl Swift.(file).Int extension.+ : (Int.Type) -> (Int, Int) -> Int
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
>             $T1 bound to decl Swift.(file).Array extension.+ : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
>             $T1 bound to decl Swift.(file).FloatingPoint.+ : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).AdditiveArithmetic.+ : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).BinaryInteger.+ : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
  $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]]];
  $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]]];
  (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];
  $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaf1438 [IntegerLiteral@/Users/amritpankaur/test.swift:53:11]]];
  
  ($T4, _const $T5) -> $T6 applicable fn $T0 [[locator@0x13aaf15c0 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply function]]];
  ($T2 [attributes: delayed, [literal: atom]]  [bindings: ])
  ($T3 [attributes: delayed, [literal: atom]]  [bindings: ])
  ($T5 [attributes: delayed, [literal: atom]]  [bindings: ])
  (attempting $T0 : (Int.Type) -> (Int, Int) -> Int
    (overload set choice binding $T0 := (Int, Int) -> Int)
    ---Constraint graph---
  $T0:

  $T1:
    Constraints:
      disjunction [[locator@0x13aaed798 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:3]]]:
>  [favored]  $T1 bound to decl Swift.(file).String extension.+ : (String.Type) -> (String, String) -> String
>             $T1 bound to decl Swift.(file).Duration extension.+ : (Duration.Type) -> (Duration, Duration) -> Duration
>             $T1 bound to decl Swift.(file).Float16 extension.+ : (Float16.Type) -> (Float16, Float16) -> Float16
>             $T1 bound to decl Swift.(file).Float extension.+ : (Float.Type) -> (Float, Float) -> Float
>             $T1 bound to decl Swift.(file).Double extension.+ : (Double.Type) -> (Double, Double) -> Double
>             $T1 bound to decl Swift.(file).UInt8 extension.+ : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
>             $T1 bound to decl Swift.(file).Int8 extension.+ : (Int8.Type) -> (Int8, Int8) -> Int8
>             $T1 bound to decl Swift.(file).UInt16 extension.+ : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
>             $T1 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16
>             $T1 bound to decl Swift.(file).UInt32 extension.+ : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
>             $T1 bound to decl Swift.(file).Int32 extension.+ : (Int32.Type) -> (Int32, Int32) -> Int32
>             $T1 bound to decl Swift.(file).UInt64 extension.+ : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
>             $T1 bound to decl Swift.(file).Int64 extension.+ : (Int64.Type) -> (Int64, Int64) -> Int64
>             $T1 bound to decl Swift.(file).UInt extension.+ : (UInt.Type) -> (UInt, UInt) -> UInt
>  [favored]  $T1 bound to decl Swift.(file).Int extension.+ : (Int.Type) -> (Int, Int) -> Int
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
>             $T1 bound to decl Swift.(file).Array extension.+ : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
>             $T1 bound to decl Swift.(file).FloatingPoint.+ : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).AdditiveArithmetic.+ : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).BinaryInteger.+ : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]]];
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]]];
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T4:
    Constraints:
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];
      $T4 operator arg conv Int [[locator@0x13aaf1690 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T5:
    Constraints:
      $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaf1438 [IntegerLiteral@/Users/amritpankaur/test.swift:53:11]]];
      $T5 operator arg conv Int [[locator@0x13aaf1730 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T6:

---Connected components---
  0: $T1 $T2 $T3 $T4
  1: $T5
    (solving component #1
      (type variables in scope = [$T5])
      (intial state:
        ($T5 with possible [bindings: (subtypes of) Int])
        )
      (attempting $T5 := Int
        (found solution 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0)
      )
    finished component #1)
    (solving component #0
      (type variables in scope = [$T1, $T2, $T3, $T4])
      (intial state:
        ($T2 with possible [attributes: delayed, [literal: atom]]  [bindings: ])
        ($T3 with possible [attributes: delayed, [literal: atom]]  [bindings: ])
        ($T4 with possible [attributes: delayed]  [bindings: (subtypes of) Int])
        (disjunctions = [])
  )
      (selecting next type variable to attempt from [$T1, $T2, $T3, $T4]
      (selected $T_ due to ___reason___)
      (attempting $T4 := Int
        ($T2 [attributes: delayed, [literal: atom]]  [bindings: ])
        ($T3 [attributes: delayed, [literal: atom]]  [bindings: ])
        (attempting $T1 : (String.Type) -> (String, String) -> String
          (overload set choice binding $T1 := (String, String) -> String)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int.Type) -> (Int, Int) -> Int
          (overload set choice binding $T1 := (Int, Int) -> Int)
          ---Constraint graph---
  $T1:

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]]];
      $T2 operator arg conv Int [[locator@0x13aaf1880 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]]];
      $T3 operator arg conv Int [[locator@0x13aaf1920 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T4:

---Connected components---
  0: $T2
  1: $T3
          (solving component #1
            (type variables in scope = [$T3])
            (intial state:
              ($T3 with possible [attributes: [literal: atom]]  [bindings: (subtypes of) Int])
              )
            (attempting $T3 := Int
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral)
            )
            (attempting $T3 := String
              (failed constraint $T3 operator arg conv Int)
            )
          failed component #1)
        )
        (attempting $T1 : (Float16.Type) -> (Float16, Float16) -> Float16
          (overload set choice binding $T1 := (Float16, Float16) -> Float16)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Float.Type) -> (Float, Float) -> Float
          (overload set choice binding $T1 := (Float, Float) -> Float)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Double.Type) -> (Double, Double) -> Double
          (overload set choice binding $T1 := (Double, Double) -> Double)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
          (overload set choice binding $T1 := (UInt8, UInt8) -> UInt8)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int8.Type) -> (Int8, Int8) -> Int8
          (overload set choice binding $T1 := (Int8, Int8) -> Int8)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
          (overload set choice binding $T1 := (UInt16, UInt16) -> UInt16)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int16.Type) -> (Int16, Int16) -> Int16
          (overload set choice binding $T1 := (Int16, Int16) -> Int16)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
          (overload set choice binding $T1 := (UInt32, UInt32) -> UInt32)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int32.Type) -> (Int32, Int32) -> Int32
          (overload set choice binding $T1 := (Int32, Int32) -> Int32)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
          (overload set choice binding $T1 := (UInt64, UInt64) -> UInt64)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int64.Type) -> (Int64, Int64) -> Int64
          (overload set choice binding $T1 := (Int64, Int64) -> Int64)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt.Type) -> (UInt, UInt) -> UInt
          (overload set choice binding $T1 := (UInt, UInt) -> UInt)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T7, $T7) -> $T7)
          ($T2 [bindings: (subtypes of) Int])
          ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Int])
          (attempting $T2 := Int
            ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Int])
            (attempting $T3 := Int
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral)
            )
            (attempting $T3 := String
              (failed constraint $T3 transitive conformance to AdditiveArithmetic)
            )
          )
        )
        (attempting $T1 : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
          (overload set choice binding $T1 := ($T8, $T8.Stride) -> $T8)
          (failed constraint $T8 conforms to _Pointer)
        )
        (attempting $T1 : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
          (overload set choice binding $T1 := ($T9.Stride, $T9) -> $T9)
          (failed constraint $T9 conforms to _Pointer)
        )
        (attempting $T1 : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T10, $T10) -> $T10)
          (failed constraint $T10 conforms to FloatingPoint)
        )
        (attempting $T1 : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T11, $T11) -> $T11)
          ($T2 [bindings: (subtypes of) Int])
          ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Int])
          (attempting $T2 := Int
            ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Int])
            (attempting $T3 := Int
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral)
            )
            (attempting $T3 := String
              (failed constraint $T3 transitive conformance to BinaryInteger)
            )
          )
        )
        (attempting $T1 : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
          (overload set choice binding $T1 := (Array<$T12>, Array<$T12>) -> Array<$T12>)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
          (overload set choice binding $T1 := ($T13, $T14) -> $T13)
          (failed constraint $T13 conforms to RangeReplaceableCollection)
        )
        (attempting $T1 : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
          (overload set choice binding $T1 := ($T16, $T15) -> $T15)
          (failed constraint $T15 conforms to RangeReplaceableCollection)
        )
        (attempting $T1 : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
          (overload set choice binding $T1 := ($T17, $T18) -> $T17)
          (failed constraint $T17 conforms to RangeReplaceableCollection)
        )
        (attempting $T1 : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T19, $T19) -> $T19)
          (failed constraint $T19 conforms to SIMD)
        )
        (attempting $T1 : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
          (overload set choice binding $T1 := ($T20.Scalar, $T20) -> $T20)
          (failed constraint $T20 conforms to SIMD)
        )
        (attempting $T1 : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
          (overload set choice binding $T1 := ($T21, $T21.Scalar) -> $T21)
          (failed constraint $T21 conforms to SIMD)
        )
        (skipping unavailable $T1 : (Duration.Type) -> (Duration, Duration) -> Duration
        (skipping unavailable $T1 : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
        (skipping unavailable $T1 : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
        (skipping unavailable $T1 : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
        (skipping unavailable $T1 : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
        (skipping unavailable $T1 : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
        (skipping unavailable $T1 : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
        (skipping unavailable $T1 : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
      )
    failed component #0)
  )
  (attempting $T0 : (String.Type) -> (String, String) -> String
    (overload set choice binding $T0 := (String, String) -> String)
    ---Constraint graph---
  $T0:

  $T1:
    Constraints:
      disjunction [[locator@0x13aaed798 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:3]]]:
>  [favored]  $T1 bound to decl Swift.(file).String extension.+ : (String.Type) -> (String, String) -> String
>             $T1 bound to decl Swift.(file).Duration extension.+ : (Duration.Type) -> (Duration, Duration) -> Duration
>             $T1 bound to decl Swift.(file).Float16 extension.+ : (Float16.Type) -> (Float16, Float16) -> Float16
>             $T1 bound to decl Swift.(file).Float extension.+ : (Float.Type) -> (Float, Float) -> Float
>             $T1 bound to decl Swift.(file).Double extension.+ : (Double.Type) -> (Double, Double) -> Double
>             $T1 bound to decl Swift.(file).UInt8 extension.+ : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
>             $T1 bound to decl Swift.(file).Int8 extension.+ : (Int8.Type) -> (Int8, Int8) -> Int8
>             $T1 bound to decl Swift.(file).UInt16 extension.+ : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
>             $T1 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16
>             $T1 bound to decl Swift.(file).UInt32 extension.+ : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
>             $T1 bound to decl Swift.(file).Int32 extension.+ : (Int32.Type) -> (Int32, Int32) -> Int32
>             $T1 bound to decl Swift.(file).UInt64 extension.+ : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
>             $T1 bound to decl Swift.(file).Int64 extension.+ : (Int64.Type) -> (Int64, Int64) -> Int64
>             $T1 bound to decl Swift.(file).UInt extension.+ : (UInt.Type) -> (UInt, UInt) -> UInt
>  [favored]  $T1 bound to decl Swift.(file).Int extension.+ : (Int.Type) -> (Int, Int) -> Int
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
>             $T1 bound to decl Swift.(file).Array extension.+ : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
>             $T1 bound to decl Swift.(file).FloatingPoint.+ : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).AdditiveArithmetic.+ : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).BinaryInteger.+ : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]]];
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]]];
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T4:
    Constraints:
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];
      $T4 operator arg conv String [[locator@0x13aaf1690 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T5:
    Constraints:
      $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaf1438 [IntegerLiteral@/Users/amritpankaur/test.swift:53:11]]];
      $T5 operator arg conv String [[locator@0x13aaf1730 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T6:

---Connected components---
  0: $T1 $T2 $T3 $T4
  1: $T5
    (solving component #1
      (type variables in scope = [$T5])
      (intial state:
        ($T5 with possible [attributes: [literal: atom]]  [bindings: (subtypes of) String])
        )
      (attempting $T5 := String
        (increasing score due to non-default literal)
        (failed constraint $T5 literal conforms to ExpressibleByIntegerLiteral)
      )
      (attempting $T5 := Int
        (failed constraint $T5 operator arg conv String)
      )
      (attempting $T5 := Double
        (increasing score due to non-default literal)
        (failed constraint $T5 operator arg conv String)
      )
    failed component #1)
  )
  (attempting $T0 : (Float16.Type) -> (Float16, Float16) -> Float16
    (overload set choice binding $T0 := (Float16, Float16) -> Float16)
    ---Constraint graph---
  $T0:

  $T1:
    Constraints:
      disjunction [[locator@0x13aaed798 [OverloadedDeclRef@/Users/amritpankaur/test.swift:53:3]]]:
>  [favored]  $T1 bound to decl Swift.(file).String extension.+ : (String.Type) -> (String, String) -> String
>             $T1 bound to decl Swift.(file).Duration extension.+ : (Duration.Type) -> (Duration, Duration) -> Duration
>             $T1 bound to decl Swift.(file).Float16 extension.+ : (Float16.Type) -> (Float16, Float16) -> Float16
>             $T1 bound to decl Swift.(file).Float extension.+ : (Float.Type) -> (Float, Float) -> Float
>             $T1 bound to decl Swift.(file).Double extension.+ : (Double.Type) -> (Double, Double) -> Double
>             $T1 bound to decl Swift.(file).UInt8 extension.+ : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
>             $T1 bound to decl Swift.(file).Int8 extension.+ : (Int8.Type) -> (Int8, Int8) -> Int8
>             $T1 bound to decl Swift.(file).UInt16 extension.+ : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
>             $T1 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16
>             $T1 bound to decl Swift.(file).UInt32 extension.+ : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
>             $T1 bound to decl Swift.(file).Int32 extension.+ : (Int32.Type) -> (Int32, Int32) -> Int32
>             $T1 bound to decl Swift.(file).UInt64 extension.+ : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
>             $T1 bound to decl Swift.(file).Int64 extension.+ : (Int64.Type) -> (Int64, Int64) -> Int64
>             $T1 bound to decl Swift.(file).UInt extension.+ : (UInt.Type) -> (UInt, UInt) -> UInt
>  [favored]  $T1 bound to decl Swift.(file).Int extension.+ : (Int.Type) -> (Int, Int) -> Int
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
>             $T1 bound to decl _Concurrency.(file).Instant extension.+ : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
>             $T1 bound to decl Swift.(file).Array extension.+ : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
>             $T1 bound to decl Swift.(file).FloatingPoint.+ : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).AdditiveArithmetic.+ : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).BinaryInteger.+ : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
>             $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
>             $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
>             $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
>             $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]]];
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]]];
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];

  $T4:
    Constraints:
      (_const $T2, _const $T3) -> $T4 applicable fn $T1 [[locator@0x13aaf1390 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply function]]];
      $T4 operator arg conv Float16 [[locator@0x13aaf1690 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T5:
    Constraints:
      $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaf1438 [IntegerLiteral@/Users/amritpankaur/test.swift:53:11]]];
      $T5 operator arg conv Float16 [[locator@0x13aaf1730 [Binary@/Users/amritpankaur/test.swift:53:9 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T6:

---Connected components---
  0: $T1 $T2 $T3 $T4
  1: $T5
    (solving component #1
      (type variables in scope = [$T5])
      (intial state:
        ($T5 with possible [bindings: (subtypes of) Float16])
        )
      (attempting $T5 := Float16
        (increasing score due to non-default literal)
        (found solution 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0)
      )
    finished component #1)
    (solving component #0
      (type variables in scope = [$T1, $T2, $T3, $T4])
      (intial state:
        ($T2 with possible [attributes: delayed, [literal: atom]]  [bindings: ])
        ($T3 with possible [attributes: delayed, [literal: atom]]  [bindings: ])
        ($T4 with possible [attributes: delayed]  [bindings: (subtypes of) Float16])
        (disjunctions = [])
  )
      (selecting next type variable to attempt from [$T1, $T2, $T3, $T4]
      (selected $T_ due to ___reason___)
      (attempting $T4 := Float16
        ($T2 [attributes: delayed, [literal: atom]]  [bindings: ])
        ($T3 [attributes: delayed, [literal: atom]]  [bindings: ])
        (attempting $T1 : (String.Type) -> (String, String) -> String
          (overload set choice binding $T1 := (String, String) -> String)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int.Type) -> (Int, Int) -> Int
          (overload set choice binding $T1 := (Int, Int) -> Int)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Float16.Type) -> (Float16, Float16) -> Float16
          (overload set choice binding $T1 := (Float16, Float16) -> Float16)
          ---Constraint graph---
  $T1:

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13aaeed48 [IntegerLiteral@/Users/amritpankaur/test.swift:53:1]]];
      $T2 operator arg conv Float16 [[locator@0x13aaf1880 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x13aaf1200 [StringLiteral@/Users/amritpankaur/test.swift:53:5]]];
      $T3 operator arg conv Float16 [[locator@0x13aaf1920 [Binary@/Users/amritpankaur/test.swift:53:3 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T4:

---Connected components---
  0: $T2
  1: $T3
          (solving component #1
            (type variables in scope = [$T3])
            (intial state:
              ($T3 with possible [attributes: [literal: atom]]  [bindings: (subtypes of) Float16])
              )
            (attempting $T3 := Float16
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral)
            )
            (attempting $T3 := String
              (failed constraint $T3 operator arg conv Float16)
            )
          failed component #1)
        )
        (attempting $T1 : (Float.Type) -> (Float, Float) -> Float
          (overload set choice binding $T1 := (Float, Float) -> Float)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Double.Type) -> (Double, Double) -> Double
          (overload set choice binding $T1 := (Double, Double) -> Double)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt8.Type) -> (UInt8, UInt8) -> UInt8
          (overload set choice binding $T1 := (UInt8, UInt8) -> UInt8)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int8.Type) -> (Int8, Int8) -> Int8
          (overload set choice binding $T1 := (Int8, Int8) -> Int8)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt16.Type) -> (UInt16, UInt16) -> UInt16
          (overload set choice binding $T1 := (UInt16, UInt16) -> UInt16)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int16.Type) -> (Int16, Int16) -> Int16
          (overload set choice binding $T1 := (Int16, Int16) -> Int16)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt32.Type) -> (UInt32, UInt32) -> UInt32
          (overload set choice binding $T1 := (UInt32, UInt32) -> UInt32)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int32.Type) -> (Int32, Int32) -> Int32
          (overload set choice binding $T1 := (Int32, Int32) -> Int32)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt64.Type) -> (UInt64, UInt64) -> UInt64
          (overload set choice binding $T1 := (UInt64, UInt64) -> UInt64)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (Int64.Type) -> (Int64, Int64) -> Int64
          (overload set choice binding $T1 := (Int64, Int64) -> Int64)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : (UInt.Type) -> (UInt, UInt) -> UInt
          (overload set choice binding $T1 := (UInt, UInt) -> UInt)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T22, $T22) -> $T22)
          ($T2 [bindings: (subtypes of) Float16])
          ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Float16])
          (attempting $T2 := Float16
            (increasing score due to non-default literal)
            ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Float16])
            (attempting $T3 := Float16
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral)
            )
            (attempting $T3 := String
              (failed constraint $T3 transitive conformance to AdditiveArithmetic)
            )
          )
        )
        (attempting $T1 : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self
          (overload set choice binding $T1 := ($T23, $T23.Stride) -> $T23)
          (failed constraint $T23 conforms to _Pointer)
        )
        (attempting $T1 : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self
          (overload set choice binding $T1 := ($T24.Stride, $T24) -> $T24)
          (failed constraint $T24 conforms to _Pointer)
        )
        (attempting $T1 : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T25, $T25) -> $T25)
          ($T2 [bindings: (subtypes of) Float16])
          ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Float16])
          (attempting $T2 := Float16
            (increasing score due to non-default literal)
            ($T3 [attributes: [literal: atom]]  [bindings: (subtypes of) Float16])
            (attempting $T3 := Float16
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral)
            )
            (attempting $T3 := String
              (failed constraint $T3 transitive conformance to FloatingPoint)
            )
          )
        )
        (attempting $T1 : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T26, $T26) -> $T26)
          (failed constraint $T26 conforms to BinaryInteger)
        )
        (attempting $T1 : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>
          (overload set choice binding $T1 := (Array<$T27>, Array<$T27>) -> Array<$T27>)
          (failed constraint (_const $T2, _const $T3) -> $T4 applicable fn $T1)
        )
        (attempting $T1 : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
          (overload set choice binding $T1 := ($T28, $T29) -> $T28)
          (failed constraint $T28 conforms to RangeReplaceableCollection)
        )
        (attempting $T1 : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self
          (overload set choice binding $T1 := ($T31, $T30) -> $T30)
          (failed constraint $T30 conforms to RangeReplaceableCollection)
        )
        (attempting $T1 : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self
          (overload set choice binding $T1 := ($T32, $T33) -> $T32)
          (failed constraint $T32 conforms to RangeReplaceableCollection)
        )
        (attempting $T1 : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self
          (overload set choice binding $T1 := ($T34, $T34) -> $T34)
          (failed constraint $T34 conforms to SIMD)
        )
        (attempting $T1 : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self
          (overload set choice binding $T1 := ($T35.Scalar, $T35) -> $T35)
          (failed constraint $T35 conforms to SIMD)
        )
        (attempting $T1 : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self
          (overload set choice binding $T1 := ($T36, $T36.Scalar) -> $T36)
          (failed constraint $T36 conforms to SIMD)
        )
        (skipping unavailable $T1 : (Duration.Type) -> (Duration, Duration) -> Duration
        (skipping unavailable $T1 : (ContinuousClock.Instant.Type) -> (ContinuousClock.Instant, Duration) -> ContinuousClock.Instant
        (skipping unavailable $T1 : (SuspendingClock.Instant.Type) -> (SuspendingClock.Instant, Duration) -> SuspendingClock.Instant
        (skipping unavailable $T1 : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never
        (skipping unavailable $T1 : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never
        (skipping unavailable $T1 : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self
        (skipping unavailable $T1 : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self
        (skipping unavailable $T1 : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self
      )
    failed component #0)
  )
