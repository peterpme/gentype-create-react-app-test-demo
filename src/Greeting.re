[%bs.raw {|require('./Greeting.css')|}];
let component = ReasonReact.statelessComponent("Greeting");

[@genType]
let make = (~name, _children) => {
  ...component,
  render: _self =>  {
    let greeting = "Hey " ++ name;
    <div>
    <p> greeting->ReasonReact.string</p>
    <Hey name="Peter" />
    </div>
  }
};
