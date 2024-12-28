//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUInfoCardContentProtocol-Protocol.h"

@class MKPlaceCardActionItem, NSArray, NSDictionary;
@protocol GEOTransitLineItem;

@protocol MULineCardConforming <MUInfoCardContentProtocol>
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) id <GEOTransitLineItem> transitLineItem;
- (void)performAction:(MKPlaceCardActionItem *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (NSArray *)createMenuActions;
- (void)resetNearestStation;
- (void)setTransitLineItem:(id <GEOTransitLineItem>)arg1 loading:(_Bool)arg2;
@end
