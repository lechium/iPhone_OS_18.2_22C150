//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10LinkDaemon25ObservationStatusRegistry : NSObject
{
    MISSING_TYPE *observationEntriesPerBundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *persistOperationQueued;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000103cb
- (id)init;	// IMP=0x0010000000010387
- (void)unregisterForAppNotificationEventsOfBundleIdentifier:(id)arg1 entityType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010b47
- (void)registerForAppNotificationEventsOfBundleIdentifier:(id)arg1 entityType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010a16

@end
