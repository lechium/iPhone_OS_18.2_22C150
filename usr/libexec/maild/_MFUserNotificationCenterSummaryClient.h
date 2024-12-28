//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFLibraryMessage, MFUserNotificationCenterController, NSString;

@interface _MFUserNotificationCenterSummaryClient : NSObject
{
    MFLibraryMessage *_message;	// 8 = 0x8
    unsigned long long _attempts;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    double _ordering;	// 32 = 0x20
    MFUserNotificationCenterController *_observer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000b86c4
@property __weak MFUserNotificationCenterController *observer; // @synthesize observer=_observer;
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00100000000b8293
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x00100000000b80b2
- (_Bool)wantsContentsOfType:(long long)arg1;	// IMP=0x00100000000b80a2
- (id)message;	// IMP=0x00100000000b8094
- (double)ordering;	// IMP=0x00100000000b8089
- (long long)priority;	// IMP=0x00100000000b807f
- (unsigned long long)_calculateOrdering;	// IMP=0x00100000000b800a
- (long long)_calculatePriority;	// IMP=0x00100000000b7fe8
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
- (id)initWithObserver:(id)arg1 message:(id)arg2;	// IMP=0x00100000000b7de9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
