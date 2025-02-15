//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore, NEKStore, NSString;

@interface NEKStoreRoller : NSObject
{
    long long _counter;	// 8 = 0x8
    NEKStore *_eventStore;	// 16 = 0x10
    NSString *_cause;	// 24 = 0x18
    EKEventStore *_lastStore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000079fed
- (id)someStore;	// IMP=0x0010000000079fc8
- (id)fetch:(id)arg1;	// IMP=0x0010000000079f62
- (void)_bump;	// IMP=0x0010000000079efc
- (id)initWithEventStore:(id)arg1 cause:(id)arg2;	// IMP=0x0010000000079e45

@end

