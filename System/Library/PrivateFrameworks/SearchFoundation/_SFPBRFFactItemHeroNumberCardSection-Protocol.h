//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBRFTextProperty;

@protocol _SFPBRFFactItemHeroNumberCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBRFTextProperty *text_5;
@property(retain, nonatomic) _SFPBRFTextProperty *text_4;
@property(copy, nonatomic) NSArray *text_3s;
@property(copy, nonatomic) NSArray *text_2s;
@property(retain, nonatomic) _SFPBRFTextProperty *unit;
@property(retain, nonatomic) _SFPBRFTextProperty *number;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)clearText_3;
- (_SFPBRFTextProperty *)text_2AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_2Count;
- (void)addText_2:(_SFPBRFTextProperty *)arg1;
- (void)clearText_2;
@end
