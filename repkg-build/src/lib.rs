use repkg_common::{Name, Project, Rule};

pub mod exec;
pub mod package;
pub mod parser;
pub mod sandbox;
pub mod task_order;

#[derive(Debug)]
pub struct Import {
    pub url: String,
    pub items: Vec<Name>,
}

#[derive(Debug)]
pub enum ASTNode {
    Project(Project),
    Import(Import),
    Rule(Rule),
}

#[derive(Debug, PartialEq)]
pub enum Value {
    FunctionCall(FunctionCall),
    String(String),
}

#[derive(Debug)]
pub struct Function {
    pub name: Name,
    pub body: Vec<Value>,
}

#[derive(Debug, PartialEq)]
pub struct FunctionCall {
    pub func_name: Name,
    pub arguments: Vec<Value>,
}
