//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFTriggerNaturalLanguageOptions, HMHome, NAFuture, NSArray, NSString;

@protocol HFTimeEventBuilder <NSObject>
- (NSString *)naturalLanguageNameWithOptions:(HFTriggerNaturalLanguageOptions *)arg1 recurrences:(NSArray *)arg2;
- (NSString *)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(HMHome *)arg2 recurrences:(NSArray *)arg3;
- (NAFuture *)performValidation;
@end

