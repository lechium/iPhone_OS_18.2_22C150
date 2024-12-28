//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyle
{
    WDStyle *_baseStyle;	// 24 = 0x18
    _Bool _isInTextFrame;	// 32 = 0x20
}

+ (_Bool)isShadingNull:(id)arg1;	// IMP=0x006000000015ac9e
- (void).cxx_destruct;	// IMP=0x00000000004559bb
- (void)addParagraphProperties:(id)arg1;	// IMP=0x00000000000eee88
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1;	// IMP=0x000000000045598d
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;	// IMP=0x000000000045595f
- (_Bool)isRTLWithOverridesFromProperties:(id)arg1;	// IMP=0x0000000000455831
- (void)addParagraphStyleCharacterProperties:(id)arg1;	// IMP=0x00000000000f4d35
- (void)addParagraphPropertiesFromStyle;	// IMP=0x0000000000455814
- (void)addParagraphPropertiesFromStyle:(id)arg1;	// IMP=0x000000000045573b
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(_Bool)arg2;	// IMP=0x00000000000eedf4
- (void)mapBorders:(id)arg1;	// IMP=0x00000000000efae0

@end
