//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDMath
{
    int _justification;	// 8 = 0x8
    WDCharacterProperties *_properties;	// 16 = 0x10
    NSString *_xmlBlob;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000413d16
@property(readonly, nonatomic) NSString *xmlBlob; // @synthesize xmlBlob=_xmlBlob;
@property(retain, nonatomic) WDCharacterProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) int justification; // @synthesize justification=_justification;
- (id)description;	// IMP=0x0000000000413c82
- (void)clearProperties;	// IMP=0x0000000000413c61
- (int)runType;	// IMP=0x0000000000413c56
- (id)initWithParagraph:(id)arg1 xmlBlob:(id)arg2;	// IMP=0x0000000000413b7a

@end
