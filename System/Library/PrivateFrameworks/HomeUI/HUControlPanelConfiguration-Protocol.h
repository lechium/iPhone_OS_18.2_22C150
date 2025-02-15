//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlItem, HFControlPanelItem, HFServiceItem, HFValueTransformer, HUControlPanelCell, NSString;
@protocol HUControlPanelRule;

@protocol HUControlPanelConfiguration <NSObject>
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;
- (void)setupControlsForCell:(HUControlPanelCell *)arg1 item:(HFControlPanelItem *)arg2;

@optional
- (NSString *)sectionFooterForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (NSString *)sectionTitleForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (_Bool)shouldShowSectionFooterForItem:(HFControlPanelItem *)arg1;
- (_Bool)shouldShowSectionTitleForItem:(HFControlPanelItem *)arg1;
- (HFValueTransformer *)valueTransformerForControlItem:(HFControlItem *)arg1;
@end

