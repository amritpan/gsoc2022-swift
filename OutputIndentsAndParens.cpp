---Constraint solving at [/Users/amritpankaur/test.swift:58:1 - line:61:1]---
  (overload set choice binding $T0 := (() -> Void) -> ())
---Initial constraints for the given expression---
(call_expr type='()' location=/Users/amritpankaur/test.swift:58:1 range=[/Users/amritpankaur/test.swift:58:1 - line:61:1]
  (declref_expr type='(() -> Void) -> ()' location=/Users/amritpankaur/test.swift:58:1 range=[/Users/amritpankaur/test.swift:58:1 - line:58:1] decl=test.(file).test@/Users/amritpankaur/test.swift:56:6 function_ref=single)
  (argument_list
    (argument
      (closure_expr type='$T1' location=/Users/amritpankaur/test.swift:58:6 range=[/Users/amritpankaur/test.swift:58:6 - line:61:1] discriminator=0
        (parameter_list range=[/Users/amritpankaur/test.swift:58:6 - line:58:6])
        (brace_stmt range=[/Users/amritpankaur/test.swift:58:6 - line:61:1]
          (pattern_binding_decl range=[/Users/amritpankaur/test.swift:59:3 - line:59:11]
            (pattern_named 'x')
            Original init:
            (integer_literal_expr type='<null>' value=42 builtin_initializer=**NULL** initializer=**NULL**)
            Processed init:
            (integer_literal_expr type='<null>' value=42 builtin_initializer=**NULL** initializer=**NULL**))

          (var_decl range=[/Users/amritpankaur/test.swift:59:7 - line:59:7] "x" type='<null type>' let)

          (call_expr type='<null>'
            (overloaded_decl_ref_expr type='<null>' name=print number_of_decls=2 function_ref=single decls=[
              Swift.(file).print(_:separator:terminator:),
              Swift.(file).print(_:separator:terminator:to:)])
            (argument_list
              (argument
                (declref_expr type='<null>' decl=test.(file).top-level code.explicit closure discriminator=0.x@/Users/amritpankaur/test.swift:59:7 function_ref=unapplied))
            )))))
  ))
Score: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Contextual Type: <null>
Type Variables:
  $T0 [lvalue allowed] [noescape allowed] as (() -> Void) -> () @ locator@0x13b008200 [DeclRef@/Users/amritpankaur/test.swift:58:1]
  $T1 [noescape allowed] bindings={(subtypes of) () -> Void} defaults={() -> $T2} @ locator@0x13b008250 [Closure@/Users/amritpankaur/test.swift:58:6]
  $T2 bindings={} @ locator@0x13b0082a0 [Closure@/Users/amritpankaur/test.swift:58:6 -> closure result]
  $T3 [noescape allowed] as () @ locator@0x13b0083a8 [Call@/Users/amritpankaur/test.swift:58:1 -> function result]

Active Constraints:

Inactive Constraints:
  $T1 closure can default to () -> $T2 [[locator@0x13b008250 [Closure@/Users/amritpankaur/test.swift:58:6]]];
  $T1 arg conv () -> Void [[locator@0x13b008490 [Call@/Users/amritpankaur/test.swift:58:1 -> apply argument -> comparing call argument #0 to parameter #0]]];
Resolved overloads:
  selected overload set choice test: $T0 == (() -> Void) -> () for locator@0x13b008200 [DeclRef@/Users/amritpankaur/test.swift:58:1]

  ($T1 bindings={(subtypes of) () -> Void} defaults={() -> $T2})
  Initial bindings: $T1 := () -> Void
  (attempting type variable $T1 := () -> Void
    ($T2 bindings={(subtypes of) Void} defaults={()})
    Initial bindings: $T2 := Void
    (attempting type variable $T2 := Void
      (attempting conjunction element pattern binding element @ 0 : (pattern_named 'x')

---Initial constraints for the given expression---
(integer_literal_expr type='$T4' location=/Users/amritpankaur/test.swift:59:11 range=[/Users/amritpankaur/test.swift:59:11 - line:59:11] value=42 builtin_initializer=**NULL** initializer=**NULL**)
Score: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Contextual Type: <null>
Type Variables:
  $T4 [noescape allowed] literal=3 bindings={} @ locator@0x13b008890 [IntegerLiteral@/Users/amritpankaur/test.swift:59:11]

Active Constraints:

Inactive Constraints:
  $T4 literal conforms to ExpressibleByIntegerLiteral [[locator@0x13b008890 [IntegerLiteral@/Users/amritpankaur/test.swift:59:11]]];

Retired Constraints:
  $T2 subtype Void [[locator@0x13b0087e0 [Call@/Users/amritpankaur/test.swift:58:1 -> apply argument -> comparing call argument #0 to parameter #0 -> function result]]];
  $T2 can default to () [[locator@0x13b0082a0 [Closure@/Users/amritpankaur/test.swift:58:6 -> closure result]]];
  $T1 arg conv () -> Void [[locator@0x13b008490 [Call@/Users/amritpankaur/test.swift:58:1 -> apply argument -> comparing call argument #0 to parameter #0]]];
  $T1 closure can default to () -> $T2 [[locator@0x13b008250 [Closure@/Users/amritpankaur/test.swift:58:6]]];
Resolved overloads:
  selected overload set choice test: $T0 == (() -> Void) -> () for locator@0x13b008200 [DeclRef@/Users/amritpankaur/test.swift:58:1]

        ($T4 literal=3 bindings={})
        Initial bindings: $T4 := Int
        (attempting type variable $T4 := Int
          (found solution 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0)
        )
      )
      (attempting conjunction element syntactic element (call_expr type='<null>'
  (overloaded_decl_ref_expr type='<null>' name=print number_of_decls=2 function_ref=single decls=[
    Swift.(file).print(_:separator:terminator:),
    Swift.(file).print(_:separator:terminator:to:)])
  (argument_list
    (argument
      (declref_expr type='<null>' decl=test.(file).top-level code.explicit closure discriminator=0.x@/Users/amritpankaur/test.swift:59:7 function_ref=unapplied))
  ))
        (overload set choice binding $T6 := $T4)
        (disabled disjunction term $T5 bound to decl Swift.(file).print(_:separator:terminator:to:) : <Target where Target : TextOutputStream> (Any..., separator: String, terminator: String, to: inout Target) -> () [[locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]]];)
        (introducing single enabled disjunction term $T5 bound to decl Swift.(file).print(_:separator:terminator:) : (Any..., String, String) -> () [[locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]]];)
        (overload set choice binding $T5 := (Any..., String, String) -> ())
        (common result type for $T5 is ())
        (increasing score due to empty-existential conversion)
---Initial constraints for the given expression---
(call_expr type='()' location=/Users/amritpankaur/test.swift:60:3 range=[/Users/amritpankaur/test.swift:60:3 - line:60:10]
  (overloaded_decl_ref_expr type='$T5' location=/Users/amritpankaur/test.swift:60:3 range=[/Users/amritpankaur/test.swift:60:3 - line:60:3] name=print number_of_decls=2 function_ref=single decls=[
    Swift.(file).print(_:separator:terminator:),
    Swift.(file).print(_:separator:terminator:to:)])
  (argument_list
    (argument
      (declref_expr type='Int' location=/Users/amritpankaur/test.swift:60:9 range=[/Users/amritpankaur/test.swift:60:9 - line:60:9] decl=test.(file).top-level code.explicit closure discriminator=0.x@/Users/amritpankaur/test.swift:59:7 function_ref=unapplied))
  ))
Score: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
Contextual Type: <null>
Type Variables:
  $T4 [noescape allowed] as Int @ locator@0x13b008890 [IntegerLiteral@/Users/amritpankaur/test.swift:59:11]
  $T5 [lvalue allowed] [noescape allowed] as (Any..., String, String) -> () @ locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]
  $T6 [lvalue allowed] [noescape allowed] as Int @ locator@0x13b008b28 [DeclRef@/Users/amritpankaur/test.swift:60:9]
  $T7 [noescape allowed] as () @ locator@0x13b008b88 [Call@/Users/amritpankaur/test.swift:60:3 -> function result]

Active Constraints:

Inactive Constraints:

Retired Constraints:
  disjunction [[locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]]]:
>             $T5 bound to decl Swift.(file).print(_:separator:terminator:) : (Any..., String, String) -> () [[locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]]];
>  [disabled] $T5 bound to decl Swift.(file).print(_:separator:terminator:to:) : <Target where Target : TextOutputStream> (Any..., separator: String, terminator: String, to: inout Target) -> () [[locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]]];
  $T2 subtype Void [[locator@0x13b0087e0 [Call@/Users/amritpankaur/test.swift:58:1 -> apply argument -> comparing call argument #0 to parameter #0 -> function result]]];
  $T2 can default to () [[locator@0x13b0082a0 [Closure@/Users/amritpankaur/test.swift:58:6 -> closure result]]];
  $T1 arg conv () -> Void [[locator@0x13b008490 [Call@/Users/amritpankaur/test.swift:58:1 -> apply argument -> comparing call argument #0 to parameter #0]]];
  $T1 closure can default to () -> $T2 [[locator@0x13b008250 [Closure@/Users/amritpankaur/test.swift:58:6]]];
Resolved overloads:
  selected overload set choice test: $T0 == (() -> Void) -> () for locator@0x13b008200 [DeclRef@/Users/amritpankaur/test.swift:58:1]
  selected overload set choice x: $T6 == $T4 for locator@0x13b008b28 [DeclRef@/Users/amritpankaur/test.swift:60:9]
  selected overload set choice print: $T5 == (Any..., String, String) -> () for locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]

        (found solution 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0)
      )
      (applying conjunction result to outer context
        (found solution 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0)
      )
    )
  )
---Solver statistics---
Total number of scopes explored: 7
Maximum depth reached while exploring solutions: 5
Time: 1.490000e-01ms
---Solution---
Fixed score: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Type variables:
  $T0 as (() -> Void) -> () @ locator@0x13b008200 [DeclRef@/Users/amritpankaur/test.swift:58:1]
  $T1 as () -> Void @ locator@0x13b008250 [Closure@/Users/amritpankaur/test.swift:58:6]
  $T2 as Void @ locator@0x13b0082a0 [Closure@/Users/amritpankaur/test.swift:58:6 -> closure result]
  $T3 as () @ locator@0x13b0083a8 [Call@/Users/amritpankaur/test.swift:58:1 -> function result]
  $T4 as Int @ locator@0x13b008890 [IntegerLiteral@/Users/amritpankaur/test.swift:59:11]
  $T5 as (Any..., String, String) -> () @ locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3]
  $T6 as Int @ locator@0x13b008b28 [DeclRef@/Users/amritpankaur/test.swift:60:9]
  $T7 as () @ locator@0x13b008b88 [Call@/Users/amritpankaur/test.swift:60:3 -> function result]

Overload choices:
  locator@0x13b008998 [OverloadedDeclRef@/Users/amritpankaur/test.swift:60:3] with Swift.(file).print(_:separator:terminator:) as print: (Any..., String, String) -> ()

  locator@0x13b008200 [DeclRef@/Users/amritpankaur/test.swift:58:1] with test.(file).test@/Users/amritpankaur/test.swift:56:6 as test: (() -> Void) -> ()

  locator@0x13b008b28 [DeclRef@/Users/amritpankaur/test.swift:60:9] with test.(file).top-level code.explicit closure discriminator=0.x@/Users/amritpankaur/test.swift:59:7 as x: $T4


Constraint restrictions:
  Int to Any is [existential]

Trailing closure matching:
  locator@0x13b008468 [Call@/Users/amritpankaur/test.swift:58:1 -> apply argument]: forward
  locator@0x13b008c48 [Call@/Users/amritpankaur/test.swift:60:3 -> apply argument]: forward

Disjunction choices:
---Type-checked expression---
(call_expr type='()' location=/Users/amritpankaur/test.swift:58:1 range=[/Users/amritpankaur/test.swift:58:1 - line:61:1]
  (declref_expr type='(() -> Void) -> ()' location=/Users/amritpankaur/test.swift:58:1 range=[/Users/amritpankaur/test.swift:58:1 - line:58:1] decl=test.(file).test@/Users/amritpankaur/test.swift:56:6 function_ref=single)
  (argument_list
    (argument
      (closure_expr type='() -> Void' location=/Users/amritpankaur/test.swift:58:6 range=[/Users/amritpankaur/test.swift:58:6 - line:61:1] discriminator=0
        (parameter_list range=[/Users/amritpankaur/test.swift:58:6 - line:58:6])
        (brace_stmt range=[/Users/amritpankaur/test.swift:58:6 - line:61:1]
          (pattern_binding_decl range=[/Users/amritpankaur/test.swift:59:3 - line:59:11]
            (pattern_named 'x')
            Original init:
            (integer_literal_expr type='<null>' value=42 builtin_initializer=**NULL** initializer=**NULL**)
            Processed init:
            (integer_literal_expr type='<null>' value=42 builtin_initializer=**NULL** initializer=**NULL**))

          (var_decl range=[/Users/amritpankaur/test.swift:59:7 - line:59:7] "x" type='<null type>' let)

          (call_expr type='<null>'
            (overloaded_decl_ref_expr type='<null>' name=print number_of_decls=2 function_ref=single decls=[
              Swift.(file).print(_:separator:terminator:),
              Swift.(file).print(_:separator:terminator:to:)])
            (argument_list
              (argument
                (declref_expr type='<null>' decl=test.(file).top-level code.explicit closure discriminator=0.x@/Users/amritpankaur/test.swift:59:7 function_ref=unapplied))
            )))))
  ))
---Type-checked expression---
(integer_literal_expr type='Int' location=/Users/amritpankaur/test.swift:59:11 range=[/Users/amritpankaur/test.swift:59:11 - line:59:11] value=42 builtin_initializer=Swift.(file).Int.init(_builtinIntegerLiteral:) initializer=**NULL**)
---Type-checked expression---
(call_expr type='()' location=/Users/amritpankaur/test.swift:60:3 range=[/Users/amritpankaur/test.swift:60:3 - line:60:10]
  (declref_expr type='(Any..., String, String) -> ()' location=/Users/amritpankaur/test.swift:60:3 range=[/Users/amritpankaur/test.swift:60:3 - line:60:3] decl=Swift.(file).print(_:separator:terminator:) function_ref=single)
  (argument_list labels=_:separator:terminator:
    (argument
      (vararg_expansion_expr implicit type='Any...' location=/Users/amritpankaur/test.swift:60:9 range=[/Users/amritpankaur/test.swift:60:9 - line:60:9]
        (array_expr implicit type='Any...' location=/Users/amritpankaur/test.swift:60:9 range=[/Users/amritpankaur/test.swift:60:9 - line:60:9] initializer=**NULL**
          (erasure_expr implicit type='Any' location=/Users/amritpankaur/test.swift:60:9 range=[/Users/amritpankaur/test.swift:60:9 - line:60:9]
            (declref_expr type='Int' location=/Users/amritpankaur/test.swift:60:9 range=[/Users/amritpankaur/test.swift:60:9 - line:60:9] decl=test.(file).top-level code.explicit closure discriminator=0.x@/Users/amritpankaur/test.swift:59:7 function_ref=unapplied)))))
    (argument label=separator
      (default_argument_expr implicit type='String' location=/Users/amritpankaur/test.swift:60:8 range=[/Users/amritpankaur/test.swift:60:8 - line:60:8] default_args_owner=Swift.(file).print(_:separator:terminator:) param=1))
    (argument label=terminator
      (default_argument_expr implicit type='String' location=/Users/amritpankaur/test.swift:60:8 range=[/Users/amritpankaur/test.swift:60:8 - line:60:8] default_args_owner=Swift.(file).print(_:separator:terminator:) param=2))
  ))
Program ended with exit code: 0
