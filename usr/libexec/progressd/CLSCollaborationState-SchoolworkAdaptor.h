//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSCollaborationState.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSCollaborationState (SchoolworkAdaptor)
+ (id)entityWillChangeNotificationName;	// IMP=0x00200000001915fb
+ (long long)migrationOrder;	// IMP=0x00100000001915f0
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001912d9
+ (id)hashableColumnNames;	// IMP=0x00100000001904b1
+ (id)entityName;	// IMP=0x00100000001904a4
- (_Bool)isAskedToTryAgain;	// IMP=0x00200000000b6ce9
- (_Bool)isReturnedActivity;	// IMP=0x00100000000b6c96
- (_Bool)isCompletedActivity;	// IMP=0x00100000000b6bd0
- (_Bool)isIncompleteActivity;	// IMP=0x00100000000b6b81
- (_Bool)isCompletedHandout;	// IMP=0x00100000000b6b32
- (_Bool)isIncompleteHandout;	// IMP=0x00100000000b6adb
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0010000000191455
- (void)bindTo:(id)arg1;	// IMP=0x0010000000190d47
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000001908e0
@property(readonly, nonatomic) unsigned long long changeHash;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisDeleteTracked

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
