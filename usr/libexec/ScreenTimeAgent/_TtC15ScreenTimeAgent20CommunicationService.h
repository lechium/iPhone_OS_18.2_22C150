//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSXPCListenerEndpoint;

@interface _TtC15ScreenTimeAgent20CommunicationService : _TtCs12_SwiftObject
{
    MISSING_TYPE *$__lazy_storage_$_logger;	// 0 = 0x0
}

- (void)authenticatePasscodeForUserWithEndpoint:(NSXPCListenerEndpoint *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x00400000000f1110
- (void)currentCommunicationConfigurationWithCompletionHandler:(void (^)(STCommunicationConfiguration *, NSError *))arg1;	// IMP=0x00100000000f08c0

@end

