//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalableOperation.h"

@class NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface HDFreezeSeriesOperation : HDJournalableOperation
{
    NSUUID *_identifier;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    Class _entityClass;	// 24 = 0x18
    NSUUID *_frozenIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000036b8f6
- (void).cxx_destruct;	// IMP=0x000000000036bb8a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000036bad5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036b8fe
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000036b88d

@end

