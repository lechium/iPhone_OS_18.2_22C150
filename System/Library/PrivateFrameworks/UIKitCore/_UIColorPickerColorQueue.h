//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, _UIColorPickerColorQueueContainer;
@protocol _UIColorPickerColorQueueDelegate;

__attribute__((visibility("hidden")))
@interface _UIColorPickerColorQueue : NSObject
{
    id <_UIColorPickerColorQueueDelegate> _delegate;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    _UIColorPickerColorQueueContainer *_latestObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c430be
@property(retain, nonatomic) _UIColorPickerColorQueueContainer *latestObject; // @synthesize latestObject=_latestObject;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak id <_UIColorPickerColorQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(_Bool)arg3;	// IMP=0x0000000000c42f8e
- (void)_forwardToDelegate:(id)arg1;	// IMP=0x0000000000c42ec4
- (void)_displayLinkFired;	// IMP=0x0000000000c42e74
- (id)init;	// IMP=0x0000000000c42d31

@end
