//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel : UILabel
{
    NSDictionary *_regularTextAttributes;	// 160 = 0xa0
    NSDictionary *_effectiveTextAttributes;	// 168 = 0xa8
}

+ (id)defaultRegularContentSizeTextAttributes;	// IMP=0x00600000012fbeb2
- (void).cxx_destruct;	// IMP=0x00000000012fc6ae
@property(readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
- (void)_ensureCapableOfCalculatingBaselineOffsets;	// IMP=0x00000000012fc5f3
- (id)_validatedAttributedString:(id)arg1;	// IMP=0x00000000012fc51d
- (double)_effectiveVerticalSpacingToSpinner;	// IMP=0x00000000012fc4a0
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;	// IMP=0x00000000012fc31a
- (void)setEffectiveTextAttributes:(id)arg1;	// IMP=0x00000000012fc24c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000012fc1d0
- (void)setAttributedText:(id)arg1;	// IMP=0x00000000012fc100
- (void)setText:(id)arg1;	// IMP=0x00000000012fc087
@property(readonly, nonatomic) double verticalSpacingToSpinner;
- (id)initWithRegularTextAttributes:(id)arg1;	// IMP=0x00000000012fbf7f

@end
