//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI23UIKitMainMenuController : UIResponder
{
    MISSING_TYPE *commandsList;	// 8 = 0x8
    MISSING_TYPE *environment;	// 880752 = 0xd7070
    MISSING_TYPE *focusedValues;	// 0 = 0x0
    MISSING_TYPE *topLevelItemCoordinators;	// 0 = 0x0
    MISSING_TYPE *keyCommandMap;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000098b480
- (id)init;	// IMP=0x000000000098b420
- (void)_performMainMenuShortcutKeyCommand:(id)arg1;	// IMP=0x000000000098a770
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000098a6c0
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x000000000098a670

@end
