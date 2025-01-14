//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBRFTextElement;

@protocol _SFPBRFTextProperty <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool is_safe_for_logging;
@property(copy, nonatomic) NSArray *text_elements;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFTextElement *)text_elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)text_elementsCount;
- (void)addText_elements:(_SFPBRFTextElement *)arg1;
- (void)clearText_elements;
@end

