//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUIDynamic/NSObject-Protocol.h>

@class AMSUIDMarkdownParser, NSDictionary, NSError, NSString;

@protocol AMSUIDMarkdownParser <NSObject>
- (void)parser:(AMSUIDMarkdownParser *)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parserDidEndListElement:(AMSUIDMarkdownParser *)arg1;
- (void)parserDidStartListElement:(AMSUIDMarkdownParser *)arg1;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parserDidFindNewline:(AMSUIDMarkdownParser *)arg1;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didFindArtworkWithIdentifier:(NSString *)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didStartElement:(unsigned long long)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(AMSUIDMarkdownParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(AMSUIDMarkdownParser *)arg1;
- (void)parserDidStartDocument:(AMSUIDMarkdownParser *)arg1;
@end
