//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalableOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HDOntologyShardRegistryInsertOperation : HDJournalableOperation
{
    NSArray *_entries;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001834c2
- (void).cxx_destruct;	// IMP=0x00000000001835c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001834f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001834ca
- (id)transactionContext;	// IMP=0x0000000000183461
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001831e2
- (id)init;	// IMP=0x0000000000183168

@end

