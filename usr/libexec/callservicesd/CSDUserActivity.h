//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserActivity;

@interface CSDUserActivity : NSObject
{
    NSUserActivity *_userActivity;	// 8 = 0x8
    NSString *_dynamicIdentifier;	// 16 = 0x10
    NSString *_originatingDeviceType;	// 24 = 0x18
}

+ (id)_userActivityTypeStringForActivityType:(unsigned int)arg1;	// IMP=0x00400000001dc247
+ (unsigned int)activityTypeForUserActivityTypeString:(id)arg1;	// IMP=0x00100000001dc007
+ (_Bool)activityTypeRequiresBestAppSuggestionListener:(unsigned int)arg1;	// IMP=0x00100000001dbff5
+ (_Bool)activityTypeSupportsDynamicIdentifierRegistration:(unsigned int)arg1;	// IMP=0x00100000001dbfdc
+ (void)unregisterActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x00100000001dbe75
+ (void)registerActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x00100000001dbd0e
+ (id)activityWithType:(unsigned int)arg1 dynamicIdentifier:(id)arg2 userInfo:(id)arg3 originatingDeviceType:(id)arg4;	// IMP=0x00100000001dba68
+ (id)appHistoryActivityWithTitle:(id)arg1 subtitle:(id)arg2 keywords:(id)arg3 userInfo:(id)arg4;	// IMP=0x00100000001db83c
- (void).cxx_destruct;	// IMP=0x00200000001dc688
@property(retain, nonatomic) NSString *originatingDeviceType; // @synthesize originatingDeviceType=_originatingDeviceType;
@property(retain, nonatomic) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)invalidate;	// IMP=0x00100000001dc548
- (void)resignCurrent;	// IMP=0x00100000001dc459
- (void)becomeCurrent;	// IMP=0x00100000001dc36a
- (void)addUserInfoEntriesFromDictionary:(id)arg1;	// IMP=0x00100000001dc2c8
- (id)description;	// IMP=0x00100000001dc0c7

@end

