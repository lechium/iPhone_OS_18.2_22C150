//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class APPBButton, APPBStyle, NSMutableArray, NSString;

@interface APPBAdLayoutDetails : PBCodable
{
    NSString *_accessAdCopy;	// 8 = 0x8
    NSString *_accessHeadline;	// 16 = 0x10
    NSString *_actionURL;	// 24 = 0x18
    NSString *_adCopy;	// 32 = 0x20
    int _adFormatType;	// 40 = 0x28
    APPBButton *_ctaButton;	// 48 = 0x30
    NSMutableArray *_elements;	// 56 = 0x38
    NSString *_headline;	// 64 = 0x40
    NSMutableArray *_localizedHeadlines;	// 72 = 0x48
    NSString *_sponsoredBy;	// 80 = 0x50
    NSString *_sponsoredByAssetURL;	// 88 = 0x58
    NSString *_sponsoredByAssetURLForDarkMode;	// 96 = 0x60
    APPBStyle *_style;	// 104 = 0x68
    int _type;	// 112 = 0x70
    struct {
        unsigned int adFormatType:1;
        unsigned int type:1;
    } _has;	// 116 = 0x74
}

+ (Class)localizedHeadlinesType;	// IMP=0x00200000000534cd
+ (Class);	// IMP=0x001000000005323f
- (void).cxx_destruct;	// IMP=0x002000000005571c
@property(retain, nonatomic) NSMutableArray *localizedHeadlines; // @synthesize localizedHeadlines=_localizedHeadlines;
@property(retain, nonatomic) NSString *sponsoredByAssetURLForDarkMode; // @synthesize sponsoredByAssetURLForDarkMode=_sponsoredByAssetURLForDarkMode;
@property(retain, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) APPBButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) NSString *sponsoredByAssetURL; // @synthesize sponsoredByAssetURL=_sponsoredByAssetURL;
@property(retain, nonatomic) APPBStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSString *sponsoredBy; // @synthesize sponsoredBy=_sponsoredBy;
@property(retain, nonatomic) NSString *accessAdCopy; // @synthesize accessAdCopy=_accessAdCopy;
@property(retain, nonatomic) NSString *adCopy; // @synthesize adCopy=_adCopy;
@property(retain, nonatomic) NSString *accessHeadline; // @synthesize accessHeadline=_accessHeadline;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000055127
- (unsigned long long)hash;	// IMP=0x0010000000054f6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000054c9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000547a9
- (void)copyTo:(id)arg1;	// IMP=0x00100000000544d1
- (void)writeTo:(id)arg1;	// IMP=0x001000000005414d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000054140
- (id)dictionaryRepresentation;	// IMP=0x001000000005358d
- (id)description;	// IMP=0x00100000000534de
- (id)localizedHeadlinesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000534b0
- (unsigned long long)localizedHeadlinesCount;	// IMP=0x0010000000053493
- (void)addLocalizedHeadlines:(id)arg1;	// IMP=0x0010000000053429
- (void)clearLocalizedHeadlines;	// IMP=0x001000000005340c
@property(readonly, nonatomic) _Bool hasSponsoredByAssetURLForDarkMode;
@property(readonly, nonatomic) _Bool hasActionURL;
@property(readonly, nonatomic) _Bool hasCtaButton;
@property(readonly, nonatomic) _Bool hasSponsoredByAssetURL;
- (int)StringAsAdFormatType:(id)arg1;	// IMP=0x001000000005331a
- (id)adFormatTypeAsString:(int)arg1;	// IMP=0x00100000000532cc
@property(nonatomic) _Bool hasAdFormatType;
@property(nonatomic) int adFormatType; // @synthesize adFormatType=_adFormatType;
@property(readonly, nonatomic) _Bool hasStyle;
- (id)elementsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000053222
- (unsigned long long)elementsCount;	// IMP=0x0010000000053205
- (void)addElements:(id)arg1;	// IMP=0x001000000005319b
- (void)clearElements;	// IMP=0x001000000005317e
@property(readonly, nonatomic) _Bool hasSponsoredBy;
@property(readonly, nonatomic) _Bool hasAccessAdCopy;
@property(readonly, nonatomic) _Bool hasAdCopy;
@property(readonly, nonatomic) _Bool hasAccessHeadline;
@property(readonly, nonatomic) _Bool hasHeadline;
- (int)StringAsType:(id)arg1;	// IMP=0x0010000000052fb9
- (id)typeAsString:(int)arg1;	// IMP=0x0010000000052f6b
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

