//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TransitDirectionsListItem, UIView;
@protocol TransitDirectionsExpandableCellDelegate;

@interface TransitDirectionsExpandStopsCollectionViewCell
{
    id <TransitDirectionsExpandableCellDelegate> _expandableCellDelegate;	// 16 = 0x10
}

+ (Class)stepViewClass;	// IMP=0x0020000000cbfbcf
- (void).cxx_destruct;	// IMP=0x0020000000cbfc72
@property(nonatomic) __weak id <TransitDirectionsExpandableCellDelegate> expandableCellDelegate; // @synthesize expandableCellDelegate=_expandableCellDelegate;
- (void)updateExpandCollapseStyling;	// IMP=0x0010000000cbfc3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long displayOptions;
@property(readonly) unsigned long long hash;
@property(nonatomic) double leadingInstructionMargin;
@property(nonatomic) long long navigationState;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *trailingView;
@property(readonly, nonatomic) TransitDirectionsListItem *transitListItem;
@property(nonatomic) _Bool useNavigationMetrics;

@end
