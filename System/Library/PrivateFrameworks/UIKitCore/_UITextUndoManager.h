//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager
{
    UITextInputController *_inputController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000017b2f86
@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
- (void)redo;	// IMP=0x00000000017b2ec4
- (void)undo;	// IMP=0x00000000017b2e2f
- (_Bool)canRedo;	// IMP=0x00000000017b2d73
- (_Bool)canUndo;	// IMP=0x00000000017b2cb7
- (void)removeAllActions;	// IMP=0x00000000017b2bf6

@end
