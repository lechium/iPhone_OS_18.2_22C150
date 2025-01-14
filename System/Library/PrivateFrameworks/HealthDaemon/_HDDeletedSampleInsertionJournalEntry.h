//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalEntry.h"

@class HDCodableObjectCollection, HDDataOriginProvenance, NSArray;

__attribute__((visibility("hidden")))
@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry
{
    HDCodableObjectCollection *_objectCollection;	// 8 = 0x8
    NSArray *_samples;	// 16 = 0x10
    HDDataOriginProvenance *_provenance;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000079e59e
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x000000000079e159
- (void).cxx_destruct;	// IMP=0x000000000079e89c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000079e689
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000079e5a6

@end

