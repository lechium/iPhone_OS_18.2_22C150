//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUICollisionSafeIdentifier : NSObject
{
    NSObject<NSCopying> *_rootIdentifier;	// 8 = 0x8
    unsigned long long _collisionCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000014635
@property(nonatomic) unsigned long long collisionCount; // @synthesize collisionCount=_collisionCount;
@property(copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // @synthesize rootIdentifier=_rootIdentifier;
- (id)description;	// IMP=0x000000000001458a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000143d5
- (unsigned long long)hash;	// IMP=0x0000000000014372
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001432a
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;	// IMP=0x00000000000142ac

@end

