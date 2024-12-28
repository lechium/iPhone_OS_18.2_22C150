//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILabel.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface OBTemplateHeaderDetailLabel : UILabel
{
    NSNumber *_spansAllLinesOverride;	// 8 = 0x8
    struct _NSRange _titleRange;	// 16 = 0x10
    struct _NSRange _bodyRange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004b6bf
@property(retain, nonatomic) NSNumber *spansAllLinesOverride; // @synthesize spansAllLinesOverride=_spansAllLinesOverride;
@property(nonatomic) struct _NSRange bodyRange; // @synthesize bodyRange=_bodyRange;
@property(nonatomic) struct _NSRange titleRange; // @synthesize titleRange=_titleRange;
- (void)overrideSpansAllLines:(unsigned long long)arg1;	// IMP=0x000000000004b53c
- (void)updateAttributedTextWithString:(id)arg1;	// IMP=0x000000000004b233
- (void)setText:(id)arg1;	// IMP=0x000000000004b1c5
- (void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2;	// IMP=0x000000000004b09a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004b029

@end
