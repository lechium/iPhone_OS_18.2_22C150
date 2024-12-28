//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class NSString, SectionHeaderView;

@interface SectionHeaderCollectionReusableView : UICollectionReusableView
{
    SectionHeaderView *_sectionHeaderView;	// 8 = 0x8
}

+ (double)estimatedHeight;	// IMP=0x002000000054b57b
+ (double)heightWhenFirstNonEmptySection:(_Bool)arg1 title:(id)arg2 actionTitle:(id)arg3 availableWidth:(double)arg4 traitCollection:(id)arg5;	// IMP=0x001000000054b55f
+ (id)reuseIdentifier;	// IMP=0x001000000054b54d
- (void).cxx_destruct;	// IMP=0x002000000054c223
@property(retain, nonatomic) SectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void)setActionTitle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000054c141
- (id)initWithTitle:(id)arg1 isFirstNonEmptySection:(_Bool)arg2;	// IMP=0x001000000054c0cf
@property(copy, nonatomic) CDUnknownBlockType actionHandler;
@property(nonatomic) _Bool showsBottomHairline;
@property(nonatomic) _Bool firstNonEmptySection;
@property(retain, nonatomic) NSString *actionTitle;
@property(retain, nonatomic) NSString *title;
- (void)setAccessibilityIdentifiersWithBaseString:(id)arg1;	// IMP=0x001000000054bbbd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000054bad9
- (void)layoutMarginsDidChange;	// IMP=0x001000000054ba98
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x001000000054b9af
- (void)prepareForReuse;	// IMP=0x001000000054b945
- (void)setFirstNonEmptySection:(_Bool)arg1 topMargin:(double)arg2;	// IMP=0x001000000054b8f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000054b594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
