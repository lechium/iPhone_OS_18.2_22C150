//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, NSMutableDictionary;

@interface APDataAdaptorRepository : NSObject
{
    NSMutableDictionary *_registeredAdaptors;	// 8 = 0x8
    NSMutableDictionary *_adaptors;	// 16 = 0x10
    APUnfairLock *_lock;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000016ee5
+ (id)sharedRepository;	// IMP=0x0010000000016e90
- (void).cxx_destruct;	// IMP=0x00200000000177a7
@property(retain) APUnfairLock *lock; // @synthesize lock=_lock;
@property(retain) NSMutableDictionary *adaptors; // @synthesize adaptors=_adaptors;
@property(retain) NSMutableDictionary *registeredAdaptors; // @synthesize registeredAdaptors=_registeredAdaptors;
- (void)unregisterAdaptorClass:(Class)arg1;	// IMP=0x0010000000017651
- (id)registerAdaptorClass:(Class)arg1;	// IMP=0x0010000000017304
- (id)adaptorWithIdentifier:(id)arg1;	// IMP=0x001000000001713e
- (id)init;	// IMP=0x0010000000017062
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000016ff2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000016eed

@end
