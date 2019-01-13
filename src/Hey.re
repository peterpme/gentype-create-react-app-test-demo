[@bs.module "./Hey"] external hey: ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type jsProps = {
  [@bs.optional] name: string
};

let make = (~name, _children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=hey,
    ~props=jsProps(~name, ()),
    _children,
  );
