---Constraint solving at [/Users/amritpankaur/test.swift:55:1 - line:55:11]---
---Initial constraints for the given expression---
(binary_expr type='$T6' location=/Users/amritpankaur/test.swift:55:9 range=[/Users/amritpankaur/test.swift:55:1 - line:55:11]
  (overloaded_decl_ref_expr type='$T0' location=/Users/amritpankaur/test.swift:55:9 range=[/Users/amritpankaur/test.swift:55:9 - line:55:9] name=+ number_of_decls=31)
  (argument_list implicit
    (argument
      (binary_expr type='$T4' location=/Users/amritpankaur/test.swift:55:3 range=[/Users/amritpankaur/test.swift:55:1 - line:55:5]
        (overloaded_decl_ref_expr type='$T1' location=/Users/amritpankaur/test.swift:55:3 range=[/Users/amritpankaur/test.swift:55:3 - line:55:3] name=+ number_of_decls=31 function_ref=single decls=[)
        (argument_list implicit
          (argument
            (integer_literal_expr type='$T2' location=/Users/amritpankaur/test.swift:55:1 range=[/Users/amritpankaur/test.swift:55:1 - line:55:1] value=1 builtin_initializer=**NULL** initializer=**NULL**))
          (argument
            (string_literal_expr type='$T3' location=/Users/amritpankaur/test.swift:55:5 range=[/Users/amritpankaur/test.swift:55:5 - line:55:5] encoding=utf8 value="a" builtin_initializer=**NULL** initializer=**NULL**))
        )))
    (argument
      (integer_literal_expr type='$T5' location=/Users/amritpankaur/test.swift:55:11 range=[/Users/amritpankaur/test.swift:55:11 - line:55:11] value=2 builtin_initializer=**NULL** initializer=**NULL**))
  ))
Score: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Contextual Type: <null>
Type Variables:
  $T0 [lvalue allowed] [noescape allowed] delayed bindings={} @ locator@0x1258ee200 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:9]
  $T1 [lvalue allowed] [noescape allowed] delayed bindings={} @ locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]
  $T2 [noescape allowed] delayed literal=3 bindings={} @ locator@0x1258f0ac0 [IntegerLiteral@/Users/amritpankaur/test.swift:55:1]
  $T3 [noescape allowed] delayed literal=3 bindings={} @ locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]
  $T4 [noescape allowed] delayed bindings={} @ locator@0x1258f0c40 [Binary@/Users/amritpankaur/test.swift:55:3 -> function result]
  $T5 [noescape allowed] delayed literal=3 bindings={} @ locator@0x1258f0da8 [IntegerLiteral@/Users/amritpankaur/test.swift:55:11]
  $T6 [noescape allowed] delayed bindings={} @ locator@0x1258f2c80 [Binary@/Users/amritpankaur/test.swift:55:9 -> function result]

Active Constraints:

Inactive Constraints:
  disjunction [[locator@0x1258ee200 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:9]]]:
>  [favored]  $T0 : [(((Int.Type) -> (Int, Int) -> Int)] [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
>             $T0 : [(String.Type) -> (String, String) -> String), ((Float16.Type) -> (Float16, Float16) -> Float16), ((Float.Type) -> (Float, Float) -> Float), ((Double.Type) -> (Double, Double) -> Double), ((UInt8.Type) -> (UInt8, UInt8) -> UInt8), ((Int8.Type) -> (Int8, Int8) -> Int8), ((UInt16.Type) -> (UInt16, UInt16) -> UInt16), ((Int16.Type) -> (Int16, Int16) -> Int16), ((UInt32.Type) -> (UInt32, UInt32) -> UInt32), ((Int32.Type) -> (Int32, Int32) -> Int32), ((UInt64.Type) -> (UInt64, UInt64) -> UInt64), ((Int64.Type) -> (Int64, Int64) -> Int64), ((UInt.Type) -> (UInt, UInt) -> UInt), ((Int.Type) -> (Int, Int) -> Int), (<Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>), (<Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self), (<Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never), (<Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self), (<Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self)[[locator@0x1258ee200 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:9]]];
  disjunction [[locator@0x1258ee200 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:9]]]:
>  [favored]  $T1 : [((String.Type) -> (String, String) -> String), ((Int.Type) -> (Int, Int) -> Int)] [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
>             $T1 : [((Float16.Type) -> (Float16, Float16) -> Float16), ((Float.Type) -> (Float, Float) -> Float), ((Double.Type) -> (Double, Double) -> Double), ((UInt8.Type) -> (UInt8, UInt8) -> UInt8), ((Int8.Type) -> (Int8, Int8) -> Int8), ((UInt16.Type) -> (UInt16, UInt16) -> UInt16), ((Int16.Type) -> (Int16, Int16) -> Int16), ((UInt32.Type) -> (UInt32, UInt32) -> UInt32), ((Int32.Type) -> (Int32, Int32) -> Int32), ((UInt64.Type) -> (UInt64, UInt64) -> UInt64), ((Int64.Type) -> (Int64, Int64) -> Int64), ((UInt.Type) -> (UInt, UInt) -> UInt), ((Int.Type) -> (Int, Int) -> Int), (<Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>), (<Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self), (<Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never), (<Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self), (<Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self)[[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
  $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0ac0 [IntegerLiteral@/Users/amritpankaur/test.swift:55:1]]];
  $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];
  ($T2, $T3) -> $T4 applicable fn $T1 [[locator@0x1258f0d00 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply function]]];
  $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0da8 [IntegerLiteral@/Users/amritpankaur/test.swift:55:11]]];
  ($T4, $T5) -> $T6 applicable fn $T0 [[locator@0x1258f2d40 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply function]]];
  ($T2 delayed literal=3 bindings={})
  ($T3 delayed literal=3 bindings={})
  ($T5 delayed literal=3 bindings={})
  (attempting $T0 : (Int.Type) -> (Int, Int) -> Int ;
    (overload set choice binding $T0 := (Int, Int) -> Int)
    ---Constraint graph---
  $T0:

   $T1:
     Constraints:
    disjunction [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]]:
 >  [favored]  $T1 : [((String.Type) -> (String, String) -> String), ((Int.Type) -> (Int, Int) -> Int)] [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
 >             $T1 : [((Float16.Type) -> (Float16, Float16) -> Float16), ((Float.Type) -> (Float, Float) -> Float), ((Double.Type) -> (Double, Double) -> Double), ((UInt8.Type) -> (UInt8, UInt8) -> UInt8), ((Int8.Type) -> (Int8, Int8) -> Int8), ((UInt16.Type) -> (UInt16, UInt16) -> UInt16), ((Int16.Type) -> (Int16, Int16) -> Int16), ((UInt32.Type) -> (UInt32, UInt32) -> UInt32), ((Int32.Type) -> (Int32, Int32) -> Int32), ((UInt64.Type) -> (UInt64, UInt64) -> UInt64), ((Int64.Type) -> (Int64, Int64) -> Int64), ((UInt.Type) -> (UInt, UInt) -> UInt), ((Int.Type) -> (Int, Int) -> Int), (<Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element>), (<Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self), (<Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never), (<Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self), (<Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self), (<Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self)[[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
      ($T2, $T3) -> $T4 applicable fn $T1 [[locator@0x1258f0d00 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply function]]];

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0ac0 [IntegerLiteral@/Users/amritpankaur/test.swift:55:1]]];
      ($T2, $T3) -> $T4 applicable fn $T1 [[locator@0x1258f0d00 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply function]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];
      ($T2, $T3) -> $T4 applicable fn $T1 [[locator@0x1258f0d00 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply function]]];

  $T4:
    Constraints:
      ($T2, $T3) -> $T4 applicable fn $T1 [[locator@0x1258f0d00 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply function]]];
      $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T5:
    Constraints:
      $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0da8 [IntegerLiteral@/Users/amritpankaur/test.swift:55:11]]];
      $T5 operator arg conv Int [[locator@0x1258f2eb0 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T6:

---Connected components---
0: $T1 $T2 $T3 $T4
  1: $T5
   (solving component #1
      (type variables in scope = [$T5])
      (initial state:
        ($T5 with possible bindings=[((subtypes of) 'Int')])
      )
      (attempting $T5 := Int
        (found solution 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0)
      )
    finished component #1)
    (solving component #0
      (type variables in scope = [$T1, $T2, $T3, $T4])
      (initial state:
        ($T2 with possible bindings=[delayed literal=3 bindings={}])
        ($T3 with possible bindings=[delayed literal=3 bindings={}])
        ($T4 with possible bindings=[delayed ((subtypes of) 'Int')])
        (disjunctions = [$T1 := (String, String) -> String, $T1 := (Int, Int) -> Int)])
        (conjunctions = [])
      )
      (selecting next type variable to attempt from [$T1, $T2, $T3, $T4])
      (selected $T1 to resolve overload binding for operator)
      (attempting $T1 := (String, String) -> String;
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (Int, Int) -> Int;
       (overload set choice binding $T1 := (Int, Int) -> Int)
        ---Constraint graph---
  $T1:

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0ac0 [IntegerLiteral@/Users/amritpankaur/test.swift:55:1]]];
      $T2 operator arg conv Int [[locator@0x1258f2fa0 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];
      $T3 operator arg conv Int [[locator@0x1258f3040 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T4:

---Connected components---
  0: $T2
  1: $T3
       (solving component #1
        (type variables in scope = [$T3])
        (initial state:
          ($T3 with possible bindings=[$T3 := Int, $T3 := String])
        )
        (attempting $T3 := Int;
         (increasing score due to non-default literal)
         (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78   [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];)
        )
        (attempting $T3 := String;
        (increasing score due to non-default literal)
         (failed constraint $T3 operator arg conv Int [[locator@0x1258f3040 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply argument -> comparing call argument #1 to parameter #1]]];)
        )
          failed component #1)
      )
      (attempting $T1 := (Float16.Type) -> (Float16, Float16) -> Float16 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Float16, Float16) -> Float16)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (Float.Type) -> (Float, Float) -> Float [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Float, Float) -> Float)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (Double.Type) -> (Double, Double) -> Double [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Double, Double) -> Double)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (UInt8.Type) -> (UInt8, UInt8) -> UInt8 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt8, UInt8) -> UInt8)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (Int8.Type) -> (Int8, Int8) -> Int8 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int8, Int8) -> Int8)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (UInt16.Type) -> (UInt16, UInt16) -> UInt16 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt16, UInt16) -> UInt16)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int16, Int16) -> Int16)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (UInt32.Type) -> (UInt32, UInt32) -> UInt32 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt32, UInt32) -> UInt32)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (Int32.Type) -> (Int32, Int32) -> Int32 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int32, Int32) -> Int32)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (UInt64.Type) -> (UInt64, UInt64) -> UInt64 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt64, UInt64) -> UInt64)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (Int64.Type) -> (Int64, Int64) -> Int64 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int64, Int64) -> Int64)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := (UInt.Type) -> (UInt, UInt) -> UInt [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt, UInt) -> UInt)
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (recorded overload choice $T1 := ($T7, $T7) -> $T7 substitutions = {Self := $T7})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (type variables in scope = [$T2, $T3])
          (initial state:
            ($T2 with possible bindings=[$T2 := {(subtypes of) Int}])
            ($T3 with possible bindings=[$T2 := {(subtypes of) Int}])
          )
          (attempting $T2 := Int
           (type variables in scope = [$T3])
             (initial state:
                ($T3 with possible bindings=[$T3 := Int, $T3 := String])
             )
            (attempting $T3 := Int
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];)
            )
            (attempting $T3 := String
              (failed constraint $T3 transitive conformance to AdditiveArithmetic [[locator@0x12609d000 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
            )
          )
        )
        (attempting $T4 := String
          (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting $T1 := <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T8, $T8.Stride) -> $T8 substitutions = {Self := $T8})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int])
         )
        (attempting $T4 := Int
          (failed constraint $T8 conforms to _Pointer [[locator@0x12609d468 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
      )
      (attempting $T1 := <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T9.Stride, $T9) -> $T9 substitutions = {Self := $T9})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T9 conforms to _Pointer [[locator@0x12609d468 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
        (attempting $T4 := String
          (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting $T1 := <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T10, $T10) -> $T10 substitutions = {Self := $T10})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T10 conforms to FloatingPoint [[locator@0x12609ddf8 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
        (attempting $T4 := String
          (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting $T1 := <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T11, $T11) -> $T11 substitutions = {Self := $T11})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (type variables in scope = [$T2, $T3])
          (initial state:
            ($T2 with possible bindings=[$T2 := {(subtypes of) Int}])
            ($T3 with possible bindings=[$T2 := literal=3 {(subtypes of) Int}])
          )
          (attempting $T2 := Int
            (type variables in scope = [$T3])
              (initial state:
                 ($T3 with possible bindings=[$T3 := Int, $T3 := String])
              )
            (attempting $T3 := Int
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];)
            )
            (attempting $T3 := String
              (failed constraint $T3 transitive conformance to BinaryInteger [[locator@0x12682ba38 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
            )
          )
        )
        (attempting $T4 := String
          (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting $T1 := <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element> [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := (Array<$T12>, Array<$T12>) -> Array<$T12> substitutions = {Element := $T12})
        (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting $T1 := <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T13, $T14) -> $T13 substitutions = {Self := $T13, Other := $T14})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T13 conforms to RangeReplaceableCollection [[locator@0x12682c198 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
      )
      (attempting $T1 := <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T16, $T15) -> $T15 substitutions = {Self := $T16, Other := $T15})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T15 conforms to RangeReplaceableCollection [[locator@0x12682c858 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
        (attempting $T4 := String
          (failed constraint $T4 operator arg conv Int [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting $T1 := <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T17, $T18) -> $T17 substitutions = {Self := $T17, Other := $T18})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T17 conforms to RangeReplaceableCollection [[locator@0x12682cf68 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
      )
      (attempting $T1 := <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T19, $T19) -> $T19 substitutions = {Self := $T19})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682d698 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
        (attempting $T4 := String
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682d698 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
      )
      (attempting $T1 := <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T20.Scalar, $T20) -> $T20 substitutions = {Self := $T20})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682e028 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
        (attempting $T4 := String
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682e028 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
      )
      (attempting $T1 := <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
       (recorded overload choice $T1 := ($T21, $T21.Scalar) -> $T21 substitutions = {Self := $T20})
        (type variables in scope = [$T4])
        (initial state:
          ($T4 with possible bindings=[$T4 := Int, $T4 := String])
         )
        (attempting $T4 := Int
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682e028 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
      )
     (skipping unavailable $T1 := [(<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never), (<Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never), (<Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self)), (<Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self), (<Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self)] [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
    failed component #0)
  )
  (attempting $T0 := (String.Type) -> (String, String) -> String [[locator@0x1258ee200 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:9]]];
    (overload set choice binding $T0 := (String, String) -> String)
---Connected components---
  0: $T1 $T2 $T3 $T4
  1: $T5
    (solving component #1
      ($T5 literal=3 bindings={(subtypes of) String})
      Initial bindings: $T5 := String, $T5 := Int
      (attempting type variable $T5 := String
        (increasing score due to non-default literal)
        (failed constraint $T5 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0da8 [IntegerLiteral@/Users/amritpankaur/test.swift:55:11]]];)
      )
      (attempting type variable $T5 := Int
        (failed constraint $T5 operator arg conv String [[locator@0x1258f2eb0 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #1 to parameter #1]]];)
      )
      (attempting type variable $T5 := Double
        (increasing score due to non-default literal)
        (failed constraint $T5 operator arg conv String [[locator@0x1258f2eb0 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #1 to parameter #1]]];)
      )
    failed component #1)
  )
  (attempting $T0 := (Float16.Type) -> (Float16, Float16) -> Float16 [[locator@0x1258ee200 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:9]]];
    (overload set choice binding $T0 := (Float16, Float16) -> Float16)
---Connected components---
  0: $T1 $T2 $T3 $T4
  1: $T5
    (solving component #1
      ($T5 bindings={(subtypes of) Float16})
      Initial bindings: $T5 := Float16
      (attempting type variable $T5 := Float16
        (increasing score due to non-default literal)
        (found solution 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0)
      )
    finished component #1)
    (solving component #0
      ($T2 delayed literal=3 bindings={})
      ($T3 delayed literal=3 bindings={})
      ($T4 delayed bindings={(subtypes of) Float16})
      (attempting disjunction choice $T1 bound to decl Swift.(file).String extension.+ : (String.Type) -> (String, String) -> String [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (String, String) -> String)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Int extension.+ : (Int.Type) -> (Int, Int) -> Int [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int, Int) -> Int)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Float16 extension.+ : (Float16.Type) -> (Float16, Float16) -> Float16 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Float16, Float16) -> Float16)
        ---Constraint graph---
  $T1:

  $T2:
    Constraints:
      $T2 literal conforms to ExpressibleByIntegerLiteral [[locator@0x1258f0ac0 [IntegerLiteral@/Users/amritpankaur/test.swift:55:1]]];
      $T2 operator arg conv Float16 [[locator@0x1258f2fa0 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply argument -> comparing call argument #0 to parameter #0]]];

  $T3:
    Constraints:
      $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];
      $T3 operator arg conv Float16 [[locator@0x1258f3040 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply argument -> comparing call argument #1 to parameter #1]]];

  $T4:

---Connected components---
  0: $T2
  1: $T3
        (solving component #1
          ($T3 literal=3 bindings={(subtypes of) Float16})
          Initial bindings: $T3 := Float16, $T3 := String
          (attempting type variable $T3 := Float16
            (increasing score due to non-default literal)
            (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];)
          )
          (attempting type variable $T3 := String
            (failed constraint $T3 operator arg conv Float16 [[locator@0x1258f3040 [Binary@/Users/amritpankaur/test.swift:55:3 -> apply argument -> comparing call argument #1 to parameter #1]]];)
          )
        failed component #1)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Float extension.+ : (Float.Type) -> (Float, Float) -> Float [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Float, Float) -> Float)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Double extension.+ : (Double.Type) -> (Double, Double) -> Double [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Double, Double) -> Double)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).UInt8 extension.+ : (UInt8.Type) -> (UInt8, UInt8) -> UInt8 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt8, UInt8) -> UInt8)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Int8 extension.+ : (Int8.Type) -> (Int8, Int8) -> Int8 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int8, Int8) -> Int8)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).UInt16 extension.+ : (UInt16.Type) -> (UInt16, UInt16) -> UInt16 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt16, UInt16) -> UInt16)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Int16 extension.+ : (Int16.Type) -> (Int16, Int16) -> Int16 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int16, Int16) -> Int16)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).UInt32 extension.+ : (UInt32.Type) -> (UInt32, UInt32) -> UInt32 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt32, UInt32) -> UInt32)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Int32 extension.+ : (Int32.Type) -> (Int32, Int32) -> Int32 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int32, Int32) -> Int32)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).UInt64 extension.+ : (UInt64.Type) -> (UInt64, UInt64) -> UInt64 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt64, UInt64) -> UInt64)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Int64 extension.+ : (Int64.Type) -> (Int64, Int64) -> Int64 [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Int64, Int64) -> Int64)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).UInt extension.+ : (UInt.Type) -> (UInt, UInt) -> UInt [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (UInt, UInt) -> UInt)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).AdditiveArithmetic.+ : <Self where Self : AdditiveArithmetic> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T22, $T22) -> $T22)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T3 $T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          ($T2 bindings={(subtypes of) Float16})
          ($T3 literal=3 bindings={(subtypes of) Float16})
          Initial bindings: $T2 := Float16
          (attempting type variable $T2 := Float16
            (increasing score due to non-default literal)
            ($T3 literal=3 bindings={(subtypes of) Float16})
            Initial bindings: $T3 := Float16, $T3 := String
            (attempting type variable $T3 := Float16
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];)
            )
            (attempting type variable $T3 := String
              (failed constraint $T3 transitive conformance to AdditiveArithmetic [[locator@0x12609d000 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
            )
          )
        )
        (attempting type variable $T4 := String
          (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self, Self.Stride) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T23, $T23.Stride) -> $T23)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 delayed literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 involves_type_vars=[$T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16
        (attempting type variable $T4 := Float16
          (failed constraint $T23 conforms to _Pointer [[locator@0x12609d468 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Strideable extension.+ : <Self where Self : _Pointer> (Self.Type) -> (Self.Stride, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T24.Stride, $T24) -> $T24)
        ($T2 delayed literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T3] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          (failed constraint $T24 conforms to _Pointer [[locator@0x12609d468 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
        (attempting type variable $T4 := String
          (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).FloatingPoint.+ : <Self where Self : FloatingPoint> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T25, $T25) -> $T25)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T3 $T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          ($T2 bindings={(subtypes of) Float16})
          ($T3 literal=3 bindings={(subtypes of) Float16})
          Initial bindings: $T2 := Float16
          (attempting type variable $T2 := Float16
            (increasing score due to non-default literal)
            ($T3 literal=3 bindings={(subtypes of) Float16})
            Initial bindings: $T3 := Float16, $T3 := String
            (attempting type variable $T3 := Float16
              (increasing score due to non-default literal)
              (failed constraint $T3 literal conforms to ExpressibleByUnicodeScalarLiteral [[locator@0x1258f0b78 [StringLiteral@/Users/amritpankaur/test.swift:55:5]]];)
            )
            (attempting type variable $T3 := String
              (failed constraint $T3 transitive conformance to FloatingPoint [[locator@0x12609ddf8 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
            )
          )
        )
        (attempting type variable $T4 := String
          (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).BinaryInteger.+ : <Self where Self : BinaryInteger> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T26, $T26) -> $T26)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T3 $T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          (failed constraint $T26 conforms to BinaryInteger [[locator@0x12682ba38 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
        (attempting type variable $T4 := String
          (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).Array extension.+ : <Element> (Array<Element>.Type) -> (Array<Element>, Array<Element>) -> Array<Element> [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := (Array<$T27>, Array<$T27>) -> Array<$T27>)
        (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T28, $T29) -> $T28)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T29] bindings={})
        ($T4 involves_type_vars=[$T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16
        (attempting type variable $T4 := Float16
          (failed constraint $T28 conforms to RangeReplaceableCollection [[locator@0x12682c198 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : Sequence, Self.Element == Other.Element> (Self.Type) -> (Other, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T31, $T30) -> $T30)
        ($T2 literal=3 involves_type_vars=[$T31] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T3] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          (failed constraint $T30 conforms to RangeReplaceableCollection [[locator@0x12682c858 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
        (attempting type variable $T4 := String
          (failed constraint $T4 operator arg conv Float16 [[locator@0x1258f2e10 [Binary@/Users/amritpankaur/test.swift:55:9 -> apply argument -> comparing call argument #0 to parameter #0]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).RangeReplaceableCollection extension.+ : <Self, Other where Self : RangeReplaceableCollection, Other : RangeReplaceableCollection, Self.Element == Other.Element> (Self.Type) -> (Self, Other) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T32, $T33) -> $T32)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T33] bindings={})
        ($T4 involves_type_vars=[$T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16
        (attempting type variable $T4 := Float16
          (failed constraint $T32 conforms to RangeReplaceableCollection [[locator@0x12682cf68 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #0 (conformance)]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T34, $T34) -> $T34)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T2 $T3] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682d698 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
        (attempting type variable $T4 := String
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682d698 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self.Scalar, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T35.Scalar, $T35) -> $T35)
        ($T2 delayed literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 literal=3 involves_type_vars=[$T3] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16, $T4 := String
        (attempting type variable $T4 := Float16
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682e028 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
        (attempting type variable $T4 := String
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682e028 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
      )
      (attempting disjunction choice $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FloatingPoint> (Self.Type) -> (Self, Self.Scalar) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
        (overload set choice binding $T1 := ($T36, $T36.Scalar) -> $T36)
        ($T2 literal=3 involves_type_vars=[$T4] bindings={})
        ($T3 delayed literal=3 involves_type_vars=[$T4] bindings={})
        ($T4 involves_type_vars=[$T2] bindings={(subtypes of) Float16})
        Initial bindings: $T4 := Float16
        (attempting type variable $T4 := Float16
          (failed constraint $T4.Scalar conforms to FloatingPoint [[locator@0x12682e028 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3 -> opened generic -> type parameter requirement #1 (conformance)]]];)
        )
      )
      (skipping unavailable disjunction choice $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (Self, String) -> Never [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
      (skipping unavailable disjunction choice $T1 bound to decl Swift.(file).Sequence extension.+ : <Self where Self : Sequence, Self.Element == String> (Self.Type) -> (String, Self) -> Never [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
      (skipping unavailable disjunction choice $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
      (skipping unavailable disjunction choice $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self, Self.Scalar) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
      (skipping unavailable disjunction choice $T1 bound to decl Swift.(file).SIMD extension.+ : <Self where Self : SIMD, Self.Scalar : FixedWidthInteger> (Self.Type) -> (Self.Scalar, Self) -> Self [[locator@0x1258ef048 [OverloadedDeclRef@/Users/amritpankaur/test.swift:55:3]]];
    failed component #0)
  )
