//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSQueryGenerationToken.h"

@class NSString, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _NSQueryGenerationToken : NSQueryGenerationToken
{
    NSString *_storeIdentifier;	// 8 = 0x8
    _PFWeakReference *_store;	// 16 = 0x10
    id _generationIdentifier;	// 24 = 0x18
    struct _queryGenerationFlags {
        unsigned int _isCompound:1;
        unsigned int _isSingleton:1;
        unsigned int _freeValueOnDealloc:1;
        unsigned int _isUnmoored:1;
        unsigned int _reservedFlags:12;
    } _flags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000fcf13
- (id)persistentStoreCoordinator;	// IMP=0x00000000000fe581
- (id)description;	// IMP=0x00000000000fd89f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fd7f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fd56b
- (id)autorelease;	// IMP=0x00000000000fd52f
- (oneway void)release;	// IMP=0x00000000000fd4f3
- (id)retain;	// IMP=0x00000000000fd4b7
- (void)dealloc;	// IMP=0x00000000000fd28d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fd154
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fcf1b

@end
