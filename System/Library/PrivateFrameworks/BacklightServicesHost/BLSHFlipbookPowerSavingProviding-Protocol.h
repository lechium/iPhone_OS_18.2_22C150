//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@protocol BLSHFlipbookPowerSavingProviding <NSObject>
@property(readonly, nonatomic, getter=isFlipbookPowerSavingEnabled) _Bool flipbookPowerSavingEnabled;
- (void)decrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
- (void)incrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
@end

