//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechSpeechFeatureOutputFeature
{
}

@property(nonatomic) int word_id;
@property(nonatomic) float energy;
@property(nonatomic) float pitch;
@property(nonatomic) float duration;
@property(nonatomic) float end_time;
@property(nonatomic) float begin_time;
@property(copy, nonatomic) NSString *phone_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016e154
- (id)init;	// IMP=0x000000000016e0c6

@end
