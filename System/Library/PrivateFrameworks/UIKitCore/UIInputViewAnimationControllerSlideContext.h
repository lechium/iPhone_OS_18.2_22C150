//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewSetPlacement, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerSlideContext : NSObject
{
    UIView *_snapshot;	// 8 = 0x8
    UIInputViewSetPlacement *_endPlacement;	// 16 = 0x10
    struct CGRect _snapshotEndFrame;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c374b8
@property(retain, nonatomic) UIInputViewSetPlacement *endPlacement; // @synthesize endPlacement=_endPlacement;
@property(nonatomic) struct CGRect snapshotEndFrame; // @synthesize snapshotEndFrame=_snapshotEndFrame;
@property(retain, nonatomic) UIView *snapshot; // @synthesize snapshot=_snapshot;

@end
