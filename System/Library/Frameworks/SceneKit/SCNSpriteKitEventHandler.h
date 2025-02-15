//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene *_scene;	// 8 = 0x8
    NSMutableDictionary *_touchMap;	// 16 = 0x10
    _Bool _mouseIsDown;	// 24 = 0x18
    _Bool _rightMouseIsDown;	// 25 = 0x19
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (_Bool)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001261d1
- (_Bool)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000125c22
- (_Bool)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001257f5
- (_Bool)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000125336
- (void)dealloc;	// IMP=0x00000000001252ec
- (id)init;	// IMP=0x00000000001252a0

@end

