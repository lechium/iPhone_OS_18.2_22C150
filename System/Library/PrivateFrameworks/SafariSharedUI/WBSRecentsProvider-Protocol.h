//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class LPLinkMetadata, NSSet, WBSRecentItem, WBSRecentsStore;

@protocol WBSRecentsProvider <NSObject>
@property(readonly, nonatomic) NSSet *recentItems;
@property(nonatomic) __weak WBSRecentsStore *recentsStore;

@optional
- (void)updateRecentItem:(WBSRecentItem *)arg1 withLinkMetadata:(LPLinkMetadata *)arg2;
@end

