//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUserActivityType6CoreLocationTracker, HMDUserActivityType6StateEvent, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDUserActivityType6Detector
{
    HMDUserActivityType6CoreLocationTracker *_coreLocationTracker;	// 8 = 0x8
    HMDUserActivityType6StateEvent *_previousStateEvent;	// 16 = 0x10
    NSString *_reportSuppressedTimerIdentifier;	// 24 = 0x18
    NSDate *_reportSuppressionTimerPreviousStateEnd;	// 32 = 0x20
}

+ (unsigned long long)contributorType;	// IMP=0x00100000009c3a41
- (void).cxx_destruct;	// IMP=0x00000000009c39c2
@property(retain, nonatomic) NSDate *reportSuppressionTimerPreviousStateEnd; // @synthesize reportSuppressionTimerPreviousStateEnd=_reportSuppressionTimerPreviousStateEnd;
@property(retain, nonatomic) NSString *reportSuppressedTimerIdentifier; // @synthesize reportSuppressedTimerIdentifier=_reportSuppressedTimerIdentifier;
@property(retain, nonatomic) HMDUserActivityType6StateEvent *previousStateEvent; // @synthesize previousStateEvent=_previousStateEvent;
@property(retain, nonatomic) HMDUserActivityType6CoreLocationTracker *coreLocationTracker; // @synthesize coreLocationTracker=_coreLocationTracker;
- (void)handleBackgroundTaskTimerFired:(id)arg1;	// IMP=0x00000000009c3801
- (void)stateUpdated;	// IMP=0x00000000009c3766
- (void)_evaluateCurrentStateEvent;	// IMP=0x00000000009c34a2
- (_Bool)_shouldSuppressCurrentStateEvent:(id)arg1;	// IMP=0x00000000009c3144
- (void)updateLatestReportWithReason:(unsigned long long)arg1;	// IMP=0x00000000009c2ea7
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009c2d77
- (id)initWithDataSource:(id)arg1 locationManager:(id)arg2;	// IMP=0x00000000009c2c08
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000009c2b87

@end

