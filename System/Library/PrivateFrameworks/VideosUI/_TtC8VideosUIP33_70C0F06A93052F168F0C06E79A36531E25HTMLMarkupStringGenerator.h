//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8VideosUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMarkupStringGenerator : NSObject
{
    MISSING_TYPE *parser;	// 8 = 0x8
    MISSING_TYPE *logger;	// 1093628779 = 0x412f736b
    MISSING_TYPE *accumulator;	// 779053412 = 0x2e6f6964
    MISSING_TYPE *fontTraitsStack;	// 1919907685 = 0x726f7765
    MISSING_TYPE *didParseEverything;	// 1685406022 = 0x64754146
}

- (void).cxx_destruct;	// IMP=0x000000000037247b
- (id)init;	// IMP=0x0000000000372446
- (void)parserDidFindNewline:(id)arg1;	// IMP=0x0000000000372c62
- (void)parser:(id)arg1 didFindCharacters:(id)arg2;	// IMP=0x0000000000372bd5
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;	// IMP=0x00000000003728f0
- (void)parser:(id)arg1 didStartElement:(unsigned long long)arg2;	// IMP=0x0000000000372821
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x0000000000372717
- (void)parserDidEndDocument:(id)arg1;	// IMP=0x000000000037257b
- (void)parserDidStartDocument:(id)arg1;	// IMP=0x0000000000372575

@end
