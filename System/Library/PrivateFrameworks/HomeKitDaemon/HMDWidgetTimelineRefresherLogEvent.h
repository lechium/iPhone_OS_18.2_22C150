//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDWidgetTimelineRefresherLogEvent : HMMLogEvent
{
    NSString *_kind;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000095e764
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (id)initWithKind:(id)arg1 reason:(id)arg2;	// IMP=0x000000000095e651

@end
