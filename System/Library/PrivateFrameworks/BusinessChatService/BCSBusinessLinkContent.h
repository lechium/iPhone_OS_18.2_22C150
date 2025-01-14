//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkContent : PBCodable
{
    NSString *_language;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    _Bool _isDefault;	// 32 = 0x20
    CDStruct_d3bb80d3 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000007f598
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007f476
- (unsigned long long)hash;	// IMP=0x000000000007f3df
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f2c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f1dd
- (void)copyTo:(id)arg1;	// IMP=0x000000000007f13a
- (void)writeTo:(id)arg1;	// IMP=0x000000000007f099
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007f08c
- (id)dictionaryRepresentation;	// IMP=0x000000000007ed47
- (id)description;	// IMP=0x000000000007ec98
@property(nonatomic) _Bool hasIsDefault;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

