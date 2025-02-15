//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFeedbackGeneratorConfiguration.h"

@class MISSING_TYPE, NSArray, _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _TtC5UIKit39_UICanvasFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    MISSING_TYPE *_snappingFeedback;	// 8 = 0x8
    MISSING_TYPE *_pathCompletingFeedback;	// 16 = 0x10
}

+ (id)defaultConfiguration;	// IMP=0x00600000001b7910
- (void).cxx_destruct;	// IMP=0x00000000001b79c0
- (id)init;	// IMP=0x00000000001b7940
@property(nonatomic) long long requiredPeripheralSupportLevel;
@property(nonatomic) long long requiredSupportLevel;
@property(nonatomic, readonly) NSArray *feedbackKeyPaths;
@property(nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *pathCompletingFeedback;
@property(nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *snappingFeedback;

@end

