//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudKitSetupActivity : NSObject
{
    _Bool _succeeded;	// 8 = 0x8
    NSString *_activityType;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSUUID *_parentActivityIdentifier;	// 32 = 0x20
    NSUUID *_storeIdentifier;	// 40 = 0x28
    long long _eventType;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
    NSDate *_endDate;	// 64 = 0x40
    NSString *_phase;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000b41c20
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(readonly, nonatomic) NSString *phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) NSUUID *parentActivityIdentifier; // @synthesize parentActivityIdentifier=_parentActivityIdentifier;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (id)description;	// IMP=0x0000000000b41b10
- (void)dealloc;	// IMP=0x0000000000b41ae1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b418d9

@end
