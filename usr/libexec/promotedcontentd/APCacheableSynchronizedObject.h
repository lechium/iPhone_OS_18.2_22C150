//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APUnfairRecursiveLock;

@interface APCacheableSynchronizedObject
{
    APUnfairRecursiveLock *_lock;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001419e3
- (void).cxx_destruct;	// IMP=0x0020000000141b38
@property(readonly, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
- (void)unlockObject;	// IMP=0x0010000000141aea
- (void)lockObject;	// IMP=0x0010000000141aa5
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000141a48
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001419eb

@end

