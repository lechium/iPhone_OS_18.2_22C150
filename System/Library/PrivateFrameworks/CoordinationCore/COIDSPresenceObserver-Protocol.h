//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COIDSDiscoveryRecord;

@protocol COIDSPresenceObserver <NSObject>

@optional
- (void)didRemoveDevice:(COIDSDiscoveryRecord *)arg1;
- (void)didAddDevice:(COIDSDiscoveryRecord *)arg1;
@end
