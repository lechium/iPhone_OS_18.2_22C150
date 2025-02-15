//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureControl, CAMAbstractOverlayServiceControl, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureControlsOverlayItem : NSObject
{
    AVCaptureControl *_control;	// 8 = 0x8
    CAMAbstractOverlayServiceControl *_overlayControl;	// 16 = 0x10
}

@property(readonly, nonatomic) CAMAbstractOverlayServiceControl *overlayControl; // @synthesize overlayControl=_overlayControl;
@property(readonly, nonatomic) AVCaptureControl *control; // @synthesize control=_control;
- (void)dealloc;	// IMP=0x0000000000026c4e
- (id)initWithControl:(id)arg1 overlayControl:(id)arg2;	// IMP=0x0000000000026be5
@property(readonly, copy, nonatomic) NSString *identifier;

@end

