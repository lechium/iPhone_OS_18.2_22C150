//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScreen, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreen : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    UIViewController *_rootViewController;	// 32 = 0x20
    UIWindow *__window;	// 40 = 0x28
    struct CGSize _size;	// 48 = 0x30
}

+ (id)new;	// IMP=0x00100000001d3f10
- (void).cxx_destruct;	// IMP=0x00000000001d3ed2
@property(retain, nonatomic, setter=_setWindow:) UIWindow *_window; // @synthesize _window=__window;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setType:) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic, setter=_setIdentifier:) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setScreen:) UIScreen *screen; // @synthesize screen=_screen;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000001d3d0a
- (void)_updateWindow;	// IMP=0x00000000001d3808
- (id)_associatedWindowScene;	// IMP=0x00000000001d35f6
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSString *_typeName;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long placeholderType;
- (_Bool)isEqualToAirPlayScreen:(id)arg1;	// IMP=0x00000000001d2f5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d2f06
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x00000000001d2e63
- (id)initWithScreen:(id)arg1;	// IMP=0x00000000001d2c28
- (id)init;	// IMP=0x00000000001d2bae

// Remaining properties
@property(readonly) Class superclass;

@end

