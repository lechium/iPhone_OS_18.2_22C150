//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HearingModeUI/NSObject-Protocol.h>

@class HKAudiogramSample, NSArray;

@protocol HMHearingAidEnrollmentDelegate <NSObject>
- (void)dismissHearingAidEnrollment;
- (void)showInstructionForUse;
- (void)selectAudiogram:(HKAudiogramSample *)arg1;
- (NSArray *)getInvalidAudiograms;
- (NSArray *)getValidAudiograms;
- (void)completeStep:(int)arg1;
@end
