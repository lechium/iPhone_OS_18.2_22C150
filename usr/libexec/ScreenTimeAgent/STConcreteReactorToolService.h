//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STReactorToolServiceDelegate;

@interface STConcreteReactorToolService : NSObject
{
    id <STReactorToolServiceDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000021eda
@property __weak id <STReactorToolServiceDelegate> delegate; // @synthesize delegate;
- (void)currentMessageTransportReachabilityMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021e4a
- (void)scheduleFailStuckMessagesActivity:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021de1
- (void)scheduleStoreCleanupActivity:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021d78
- (void)scheduleMessageRetryActivity:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021d0f
- (void)shutdownReactorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021ca6

@end

