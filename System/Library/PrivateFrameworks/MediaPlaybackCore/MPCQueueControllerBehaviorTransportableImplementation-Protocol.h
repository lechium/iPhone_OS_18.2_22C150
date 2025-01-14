//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCQueueControllerBehaviorImplementation-Protocol.h>

@class NSString;
@protocol MPCQueueControllerBehaviorTransportableExtension, MPCQueueControllerSessionTypesInvalidatable;

@protocol MPCQueueControllerBehaviorTransportableImplementation <MPCQueueControllerBehaviorImplementation>
+ (id <MPCQueueControllerBehaviorTransportableExtension>)makeExtensionWithInvalidatable:(id <MPCQueueControllerSessionTypesInvalidatable>)arg1;
- (_Bool)isExportableSessionType:(NSString *)arg1 forContentItemID:(NSString *)arg2 extension:(id <MPCQueueControllerBehaviorTransportableExtension>)arg3 reason:(id *)arg4;
@end

