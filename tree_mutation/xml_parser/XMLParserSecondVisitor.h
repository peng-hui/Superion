
// Generated from XMLParser.g4 by ANTLR 4.7

#pragma once


#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "XMLParserVisitor.h"
using namespace std;
using namespace antlr4;



/**
 * This class provides an empty implementation of XMLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  XMLParserSecondVisitor : public XMLParserVisitor {
public:
	vector<misc::Interval> intervals;
	vector<string> texts;


  virtual antlrcpp::Any visitDocument(XMLParser::DocumentContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProlog(XMLParser::PrologContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContent(XMLParser::ContentContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(XMLParser::ElementContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference(XMLParser::ReferenceContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(XMLParser::AttributeContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChardata(XMLParser::ChardataContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMisc(XMLParser::MiscContext *ctx) override {
    //intervals.push_back(ctx->getSourceInterval());
    
    misc::Interval intvl= new misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex());
    texts.push_back(ctx->start->getInputStream()->getText(intvl));
    return visitChildren(ctx);
  }


};

