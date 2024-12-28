//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMMetricsCollector.h>

@interface IMMetricsCollector (ChatKit)
- (void)trackDidConfirmExpressiveTextWithContext:(id)arg1 effectCount:(long long)arg2 minimumEffectLength:(long long)arg3 maximumEffectLength:(long long)arg4 averageEffectLength:(long long)arg5 medianEffectLength:(long long)arg6 effectLengthStandardDeviation:(long long)arg7;	// IMP=0x0090000000824520
- (void)trackDidSelectTextStyle:(unsigned long long)arg1 styleLength:(long long)arg2;	// IMP=0x00900000008241d0
- (void)trackDidSelectTextEffect:(long long)arg1 effectLength:(long long)arg2;	// IMP=0x0090000000823fe0
@end
