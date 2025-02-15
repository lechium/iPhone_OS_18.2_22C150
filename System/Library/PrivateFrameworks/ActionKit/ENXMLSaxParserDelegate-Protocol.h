//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class ENXMLSaxParser, NSDictionary, NSError, NSString;

@protocol ENXMLSaxParserDelegate <NSObject>

@optional
- (void)parser:(ENXMLSaxParser *)arg1 didFailWithError:(NSError *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 foundComment:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 foundCDATA:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 didEndElement:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 didStartElement:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)parserDidEndDocument:(ENXMLSaxParser *)arg1;
- (void)parserDidStartDocument:(ENXMLSaxParser *)arg1;
@end

