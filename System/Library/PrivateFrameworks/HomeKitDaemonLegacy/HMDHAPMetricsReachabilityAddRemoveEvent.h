//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDHAPMetricsReachabilityAddRemoveEvent
{
    unsigned long long _addRemoveEvent;	// 8 = 0x8
    NSNumber *_linkType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009ca7c7
@property(readonly, nonatomic) NSNumber *linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned long long addRemoveEvent; // @synthesize addRemoveEvent=_addRemoveEvent;
- (id)coreAnalyticsEventDictionary;	// IMP=0x00000000009ca6be
- (id)coreAnalyticsEventName;	// IMP=0x00000000009ca6b1
- (id)initWithAccessory:(id)arg1 hmdAddRemoveEvent:(unsigned long long)arg2 forLinkType:(id)arg3;	// IMP=0x00000000009ca627

@end

