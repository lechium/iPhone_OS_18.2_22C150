//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class NSArray, SFCollaborationItemsProvider;
@protocol SFCollaborationService;

@protocol SFCollaborationItemsProviderDelegate <NSObject>
- (id <SFCollaborationService>)collaborationServiceForItemsProvider:(SFCollaborationItemsProvider *)arg1;
- (NSArray *)collaborationItemsProvider:(SFCollaborationItemsProvider *)arg1 resolveActivityItem:(id)arg2;
@end
