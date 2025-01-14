//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCDefaultLockupTheme : NSObject
{
}

+ (id)offerStatusLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001efc4
+ (void)updateOfferStatusLabelColorForView:(id)arg1;	// IMP=0x001000000001ef7f
+ (long long)numberOfLinesInSubtitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ef6e
+ (id)subtitleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ee5a
+ (long long)numberOfLinesInTitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ee49
+ (id)titleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ecf0
+ (id)headingLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ec59
+ (id)headingLabelColorForView:(id)arg1;	// IMP=0x001000000001ebf0
+ (long long)preferredLabelAlignmentForSize:(id)arg1;	// IMP=0x001000000001eb5d
+ (struct CGSize)preferredIconSizeForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001eafb
+ (id)sharedTheme;	// IMP=0x001000000001ea9b
- (void)applyToLockupContentView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000001efef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001eaf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

