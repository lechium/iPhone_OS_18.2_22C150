//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageExceedBudgetLogEvent : HMMLogEvent
{
    struct _HMFRate _budgetRate;	// 8 = 0x8
}

+ (id)eventWithBudgetRate:(struct _HMFRate)arg1;	// IMP=0x00100000005f5d93
@property(readonly, nonatomic) struct _HMFRate budgetRate; // @synthesize budgetRate=_budgetRate;
- (id)initWithBudgetRate:(struct _HMFRate)arg1;	// IMP=0x00000000005f5d28
- (void)updateDiagnosticReportSignature:(id)arg1;	// IMP=0x0000000000f85d6c

// Remaining properties
@property(readonly, copy) NSString *diagnosticReportEventSubType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *diagnosticReportEventType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end
