//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint;

@protocol AUCrashHandlerServiceProtocol
- (void)removeCrashObserver:(void (^)(_Bool))arg1;
- (void)addCrashObserverForXPCEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)addCrashObserverForToken:(CDStruct_6ad76789)arg1 withReply:(void (^)(NSError *))arg2;
@end
