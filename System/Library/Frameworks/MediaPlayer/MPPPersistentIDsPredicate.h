//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface MPPPersistentIDsPredicate : PBCodable
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _persistentIDs;	// 8 = 0x8
    _Bool _shouldContain;	// 32 = 0x20
    struct {
        unsigned int shouldContain:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
- (unsigned long long)hash;	// IMP=0x000000000030af7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030aeeb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030ae69
- (void)copyTo:(id)arg1;	// IMP=0x000000000030ad88
- (void)writeTo:(id)arg1;	// IMP=0x000000000030acea
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030acdd
- (id)dictionaryRepresentation;	// IMP=0x000000000030abf5
- (id)description;	// IMP=0x000000000030ab46
- (void)setPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000030ab2f
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000030aa5e
- (void)addPersistentIDs:(long long)arg1;	// IMP=0x000000000030aa4a
- (void)clearPersistentIDs;	// IMP=0x000000000030aa39
@property(readonly, nonatomic) long long *persistentIDs;
@property(readonly, nonatomic) unsigned long long persistentIDsCount;
@property(nonatomic) _Bool hasShouldContain;
- (void)dealloc;	// IMP=0x000000000030a991

@end

