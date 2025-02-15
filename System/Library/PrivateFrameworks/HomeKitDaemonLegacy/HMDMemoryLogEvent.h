//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMemoryLogEvent : HMMLogEvent
{
    long long _reason;	// 8 = 0x8
    unsigned long long _currentMemoryUsage;	// 16 = 0x10
    unsigned long long _intervalMaxMemoryUsage;	// 24 = 0x18
}

@property(readonly) unsigned long long intervalMaxMemoryUsage; // @synthesize intervalMaxMemoryUsage=_intervalMaxMemoryUsage;
@property(readonly) unsigned long long currentMemoryUsage; // @synthesize currentMemoryUsage=_currentMemoryUsage;
@property(readonly) long long reason; // @synthesize reason=_reason;
- (id)initWithReason:(long long)arg1 currentMemoryUsage:(unsigned long long)arg2 intervalMaxMemoryUsage:(unsigned long long)arg3;	// IMP=0x0000000000a822ec
- (id)init;	// IMP=0x0000000000a82244
- (void)updateDiagnosticReportSignature:(id)arg1;	// IMP=0x0000000000c29040

// Remaining properties
@property(readonly, copy) NSString *diagnosticReportEventSubType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *diagnosticReportEventType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

