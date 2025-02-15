//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/NSObject-Protocol.h>

@class NSArray, NSXPCInterface, Protocol;

@protocol APXPCActionReceiver <NSObject>
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (void)connectionInvalidated;
- (void)connectionInterrupted;

@optional
- (void)extendCollectionClassesForRemoteInterface:(NSXPCInterface *)arg1;
- (void)extendCollectionClassesForExportedInterface:(NSXPCInterface *)arg1;
- (NSArray *)requiredEntitlements;
- (Protocol *)remoteObjectInterface;
@end

