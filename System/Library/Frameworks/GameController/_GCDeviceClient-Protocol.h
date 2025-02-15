//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol _GCIPCObjectRegistry, _GCIPCServiceRegistry;

@protocol _GCDeviceClient
@property(readonly) id <_GCIPCServiceRegistry> IPCServiceRegistry;
@property(readonly) id <_GCIPCObjectRegistry> IPCObjectRegistry;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid;
- (id)addInvalidationHandler:(void (^)(void))arg1;
@end

