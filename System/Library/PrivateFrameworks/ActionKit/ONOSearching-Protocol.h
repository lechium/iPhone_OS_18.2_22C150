//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, ONOXMLElement, ONOXPathFunctionResult;
@protocol NSFastEnumeration;

@protocol ONOSearching
- (ONOXMLElement *)firstChildWithCSS:(NSString *)arg1;
- (void)enumerateElementsWithCSS:(NSString *)arg1 usingBlock:(void (^)(ONOXMLElement *, unsigned long long, _Bool *))arg2;
- (void)enumerateElementsWithCSS:(NSString *)arg1 block:(void (^)(ONOXMLElement *))arg2;
- (id <NSFastEnumeration>)CSS:(NSString *)arg1;
- (ONOXMLElement *)firstChildWithXPath:(NSString *)arg1;
- (void)enumerateElementsWithXPath:(NSString *)arg1 usingBlock:(void (^)(ONOXMLElement *, unsigned long long, _Bool *))arg2;
- (void)enumerateElementsWithXPath:(NSString *)arg1 block:(void (^)(ONOXMLElement *))arg2;
- (ONOXPathFunctionResult *)functionResultByEvaluatingXPath:(NSString *)arg1;
- (id <NSFastEnumeration>)XPath:(NSString *)arg1;
@end

