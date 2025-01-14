//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSSliderAnswerFormat.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSSliderAnswerFormat (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000000b022f
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000b0193
+ (id)entityName;	// IMP=0x00100000000afca6
+ (id)recordType;	// IMP=0x00100000001aae7a
- (void)bindTo:(id)arg1;	// IMP=0x00200000000afedc
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000afcb3
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000cc144
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x00100000001ab340
- (long long)syncBackend:(id)arg1;	// IMP=0x00100000001ab284
- (void)populate:(id)arg1;	// IMP=0x00100000001ab089
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000001aae87

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

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

