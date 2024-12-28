//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDTimerTriggerModel
{
}

+ (id)properties;	// IMP=0x00100000004987f2
+ (Class)cd_entityClass;	// IMP=0x0010000000a51a70
+ (id)cd_parentReferenceName;	// IMP=0x0010000000a51a63
- (id)createPayload;	// IMP=0x0000000000498542
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000a516ef
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000a51482

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;
@property(copy, nonatomic) NSData *fireDateTimeZone; // @dynamic fireDateTimeZone;
@property(copy, nonatomic) NSData *fireRepeatInterval; // @dynamic fireRepeatInterval;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recurrences; // @dynamic recurrences;
@property(copy, nonatomic) NSString *significantEvent; // @dynamic significantEvent;
@property(copy, nonatomic) NSData *significantEventOffset; // @dynamic significantEventOffset;
@property(readonly) Class superclass;

@end
