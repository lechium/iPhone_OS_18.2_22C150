//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneComponent.h>

__attribute__((visibility("hidden")))
@interface _UISceneHostingEventDeferringClientComponent : FBSSceneComponent
{
}

- (void)invalidate;	// IMP=0x0000000000a6decd
- (void)firstResponderDidChange:(id)arg1;	// IMP=0x0000000000a6dd78
- (void)wantsKeyboardEvents:(id)arg1;	// IMP=0x0000000000a6dbea
- (void)stopObservingNotifications;	// IMP=0x0000000000a6db6f
- (void)beginObservingNotifications;	// IMP=0x0000000000a6dae6
- (void)requestKeyboardFocus;	// IMP=0x0000000000a6da47
@property(readonly, nonatomic) _Bool maintainHostFirstResponderWhenClientWantsKeyboard;
- (void)setScene:(id)arg1;	// IMP=0x0000000000a6d998

@end
