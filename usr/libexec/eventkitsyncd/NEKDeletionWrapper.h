//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEKDeletionWrapper : NSObject
{
    int _type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_calendarIdentifier;	// 24 = 0x18
}

+ (id)deletionWrapperForSourceID:(id)arg1;	// IMP=0x0020000000018274
+ (id)deletionWrapperForRecordID:(id)arg1 eventStore:(id)arg2;	// IMP=0x0010000000018049
+ (id)deletionWrapperForObjectID:(id)arg1 deletedReminderAndListMapping:(id)arg2;	// IMP=0x0010000000033042
- (void).cxx_destruct;	// IMP=0x002000000003129a
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
@property(readonly, copy) NSString *description;
- (int)type;	// IMP=0x00100000000311ae
- (id)calendarIdentifier;	// IMP=0x00100000000311a0
- (id)identifier;	// IMP=0x0010000000031192
- (id)initWithIdentifier:(id)arg1 calendarIdentifier:(id)arg2 type:(int)arg3;	// IMP=0x0010000000031101

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

