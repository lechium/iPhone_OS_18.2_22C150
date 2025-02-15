//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IdenticallyOrderedDataSource : NSObject
{
    NSArray *_orderedObjects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000055d857
@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
- (id)viewForHeaderInSection:(long long)arg1 isFirstNonEmptySection:(_Bool)arg2;	// IMP=0x001000000055d836
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x001000000055d82e
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000055d750
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x001000000055d70c
@property(readonly, nonatomic) long long numberOfSections;
- (id)initWithObjects:(id)arg1;	// IMP=0x001000000055d68e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

