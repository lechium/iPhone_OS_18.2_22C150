//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairRecursiveLock, NSMutableDictionary;
@protocol APExpressionStorageProtocol;

@interface APExpressionReferenceLibrary : NSObject
{
    NSMutableDictionary *_referenceCache;	// 8 = 0x8
    NSMutableDictionary *_unsavedReferences;	// 16 = 0x10
    APUnfairRecursiveLock *_lock;	// 24 = 0x18
    unsigned long long _updateCount;	// 32 = 0x20
    NSObject<APExpressionStorageProtocol> *_storage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001a28b
@property(retain, nonatomic) NSObject<APExpressionStorageProtocol> *storage; // @synthesize storage=_storage;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *unsavedReferences; // @synthesize unsavedReferences=_unsavedReferences;
@property(retain, nonatomic) NSMutableDictionary *referenceCache; // @synthesize referenceCache=_referenceCache;
- (unsigned long long)referenceCount;	// IMP=0x001000000001a0ed
- (void)removeReferences:(id)arg1;	// IMP=0x0010000000019e14
- (id)addReferences:(id)arg1;	// IMP=0x0010000000019bec
- (id)addReference:(id)arg1;	// IMP=0x0010000000019662
- (id)_validateAndAddReference:(id)arg1 reference:(id)arg2;	// IMP=0x0010000000019431
- (id)referenceFromIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000018f1d
- (void)endUpdate;	// IMP=0x0010000000018e70
- (void)beginUpdate;	// IMP=0x0010000000018dd5
- (void)dealloc;	// IMP=0x0010000000018cb8
- (id)_createNodeFromDictionary:(id)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000018a61
- (void)_persistNewReferences;	// IMP=0x00100000000188a8
- (id)initWithStorage:(id)arg1;	// IMP=0x00100000000186fe

@end

