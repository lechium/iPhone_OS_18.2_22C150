//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIFeedbackVisualizer : NSObject
{
    NSMutableArray *_feedbackWindows;	// 8 = 0x8
}

+ (id)sharedVisualizer;	// IMP=0x0060000000a9c740
- (void).cxx_destruct;	// IMP=0x0000000000a9e6c7
@property(retain, nonatomic) NSMutableArray *feedbackWindows; // @synthesize feedbackWindows=_feedbackWindows;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000a9e5ea
- (void)_showVisualForFeedback:(id)arg1;	// IMP=0x0000000000a9deef
- (void)cancelVisualForFeedback:(id)arg1;	// IMP=0x0000000000a9dd81
- (void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2;	// IMP=0x0000000000a9db6b
- (void)_updateEngine:(id)arg1;	// IMP=0x0000000000a9d918
- (void)addEngine:(id)arg1;	// IMP=0x0000000000a9d8ed
- (id)_colorForFeedback:(id)arg1;	// IMP=0x0000000000a9d814
- (id)_colorForEngineState:(long long)arg1;	// IMP=0x0000000000a9d6ec
- (id)_colorForEngine:(id)arg1;	// IMP=0x0000000000a9d461
- (id)_monogramForEngine:(id)arg1;	// IMP=0x0000000000a9d2bb
- (id)init;	// IMP=0x0000000000a9d25a
- (id)engineLayersForEngine:(id)arg1;	// IMP=0x0000000000a9ca76
- (id)visualFeedbackWindowForScene:(id)arg1;	// IMP=0x0000000000a9c7c5

@end
