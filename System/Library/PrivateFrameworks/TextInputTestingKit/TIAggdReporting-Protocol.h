//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSObject-Protocol.h>

@class NSString;

@protocol TIAggdReporting <NSObject>
- (void)pushValue:(double)arg1 forKey:(NSString *)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(NSString *)arg2;
- (void)clearDistributionKey:(NSString *)arg1;
- (void)decrementKey:(NSString *)arg1;
- (void)incrementKey:(NSString *)arg1;
- (void)subtractValue:(long long)arg1 forKey:(NSString *)arg2;
- (void)addValue:(long long)arg1 forKey:(NSString *)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(NSString *)arg2;
- (void)clearScalarKey:(NSString *)arg1;
- (int)commit;
- (void)significantTimeChanged;
@end
