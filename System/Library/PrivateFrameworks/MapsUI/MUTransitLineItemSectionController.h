//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, NSString, UIView, UIViewController;
@protocol GEOTransitLineItem, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitLineItemSectionController : NSObject
{
    _Bool _active;	// 8 = 0x8
    UIView *_sectionView;	// 16 = 0x10
    MUPlaceCallToActionAppearance *_submissionStatus;	// 24 = 0x18
    id <MUInfoCardAnalyticsDelegate> _analyticsDelegate;	// 32 = 0x20
    id <GEOTransitLineItem> _lineItem;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c95fa
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus; // @synthesize submissionStatus=_submissionStatus;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)revealedAnalyticsModule;	// IMP=0x00000000000c9594
- (id)analyticsModule;	// IMP=0x00000000000c957b
- (id)infoCardChildUnactionableUIElements;	// IMP=0x00000000000c956e
- (id)infoCardChildPossibleActions;	// IMP=0x00000000000c9561
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
- (id)draggableContent;	// IMP=0x00000000000c9541
@property(readonly, nonatomic) UIViewController *sectionViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,R,N

@property(readonly, nonatomic) NSArray *sectionViews;
@property(readonly, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
- (id)initWithTransitLineItem:(id)arg1;	// IMP=0x00000000000c93e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
