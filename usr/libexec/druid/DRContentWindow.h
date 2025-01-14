//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindow.h>

@class NSMutableDictionary;

@interface DRContentWindow : UIWindow
{
    NSMutableDictionary *_activeSessionViewModelsForTouchID;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x0040000000009b2c
- (void).cxx_destruct;	// IMP=0x002000000000a995
@property(retain, nonatomic) NSMutableDictionary *activeSessionViewModelsForTouchID; // @synthesize activeSessionViewModelsForTouchID=_activeSessionViewModelsForTouchID;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000a5fb
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000a286
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009f9b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009c50
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000009bb9
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0010000000009b34

@end

