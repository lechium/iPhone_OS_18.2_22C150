//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewFloatAnimatableProperty, _UIViewControllerAnimatedTransitionViewControllerHandoffData;

__attribute__((visibility("hidden")))
@interface _UIViewControllerAnimatedTransitionHandoffData : NSObject
{
    _Bool _isPush;	// 8 = 0x8
    _UIViewControllerAnimatedTransitionViewControllerHandoffData *_fromViewControllerHandoffData;	// 16 = 0x10
    _UIViewControllerAnimatedTransitionViewControllerHandoffData *_toViewControllerHandoffData;	// 24 = 0x18
    UIViewFloatAnimatableProperty *_progressValue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b8acdf
@property(readonly, nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(readonly, nonatomic) UIViewFloatAnimatableProperty *progressValue; // @synthesize progressValue=_progressValue;
@property(readonly, nonatomic) _UIViewControllerAnimatedTransitionViewControllerHandoffData *toViewControllerHandoffData; // @synthesize toViewControllerHandoffData=_toViewControllerHandoffData;
@property(readonly, nonatomic) _UIViewControllerAnimatedTransitionViewControllerHandoffData *fromViewControllerHandoffData; // @synthesize fromViewControllerHandoffData=_fromViewControllerHandoffData;
- (id)handoffDataForViewController:(id)arg1;	// IMP=0x0000000000b8ac17
- (id)initWithFromViewControllerHandoffData:(id)arg1 toViewControllerHandoffData:(id)arg2 progressValue:(id)arg3 isPush:(_Bool)arg4;	// IMP=0x0000000000b8ab52

@end

