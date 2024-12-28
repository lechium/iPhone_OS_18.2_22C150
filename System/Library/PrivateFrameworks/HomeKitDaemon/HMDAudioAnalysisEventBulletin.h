//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccessoryNameComposer, NSDate, NSString, NSUUID;
@protocol HMDAudioAnalysisEventSubscriberContext;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisEventBulletin : NSObject
{
    NSUUID *_notificationUUID;	// 8 = 0x8
    NSString *_threadIdentifier;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    unsigned long long _reason;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSDate *_dateOfOccurrence;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
    NSString *_soundIdentifier;	// 64 = 0x40
    NSUUID *_accessoryUUID;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    id <HMDAudioAnalysisEventSubscriberContext> _context;	// 88 = 0x58
    HMDAccessoryNameComposer *_accessoryNameComposer;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000191887
- (void).cxx_destruct;	// IMP=0x0000000000191807
@property(retain, nonatomic) HMDAccessoryNameComposer *accessoryNameComposer; // @synthesize accessoryNameComposer=_accessoryNameComposer;
@property(readonly) id <HMDAudioAnalysisEventSubscriberContext> context; // @synthesize context=_context;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy) NSUUID *notificationUUID; // @synthesize notificationUUID=_notificationUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019147e
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001910d9
- (id)serialize;	// IMP=0x0000000000190d9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000190b18
- (id)localizedKeyForBody;	// IMP=0x0000000000190ab9
- (void)configureAccessoryNameComposer;	// IMP=0x000000000019095f
- (void)configureWithContext:(id)arg1;	// IMP=0x000000000019091d
- (id)initWithReason:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 notificationUUID:(id)arg4 state:(unsigned long long)arg5 soundIdentifier:(id)arg6 name:(id)arg7 threadIdentifier:(id)arg8 accessoryUUID:(id)arg9 title:(id)arg10;	// IMP=0x000000000019076e
- (id)stringForAudioAnalysisReasonWithHomeName:(id)arg1;	// IMP=0x0000000000190673
- (id)localizedKeyForTitle;	// IMP=0x00000000001905bb
- (id)localizedKeyForEventEndWithDropIn:(_Bool)arg1 homeName:(id)arg2;	// IMP=0x0000000000190163
- (id)localizedKeyForEventStartWithDropIn:(_Bool)arg1 homeName:(id)arg2;	// IMP=0x000000000018fe48
- (void)setNotificationUUID:(id)arg1;	// IMP=0x000000000018fe37

@end
