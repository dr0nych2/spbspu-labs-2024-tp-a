#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <memory>
#include <set>
#include <functional>
#include <iostream>

namespace petrov
{
  struct Node
  {
    using ptr = std::shared_ptr< Node >;
    using cRP = const ptr&;

    char symbol;
    size_t freq;
    std::string code;
    ptr left;
    ptr right;

    using str = std::string;
    Node(char nSym, size_t nFreq, str nCode);
    Node(const Node&) = default;
    Node(Node&&) = default;
    Node& operator=(const Node&) = default;
    Node& operator=(Node&&) = default;
  };
  using ptr = std::shared_ptr< Node >;
  std::ostream& operator<<(std::ostream& out, const Node& node);

  bool compareNodes(const Node& lhs, const Node& rhs);
  bool doesNodeHaveKey(const Node& node, char key);
  bool isEqual(const Node& n1, const Node& n2);

  using cmpType = std::function< bool(const Node&, const Node&) >;
  using setType = std::set< Node, cmpType >;
  void addToSet(setType& alph, char symbol);

  std::string getCode(Node::cRP root, char symbol, std::string code);
  setType& fillSetWithCodes(setType& dest, Node::cRP root);
  setType& fillSetWithCodes(setType& dest, Node::cRP root, Node::cRP current);
  void givingParents(Node::cRP root);
  setType& fillCodes(setType& alph);
}

#endif
