//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDManagedObject : NSManagedObject
{
}

+ (id)logCategory;	// IMP=0x0010000000a73217
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0000000000a731c4
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0000000000a73171
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000a7309e
@property(readonly, copy, nonatomic) NSString *redactedDescription;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

