//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKEnvironment, NSString;
@protocol NEKChangeObserverDelegate, OS_dispatch_queue;

@interface NEKChangeObserver : NSObject
{
    NEKEnvironment *_environment;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *;	// 16 = 0x10
    NSString *_clientName;	// 24 = 0x18
    id <NEKChangeObserverDelegate> _delegate;	// 32 = 0x20
}

+ (id)changeObserverForReminderWithQueue:(id)arg1 databaseController:(id)arg2 environment:(id)arg3;	// IMP=0x002000000004047b
+ (id)changeObserverForEventWithQueue:(id)arg1 databaseController:(id)arg2 environment:(id)arg3;	// IMP=0x00100000000403db
- (void).cxx_destruct;	// IMP=0x0020000000040558
@property(nonatomic) __weak id <NEKChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)environment;	// IMP=0x001000000004051b
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000040355
- (id)init;	// IMP=0x0010000000040347

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
