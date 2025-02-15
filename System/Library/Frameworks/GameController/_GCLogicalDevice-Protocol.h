//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCDevice-Protocol.h>

@class NSSet, _GCDeviceConfiguration;

@protocol _GCLogicalDevice <_GCDevice>
@property(readonly) NSSet *underlyingDevices;
@property(readonly) _GCDeviceConfiguration *configuration;

@optional
- (void)deactivateLogical;
- (void)activateLogical;
@end

