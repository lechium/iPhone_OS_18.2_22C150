//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIAppDocumentUpdateEvent.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent
{
    NSSet *_removedCanonicalIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ead17
@property(copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;
- (id)description;	// IMP=0x00000000000eabaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eaa4c
- (unsigned long long)hash;	// IMP=0x00000000000ea9cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea9c4
- (id)dictionaryRepresentation;	// IMP=0x00000000000ea8cd
- (id)initWithRemovedCanonicalIDs:(id)arg1;	// IMP=0x00000000000ea7e9
- (id)initWithDescriptor:(id)arg1;	// IMP=0x00000000000ea77a

@end

