//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@protocol _SFPBRFSummaryItemDetailedTextCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property(retain, nonatomic) _SFPBRFTextProperty *text_6;
@property(retain, nonatomic) _SFPBRFTextProperty *text_5;
@property(retain, nonatomic) _SFPBRFTextProperty *text_4;
@property(retain, nonatomic) _SFPBRFTextProperty *text_3;
@property(retain, nonatomic) _SFPBRFTextProperty *text_2;
@property(retain, nonatomic) _SFPBRFTextProperty *text_1;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
